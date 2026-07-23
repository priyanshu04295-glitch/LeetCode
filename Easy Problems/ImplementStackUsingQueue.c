#include <stdbool.h>
#include <stdlib.h>

// Helper structure to simulate a standard Queue
typedef struct {
    int data[20000];
    int front;
    int rear;
    int count;
} Queue;

Queue* createQueue() {
    Queue* q = (Queue*)malloc(sizeof(Queue));
    q->front = 0;
    q->rear = 0;
    q->count = 0;
    return q;
}

void queuePush(Queue* q, int val) {
    q->data[q->rear++] = val;
    q->count++;
}

int queuePop(Queue* q) {
    q->count--;
    return q->data[q->front++];
}

int queuePeek(Queue* q) {
    return q->data[q->front];
}

bool queueIsEmpty(Queue* q) {
    return q->count == 0;
}

// --- MyStack Implementation ---

typedef struct {
    Queue* q;
} MyStack;

MyStack* myStackCreate() {
    MyStack* obj = (MyStack*)malloc(sizeof(MyStack));
    obj->q = createQueue();
    return obj;
}

void myStackPush(MyStack* obj, int x) {
    queuePush(obj->q, x);
    int size = obj->q->count;
    // Rotate all elements before 'x' to the back
    for (int i = 0; i < size - 1; i++) {
        queuePush(obj->q, queuePop(obj->q));
    }
}

int myStackPop(MyStack* obj) {
    return queuePop(obj->q);
}

int myStackTop(MyStack* obj) {
    return queuePeek(obj->q);
}

bool myStackEmpty(MyStack* obj) {
    return queueIsEmpty(obj->q);
}

void myStackFree(MyStack* obj) {
    free(obj->q);
    free(obj);
}