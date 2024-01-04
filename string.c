class BitSet:
    def __init__(self, size):
        self.size = size
        self.bits = [0] * ((size // 64) + 1)

    def add_element(self, element):
        if element < self.size:
            word_index = element // 64
            bit_index = element % 64
            self.bits[word_index] |= (1 << bit_index)
        else:
            print("Element out of range.")

    def remove_element(self, element):
        if element < self.size:
            word_index = element // 64
            bit_index = element % 64
            self.bits[word_index] &= ~(1 << bit_index)
        else:
            print("Element out of range.")

    def intersection(self, other_set):
        result_set = BitSet(self.size)
        for i in range(len(self.bits)):
            result_set.bits[i] = self.bits[i] & other_set.bits[i]
        return result_set

    def union(self, other_set):
        result_set = BitSet(self.size)
        for i in range(len(self.bits)):
            result_set.bits[i] = self.bits[i] | other_set.bits[i]
        return result_set

    def difference(self, other_set):
        result_set = BitSet(self.size)
        for i in range(len(self.bits)):
            result_set.bits[i] = self.bits[i] & ~other_set.bits[i]
        return result_set

    def is_subset(self, other_set):
        for i in range(len(self.bits)):
            if (self.bits[i] & other_set.bits[i]) != other_set.bits[i]:
                return False
        return True

    def display(self):
        for i in range(self.size):
            word_index = i // 64
            bit_index = i % 64
            if (self.bits[word_index] & (1 << bit_index)) != 0:
                print(i, end=' ')
        print()


# Example usage:
set1 = BitSet(100)
set2 = BitSet(100)

set1.add_element(1)
set1.add_element(3)
set1.add_element(5)

set2.add_element(3)
set2.add_element(5)
set2.add_element(7)

print("Set 1:")
set1.display()

print("Set 2:")
set2.display()

intersection_set = set1.intersection(set2)
print("Intersection:")
intersection_set.display()

union_set = set1.union(set2)
print("Union:")
union_set.display()

difference_set = set1.difference(set2)
print("Difference (Set 1 - Set 2):")
difference_set.display()

print("Is Set 2 a subset of Set 1?", set1.is_subset(set2))
