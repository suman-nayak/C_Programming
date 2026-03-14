/*Write a menu-driven program to perform the Enqueue, Dequeue, Size and Traverse
operations on a Queue implemented using an array.*/
#include <stdio.h>
#define N 5

int q[N], f = -1, r = -1;

void enq(int x) {
    if (r == N - 1)
	    printf("Full\n");
    else {
        if (f == -1)
		f = 0;
        q[++r] = x;
    }
}
void deq() {
    if (f == -1 || f > r)
	    printf("Empty\n");
    else
	    printf("Del %d\n", q[f++]);
}

void size() {
    if (f == -1 || f > r)
	    printf("Size 0\n");
    else
	    printf("Size %d\n", r - f + 1);
}

void trav() {
    if (f == -1 || f > r)
	    printf("Empty\n");
    else {
        for (int i = f; i <= r; i++)
		printf("%d ", q[i]);
        printf("\n");
    }
}
int main() {
    int ch, x;
    while (1) {
        printf("\n-=-=-=-Deque Operation-=-=-=-\n");
        printf("1.Enq\n2.Deq\n3.Size\n4.Trav\n5.Exit\n");
	printf("Enter your Choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1: printf("Enter Data:");
                scanf("%d", &x);
		        enq(x);
		    break;
            case 2: deq();
		    break;
            case 3: size();
		    break;
            case 4: trav();
		    break;
            case 5: 
		    return 0;
            default:
		    printf("Invalid\n");
        }
    }
}
