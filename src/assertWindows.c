//
// Created by Vincent Cadoret on 10/16/2021.
//

#include <stdio.h>
#include <malloc.h>

#include <array_list.h>
#include <assert.h>
#include <heap.h>
#include <stack.h>
#include <queue.h>

#ifdef _WIN32
void operatingSystem(){
    printf("You have Windows Operating System\n");
}
void testStack(void){
    Stack *s = malloc(sizeof(Stack));

    /**
     * Initialisation d'un nouveau Stack.
     */
    init_stack(s);
    assert(s->index == 0);

    /**
     * Insertion de valeur
     */
    push_stack(s, 8);
    assert(s->index == 1);
    assert(s->data[0] == 8);

    /**
     * Retourne le dernière élément avant de le supprimer.
     */
    assert(peek_stack(s) == 8);

    /**
     * Supprime le dernière élément du Stack.
     */
    pop_stack(s);
    assert(s->index == 0);

    /**
     * Ajout de deux valeurs.
     */
    push_stack(s, 8);
    push_stack(s, 73);

    /**
     * Vide le tableau.
     */
    clear_stack(s);
    for (int i = 0; i != STACK_MAX_SIZE ; i++) {
        assert(s->data[i] == 0);
    }

    printf("Stack OK !\n");
}
void testQueue(void){
    Queue *q = malloc(sizeof(Queue));

    /**
     * Initialisation du Queue.
     */
    init_queue(q);
    assert(q->index == 0);

    /**
     * Ajout de valeurs (x3)
     */
    enqueue(q, 48);
    assert(q->data[0] == 48);
    assert(q->index == 1);

    enqueue(q, 56);
    assert(q->data[0] == 56);
    assert(q->index == 2);

    enqueue(q, 78);
    assert(q->data[0] == 78);
    assert(q->index == 3);

    /**
     * Suppresion de valeur
     */
    dequeue(q);
    assert(q->data[0] == 78);
    assert(q->index == 2);

    /**
     * Verifie si le tableau est vide ou non.
     */
    assert(is_queue_empty(q) == false);
    assert(front(q) == 56);

    /**
     * Vide le tableau.
     */
    clear_queue(q);
    for (int i = 0; i != QUEUE_MAX_SIZE ; i++) {
        assert(q->data[i] == 0);
    }

    printf("Queue OK !\n");
}
void testArrayList(void) {
    Array_list *l = malloc(sizeof(Array_list));

    /**
     * Initalisation du Array.
     */
    init_array_list(l);
    assert(l->index == 0);

    /**
     * Test ajout sans passer de position en paramètre
     */
    add(l, 63);
    assert(l->data[0] == 63);
    assert(l->index == 1);


    /**
     * Test ajout avec passage de position en paramètre
     */
    insert_at(l, 80, 56);
    assert(l->index == 2);
    assert(l->data[1] == 56);


    /**
     * Test ajout avec passage de position en paramètre
     */
    insert_at(l, 1, 48);
    assert(l->index == 3);
    assert(l->data[1] == 48);


    /**
     * Test suppression valeur a un index precis.
     */
    remove_at(l, 1);
    assert(l->index == 2);
    assert(l->data[1] == 56);


    /**
     * Obtention de la valeur 56 dans l'arraylist.
     */
    assert(get_at(l, 1) == 56);
    clear(l);


    /**
     * On verifie que le tableau a bien ete vider.
     */
    assert(l->index == 0);

    printf("ArrayList OK !\n");
}


/**
 * Fonction test du Heap;
 */
void testHeap(void) {
    Heap *h = malloc(sizeof(Heap));

    /**
     * Initialisation du heap;
     */
    init_heap(h);
    assert(h->index == 0);

    /**
     * Verifie si le tableau est vide.
     */
    assert(is_heap_empty(h) == true);

    /**
     * Retourne le dernière élément avant de le supprimer.
     */
    h->data[0] = 0;
    assert(peek(h) == 0);

    printf("Heap OK !\n");
}
#endif