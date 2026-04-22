#include <stdio.h>
#define max 10

int graph[max][max], show[max], que[max];
int front = -1, rear = -1, n;

void Enque(int value) {
    if (rear == max - 1)
        return;
    if (front == -1)
        front = 0;
    rear++;
    que[rear] = value;
}

int Deque() {
    if (front == -1 || front > rear)
        return -1;
    int item = que[front];
    front++;
    return item;
}

void bfs(int start) {
    Enque(start);
    show[start] = 1;

    while (front <= rear) {
        int node = Deque();
        if (node == -1)
		break;
        printf("%d ", node);

        for (int i = 0; i < n; i++) {
            if (graph[node][i] == 1 && show[i] == 0) {
                Enque(i);
                show[i] = 1;
            }
        }
    }
}

int main() {
    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &graph[i][j]);
        }
        show[i] = 0;
    }

    int start;
    printf("Enter starting node: ");
    scanf("%d", &start);

    printf("BFS Traversal: ");
    bfs(start);

    return 0;
}
