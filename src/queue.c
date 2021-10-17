/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include "queue.h"

/**
* @brief Récupération des données
* @param s
*/
void init_queue(Queue *s) {
    s->index = 0;
}

/**
 * @brief Ajout de données
 * @param q
 * @param value
 */
void enqueue(Queue *q, float value) {
    for (int i = q->index; i >= 0; i--){ // Boucle décrémentale.
        q->data[i + 1] = q->data[i]; // on décale les valeurs vers le top du tableau.
    }
    q->data[0] = value; // on insère la valeur en première position du tableau après avoir decalé.
    q->index++;
}

/**
 * @brief Récupération des données
 * @param q
 * @return
 */
float dequeue(Queue *q) {
    float isFloat = 0;
    isFloat = q->data[q->index - 1];
    q->index--;
    return isFloat;
}

/**
 * @brief Etat de la pile
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
 * @brief Retourne le première élément du Queue.
 * @param q
 * @return
 */
float front(Queue *q) {
    return q->data[q->index - 1];
}

/**
 * @brief Vide la file
 * @param q
 */
void clear_queue(Queue *q) {
    q->index = 0;
    for (int i = 0; i != QUEUE_MAX_SIZE; ++i) {
        q->data[i] = 0;
    }
    q->index = 0;
}

/**
 * @brief Fonction de test (ne pas considérer). Affiche le contenu du tableau.
 * @param q
 */
void printQueue(Queue *q){
    for (int i = 0; i < QUEUE_MAX_SIZE; ++i) {
        printf("%f\n", q->data[i]);
    }
}