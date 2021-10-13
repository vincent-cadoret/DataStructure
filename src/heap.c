#include <heap.h>

void init_heap(Heap *h){
    h->index = 0;
}
bool is_heap_empty(Heap *h){
    return h->index == 0;
}
float pop(Heap *h) {

}
void push(Heap *h, float value){

}
float replace(Heap *h, float value) {

}
float peek(Heap *h){
    return h->data[0];
}
void heapify(Heap *s, float array[], size_t array_size){

}
void merge(Heap *dest, Heap *src){

}

