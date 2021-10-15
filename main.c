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

    push_stack(s, 55);
    printf(s->index);
    assert(s->index == 1);
}

/*
 *
 */
int main(int argc, char** argv) {

    JeTestStack();

    return (EXIT_SUCCESS);
}

