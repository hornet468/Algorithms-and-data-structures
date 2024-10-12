#include "queue.h"
#include <stdio.h>

void init_queue(Queue* q)
{
	q->front = 0;
	q->rear = -1;
}

void enqueue(Queue *q, int data)
{
	if (q->rear == MAX -1)
	{
		printf("Failed to add to queue");
		return;
	}
	q->rear++;
	q->item[q->rear] = data;
}
int dequeue(Queue *q)
{
	if (empty(q))
	{
		printf("Failed to remove to queue");
		return -1;
	}
	int data = q->item[q->front];
	q->front++;
	return data;
}
int peek(Queue *q)
{
	if (empty(q))
	{
		printf("Queue id empty");
		return -1;
	}
	return q->item[q->front];
}

int empty(Queue *q)
{
	return q->front > q->rear;
}