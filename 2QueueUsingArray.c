#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
typedef struct {
    int a[10];
} Queue;

Queue q;
int front=0;
int rear=0;

void enqueue(int n) {
    if(rear<9)
    {
        q.a[rear]=n;
        rear++;
    }
}

int dequeue() {
    if(rear == front)
    {
        return -1;
    }
    else 
    {
        front++;
        return q.a[front-1];   
    }
}

bool isEmpty() {
    if(front==rear)
    {
        return true;
    }
    else 
    {
        return false;   
    }
}

bool isFull() {
    if(rear==9 && front==0)
    {
        return true;
    }
    else {
        return false;
    }
}
int main() {
    int q, choice, n;
    scanf("%d", &q);
    while(q--) {
        scanf("%d%d", &choice, &n);
        switch(choice) {
            case 0: enqueue(n);
                    break;
            case 1: printf("%d\n", dequeue());
                    break;
            case 2: printf("%d\n", isEmpty());
                    break;
            case 3: printf("%d\n", isFull());
                    break;
        }
    }
    return 0;
}

