/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "queue.h"

/**
 * enqueue: Ajout de données
 * @param q
 * @param value
 */
void enqueue(Queue *q, float value) {
    q->data[q->index + 1] = value;
}

/**
 * init : Récupération des données
 * @param s
 */
void init_queue(Queue *s) {
    s->index = 0; //TODO
}

/**
 * dequeue : Récupération des données
 * @param q
 * @return
 */
float dequeue(Queue *q) {
    float value = q->data[q->index];
    q->data[q->index] += 1;
    return value;
}

/**
 * is_empty : Etat de la pile
 * @param q
 * @return
 */
bool is_queue_empty(Queue *q) {
    if (q->data[q->index] == 0) {
        return true;
    } else{
        return false;
    }
}

/**
 *
 * @param q
 * @return
 */
float front(Queue *q) {
    return q->data[q->index];
}

/**
 * clear: Vide la file
 * @param q
 */
void clear_queue(Queue *q) {
    q->index = 0;
}