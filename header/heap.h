#include <stdbool.h>
#include <float.h>

#ifndef HEAP_H
#define HEAP_H
#define HEAP_MAX_SIZE 100

typedef struct {
    float data[HEAP_MAX_SIZE];
    int index;
} Heap;


#endif /* HEAP_H */

void init_heap(Heap *h);
bool is_heap_empty(Heap *h);
float pop(Heap *h);
void push(Heap *h, float value);
float replace(Heap *h, float value);
float peek(Heap *h);
void heapify(Heap *s, float array[], size_t array_size);
void heapSort(Heap *h);


