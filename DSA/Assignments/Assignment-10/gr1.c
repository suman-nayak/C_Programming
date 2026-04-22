#include <stdio.h>
#include <stdlib.h>

#define N 6

struct Node {
    int data;
    struct Node* next;
};

struct Graph {
    struct Node* adjList[N];
};

struct Node* createNode(int data) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

struct Graph* createGraph() {
    struct Graph* graph = malloc(sizeof(struct Graph));
    for (int i = 0; i < N; i++) {
        graph->adjList[i] = NULL;
    }
    return graph;
}

void addEdge(struct Graph* graph, int src, int dest) {
    struct Node* newNode = createNode(dest);
    newNode->next = graph->adjList[src];
    graph->adjList[src] = newNode;

    newNode = createNode(src);
    newNode->next = graph->adjList[dest];
    graph->adjList[dest] = newNode;
}

void printGraph(struct Graph* graph, int values[]) {
    for (int i = 0; i < N; i++) {
        struct Node* temp = graph->adjList[i];
        printf("%d -> ", values[i]);
        while (temp) {
            printf("%d ", values[temp->data]);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main() {
    int values[N] = {10, 15, 20, 30, 45, 72};
    struct Graph* graph = createGraph();

    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 0, 3);
    addEdge(graph, 1, 3);
    addEdge(graph, 2, 3);
    addEdge(graph, 2, 4);
    addEdge(graph, 3, 4);
    addEdge(graph, 3, 5);

    printGraph(graph, values);

    return 0;
}
