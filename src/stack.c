/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "assert.h"
#include "stack.h"

/**
 * init: Initialise la pile
 * @param s
 */
void init_stack(Stack *s) {
    s->index = 0;
}

/**
 * push : Empilement de données
 * @param s
 * @param value
 */

void push_stack(Stack *s, float value) {
    s->data[s->index + 1] = value;
}

/**
 * pop : Récupération des données
 * @param s
 * @return
 */
float pop_stack(Stack *s){
    float value = s->data[s->index];
    s->data[s->index] -= 1;
    return value;
}

/**
 * is_empty: Etat de la pile
 * @param s
 * @return
 */
bool is_stack_empty(Stack *s){
    if (s->data[s->index] == 0) {
        return true;
    } else{
        return false;
    }
}

/**
 * peek : Récupération de données sans des-empiler
 * @param s
 * @return
 */
float peek_stack(Stack *s){
    return s->data[s->index];
}

/**
 * dup : Duplique le sommet de la pile
 * @param s
 */
 void dup(Stack *s){
    s->data[s->index + 1] = s->data[s->index];
}

/**
 * swap : Echange les deux éléments au sommet
 * @param s
 */
 void swap(Stack *s) {
    float temp = s->data[s->index];
    s->data[s->index] = s->data[s->index - 1];
    s->data[s->index] = temp;
}

/**
 * clear: Vide la pile
 * @param s
 */
 void clear_stack(Stack *s){
    s->index = 0;
    for (int i = 0; i != STACK_MAX_SIZE; ++i) {
        s->data[i] = 0;
    }
    s->index = 0;
}