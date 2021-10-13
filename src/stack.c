/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "stack.h"

void push(Stack *s, float value) {
    s->data[s->index + 1] = value;
}

float pop(Stack *s){
    float value = s->data[s->index];
    s->data[s->index] -= 1;
    return value;
}

bool is_stack_empty(Stack *s){
    if (s->data[s->index] == 0) {
        return true;
    } else{
        return false;
    }
}

float peek(Stack *s){
    return s->data[s->index];
}

void init_stack(Stack *s) {
    s->index = 0;
}

void dup(Stack *s){
    s->data[s->index + 1] = s->data[s->index];
}

void swap(Stack *s) {
    float temp = s->data[s->index];
    s->data[s->index] = s->data[s->index - 1];
    s->data[s->index] = temp;
}

void clear(Stack *s){
    s->index = 0;
    for (int i = 0; i != STACK_MAX_SIZE; ++i) {
        s->data[i] = 0;
    }
    s->index = 0;
}
