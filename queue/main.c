#include "queue.h"
#include <stdio.h>

int main() {
    Queue q;
    init_queue(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);

    int frontItem = peek(&q);
    printf("Front item in the queue: %d\n", frontItem);

    int removedItem = dequeue(&q);
    printf("Removed item: %d\n", removedItem);

    frontItem = peek(&q);
    printf("Front item in the queue after dequeue: %d\n", frontItem);

    if (empty(&q)) {
        printf("Queue is empty\n");
    }
    else {
        printf("Queue is not empty\n");
    }

    return 0;
}