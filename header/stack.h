/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   stack.h
 * Author: aurelio
 *
 */

#include <stdbool.h>

#ifndef STACK_H
#define STACK_H

#define STACK_MAX_SIZE 100

typedef struct {
    float data[STACK_MAX_SIZE];
    int index;
} Stack;

#endif /* STACK_H */

void init_stack(Stack *s);1
void push(Stack *s, float value);1
float pop(Stack *s);0
bool is_stack_empty(Stack *s);0
float peek(Stack *s);0 // aka top or front
void dup(Stack *s);1
void swap(Stack *s);1
void clear(Stack *s);1

