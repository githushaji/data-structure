#include <stdio.h>

int main() {
    int arr[100]; 
    int n = 0;    
    while (1) {
        printf("Menu:\n");
        printf("1. Insert an element at a particular location\n");
        printf("2. Delete an element\n");
        printf("3. Traverse\n");
        printf("4. Exit\n");

        int choice;
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (n < 100) {
                    int element, position;

                    printf("Enter the element to insert: ");
                    scanf("%d", &element);

                    printf("Enter the position to insert the element: ");
                    scanf("%d", &position);

                    if (position >= 0 && position <= n) {
                        for (int i = n; i > position; i--) {
                            arr[i] = arr[i - 1];
                        }
                        arr[position] = element;
                        n++; 
                        printf("Element inserted successfully at position %d\n", position);
                    } else {
                        printf("Invalid position. Please enter a valid position.\n");
                    }
                } else {
                    printf("Array is full. Cannot insert more elements.\n");
                }
                break;

            case 2:
                if (n > 0) {
                    int element, found = 0;

                    printf("Enter the element to delete: ");
                    scanf("%d", &element);

                    for (int i = 0; i < n; i++) {
                        if (arr[i] == element) {
                            
                            for (int j = i; j < n - 1; j++) {
                                arr[j] = arr[j + 1];
                            }
                            n--; 
                            found = 1;
                            printf("Element %d deleted from the array.\n", element);
                            break;
                        }
                    }

                    if (!found) {
                        printf("Element not found in the array.\n");
                    }
                } else {
                    printf("Array is empty. Cannot delete elements.\n");
                }
                break;

            case 3:
                if (n == 0) {
                    printf("Array is empty.\n");
                } else {
                    printf("Array Elements: ");
                    for (int i = 0; i < n; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;

            case 4:
                printf("Exiting the program.\n");
                return 0;

            default:
                printf("Invalid choice. Please select a valid option.\n");
        }
    }

    return 0;
}
