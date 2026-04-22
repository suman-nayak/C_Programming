#include<stdio.h>
#define MAX 10

int adj[MAX][MAX], visited[MAX], stack[MAX];
int n, top = -1;

void push(int v)
{
        if (top == MAX - 1)
                printf("Stack Overflow\n");
        else
                stack[++top] = v;
}

int pop ()
{
        if (top == -1)
                return -1;
        else
                stack[top--];
}

void dfs(int start)
{
        int i, v;

        push(start);

        while(top != -1)
        {
                v = pop();

                if(visited[v] == 0)
                {
                        printf("%d", v);
                        visited[v] = 1;
                }
                for(i = n - 1; i >= 0; i--){
                        if(adj [v][i] == 1 && visited[i] == 0)
                        {
                                push(i);
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
            scanf("%d", &adj[i][j]);
        }
        visited[i] = 0;
    }

    int start;
    printf("Enter starting node: ");
    scanf("%d", &start);

    printf("BFS Traversal: ");
    dfs(start);

    return 0;
}
