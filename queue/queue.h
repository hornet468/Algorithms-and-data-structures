#ifndef QUEUE_H

#define QUEUE_H
#define MAX 10

typedef struct {
	int item[MAX];
	int front;
	int rear;
} Queue;

void enqueue(Queue *q, int data);
int peek(Queue *q);
int dequeue(Queue *q);
int empty(Queue *q);
void init_queue(Queue* q);


#endif

