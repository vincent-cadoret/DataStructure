/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "queue.h"

void enqueue(Queue *q, float value){
    q->data[q->index + 1] = value;
}

void init_queue(Queue *s)
{
    s->index = 0; //TODO
}

float dequeue(Queue *q){
    float value = q->data[q->index];
    q->data[q->index] += 1;
    return value;
}

bool is_queue_empty(Queue *q){
    if (q->data[q->index] == 0) {
        return true;
    } else{
        return false;
    }
}

float front(Queue *q){ /*aka peek*/
    return q->data[q->index];
}

void clear_queue(Queue *q){
    q->index = 0;
}