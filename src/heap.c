#include <heap.h>


/**
 * Initialise le tableau.
 * @param h
 */
void init_heap(Heap *h){
    h->index = 0;
}


/**
 * Vérifie si le heap est vide.
 * @param h
 * @return
 */
bool is_heap_empty(Heap *h){
    return h->index == 0;
}


/**
 * Pop the root value.
 * @param h
 * @return
 */
float pop(Heap *h) {
    float isFloat = 0;
    return isFloat;
}


/**
 * Return root value but don’t remove it.
 * @param h
 * @return
 */
float peek(Heap *h) {
    return h->data[0];
}


/**
 * Pop root and replace with a new value.
 * @param h
 * @param value
 * @return
 */
float replace(Heap *h, float value) {
    float isFloat = 0;
    return isFloat;
}


/**
 *
 * @param s
 * @param array
 * @param array_size
 */
void heapify(Heap *s, float array[], size_t array_size) {}


/**
 *
 * @param h
 */
void heapSort(Heap *h){}


/**
 *
 * @param h
 * @param value
 */
void push(Heap *h, float value){}

