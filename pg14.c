#include <stdio.h>
#include <stdlib.h>

#define MAX_NODES 100


struct Node {
    int data;
    struct Node* next;
};


struct Graph {
    int numNodes;
    struct Node* adjacencyList[MAX_NODES];
};


void initializeGraph(struct Graph* graph, int numNodes) {
    graph->numNodes = numNodes;

    
    for (int i = 0; i < numNodes; ++i) {
        graph->adjacencyList[i] = NULL;
    }
}


void addEdge(struct Graph* graph, int src, int dest) {
    
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = dest;
    newNode->next = graph->adjacencyList[src];
    graph->adjacencyList[src] = newNode;

    
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = src;
    newNode->next = graph->adjacencyList[dest];
    graph->adjacencyList[dest] = newNode;
}


void BFS(struct Graph* graph, int start) {
    int visited[MAX_NODES] = {0};
    int queue[MAX_NODES];
    int front = 0, rear = 0;

    printf("BFS Traversal: ");

    visited[start] = 1;
    queue[rear++] = start;

    while (front < rear) {
        int current = queue[front++];
        printf("%d ", current);

        struct Node* temp = graph->adjacencyList[current];
        while (temp != NULL) {
            int neighbor = temp->data;
            if (!visited[neighbor]) {
                visited[neighbor] = 1;
                queue[rear++] = neighbor;
            }
            temp = temp->next;
        }
    }

    printf("\n");
}


void DFSUtil(struct Graph* graph, int current, int visited[]) {
    visited[current] = 1;
    printf("%d ", current);

    struct Node* temp = graph->adjacencyList[current];
    while (temp != NULL) {
        int neighbor = temp->data;
        if (!visited[neighbor]) {
            DFSUtil(graph, neighbor, visited);
        }
        temp = temp->next;
    }
}

void DFS(struct Graph* graph, int start) {
    int visited[MAX_NODES] = {0};

    printf("DFS Traversal: ");
    DFSUtil(graph, start, visited);

    printf("\n");
}

int main() {
    struct Graph graph;
    int numNodes, numEdges, i;

    printf("Enter the number of nodes and edges: ");
    scanf("%d %d", &numNodes, &numEdges);

    initializeGraph(&graph, numNodes);

    printf("Enter the edges (node1 node2):\n");
    for (i = 0; i < numEdges; ++i) {
        int src, dest;
        scanf("%d %d", &src, &dest);
        addEdge(&graph, src, dest);
    }

    int startNode;
    printf("Enter the starting node for traversal: ");
    scanf("%d", &startNode);

    BFS(&graph, startNode);
    DFS(&graph, startNode);
     
     return 0;
}
