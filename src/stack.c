/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include "assertLinux.h"
#include "stack.h"

/**
 * @brief Initialise la pile
 * @param s
 */
void init_stack(Stack *s) {
    s->index = 0;
}

/**
 * @brief Empilement de données
 * @param s
 * @param value
 */
void push_stack(Stack *s, float value) {
    s->data[s->index] = value;
    s->index++;
}

/**
 * @brief Récupération des données
 * @param s
 * @return
 */
float pop_stack(Stack *s){
    float isFloat = s->data[s->index - 1];
    s->index--;
    return isFloat;
}

/**
 * @brief Etat de la pile
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
 * @brief Récupération de données sans des-empiler
 * @param s
 * @return
 */
float peek_stack(Stack *s){
    return s->data[s->index - 1];
}

/**
 * @brief Duplique le sommet de la pile
 * @param s
 */
void dup(Stack *s){
    s->data[s->index] = s->data[s->index - 1];
    s->index++;
}

/**
 * @brief  Echange les deux éléments au sommet
 * @param s
 */
void swap(Stack *s) {
    if (s->index > 1){
        float temp = s->data[s->index - 1];
        s->data[s->index - 1] = s->data[s->index - 2]; // boucle d'inversion
        s->data[s->index - 2] = temp;
    }
}

/**
 * @brief Vide la pile
 * @param s
 */
 void clear_stack(Stack *s){
    s->index = 0;
    for (int i = 0; i != STACK_MAX_SIZE; i++) {
        s->data[i] = 0;
    }
    s->index = 0;
}

/**
 * @brief Fonction de test (ne pas considérer). Affiche le contenu du tableau.
 * @param s
 */
void printStack(Stack *s){
    for (int i = 0; i < STACK_MAX_SIZE; ++i) {
        printf("%f\n", s->data[i]);
    }
}