#include <heap.h>

void init_heap(Heap *h){
    h->index = 0;
}
bool is_heap_empty(Heap *h){
    return h->index == 0;
}
float pop(Heap *h) {
    int i, swap;
    float temp = h->data[--h->index];
    for (i = 0; 1; i = swap) {
        swap = (i << 1) + 1;
        if (swap >= h->index) {
            break;
        }
        if ((swap + 1 < h->index) && h->data[swap + 1] >= h->data[swap]) {
            swap++;
        }
        if (temp >= h->data[swap]) {
            break;
        }
        h->data[i] = h->data[swap];
    }
    h->data[i] = temp;
}
void push(Heap *h, float value){
    int parent, i;
    for (i = h->index++; i; i = parent){
        parent = (i - 1) >> 1;
        if (h->data[parent] >= value){
            break;
        }
        h->data[i] = h->data[parent];
    }
    h->data[i] = value;
}
float replace(Heap *h, float value) {
    if(h->index == 0){
        h->index++;
    }
    float val = h->data[0];
    h->data[0] = value;
    heapSort(h);
    return val;
}
float peek(Heap *h){
    return h->data[0];
}
void heapify(Heap *s, float array[], size_t array_size){
    for(int i =0; i < array_size/sizeof(float); i++){
        push(s, array[i]);
    }
}
void merge(Heap *dest, Heap *src){

}
void heapSort(Heap *h){
    for (int i = h->index / 2 - 1; i >= 0; i--){
        heapify(h, h->data, sizeof(float)* h->index);
    }
    for (int i = h->index-1; i > 0; i--) {
        float temp = h->data[0];
        h->data[0] = h->data[i];
        h->data[i] = temp;
        heapify(h, h->data, sizeof(float)*h->index);
    }
}

