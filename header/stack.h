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

void init_stack(Stack *s);
void push_stack(Stack *s, float value);
float pop_stack(Stack *s);
bool is_stack_empty(Stack *s);
float peek_stack(Stack *s); // aka top or front
void dup(Stack *s);
void swap(Stack *s);
void clear_stack(Stack *s);
void printStack(Stack *s);

