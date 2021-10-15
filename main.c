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

void JeTestStack(){
    Stack *s;
    s = malloc(sizeof(Stack));
    init_stack(s);
    assert(s->index == 0);
    printf("ETAGE0    %d\n", s->index);

    push_stack(s, 55);
    assert(s->index == 1);
    assert(s->data[0] == 55);
    printf("ETAGE0    %d\n", s->index);
    printf("ETAGE0DATA    %d\n", s->data[1]);

    push_stack(s, 100);
    assert(s->index == 2);
    assert(s->data[1] == 100);
    printf("ETAGE1    %d\n", s->index);
    printf("ETAGE1DATA    %d\n", s->data[1]);

    pop_stack(s);
    assert(s->index == 2);
    assert(s->data[1] == 100);
}

/*
 *
 */
int main(int argc, char** argv) {

    JeTestStack();

    return (EXIT_SUCCESS);
}

