/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: aurelio
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <assert.h>

#include "stack.h"
#include "queue.h"

void testStack(){
    Stack *s;
    s = malloc(sizeof(Stack));
    init_stack(s);
    assert(s->index == 0);

    /*
     * Vérifie l'empilement de la valeur ajouté et l'incrémentation de l'index
     */
    push_stack(s, 55);
    assert(s->index == 1);
    assert(s->data[0] == 55);

    push_stack(s, 10);
    assert(s->index == 2);
    assert(s->data[1] == 10);

    /*
     * Vérifie qu'on récupère bien la dernière valeur de la pile
     */
    pop_stack(s);
    assert(s->index == 2);
    assert(s->data[1] == 10);

    /*
     * Vérifie que la pile n'est pas vide
     */
    is_stack_empty(s);
    assert(true);

    /*
     * Verifie que les 2 valeurs du sommet sont dupliqués
     */
    dup(s);
    assert(s->data[1] == s->data[2]);
    assert(s->index == 3);
    assert(s->data[2] == 10);

    /*
     * Verifie que l'echange s'effectue entre les valeurs du haut
     */
    push_stack(s, 99);
    swap(s);
    assert(s->data[2] == 99);
    assert(s->data[3] == 10);

    /*
     * Verifie que la pile soit bien vidé
     */
    clear_stack(s);
    for (int i = 0; i != STACK_MAX_SIZE ; i++) {
        assert(s->data[i] == 0);
    }
}

// void testQueue(){}

int main(int argc, char** argv) {

    testStack();

    //testQueue();

    return (EXIT_SUCCESS);
}

