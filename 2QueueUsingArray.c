#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int front = 0,rear =0;
typedef struct {
    /*
    The queue should contain an array to hold a maximum of 10 elements.
    */
    int arr[10];
} Queue;

/*
Initialising the queue, use this queue variable 'q' in your functions.
*/
Queue q;

void enqueue(int n) {
    /*
    Enqueue the integer n into the queue.
    Ignore if the operation is not possible.
    */
    if(rear < 9)
    {
        q.arr[rear] = n; 
        rear++; 
    }

}

int dequeue() {
    /*
    Dequeue the front element from the queue and return that element.
    Return -1 the operation is not possible.
    */
    if (front == rear)
    {  
        return -1; 
    } 
  
        // shift all the elements from index 2 till rear 
        // to the left by one 
    else
    { 
        int temp = q.arr[0];
        for (int i = 0; i < rear - 1; i++)  
            q.arr[i] = q.arr[i + 1];
        rear--;     
        return temp;   
    } 
  
        // decrement rear 
}

bool isEmpty() {
    /*
    Check if the queue is empty or not. Return true/false.
    */
    return(front==rear);
}

bool isFull() {
    /*
    Check if the queue is full or not. Return true/false.
    */
    return(rear>=9);
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
            // case 4: ;
            //         Stack temp;
            //         pop(&temp);
            //         push(&temp, n);
            //         break;
        }
    }
    return 0;
}