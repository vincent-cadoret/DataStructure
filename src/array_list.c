#include <array_list.h>

void init_array_list(Array_list *l) {
    l->index = 0;
}
void insert_at(Array_list *l, int position, float value) {
    if (position > l->index) {
        add(l, value);
    } else {
        for (int i = l->index; i >= position; i--) {
            l->data[i + 1] = l->data[i];
        }
        l->data[position] = value;
        l->index++;
    }
}
void add(Array_list *l, float value) {
    l->data[l->index] = value;
    l->index++;
}
float remove_at(Array_list *l, int position) {
    float tmp = l->data[position];
    if (position <= l->index) {
        for (int i = position; i < l->index; i++) {
            l->data[i] = l->data[i + 1];
        }
        l->index--;
    }
    return tmp;
}
float get_at(Array_list *l, int position){
    return l->data[position];
}
void clear(Array_list *l){
    init_array_list(l);
}