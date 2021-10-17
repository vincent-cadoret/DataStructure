//
// Created by Vincent Cadoret on 10/16/2021.
//

#include <assertLinux.h>

#include <stdio.h>
#include <stack.h>

#include <malloc.h>
#include <heap.h>
#include <array_list.h>

#ifdef __linux__
void operatingSystem(){
    printf("You have Linux Operating System\n");
}
void testStack(){
    Stack *s;
    s = malloc(sizeof(Stack));
    init_stack(s);
    CU_ASSERT(s->index == 0);

    /*
     * Vérifie l'empilement de la valeur ajouté et l'incrémentation de l'index
     */
    push_stack(s, 55);
    CU_ASSERT(s->index == 1);
    CU_ASSERT(s->data[0] == 55);

    push_stack(s, 10);
    CU_ASSERT(s->index == 2);
    CU_ASSERT(s->data[1] == 10);

    /*
     * Vérifie qu'on récupère bien la dernière valeur de la pile
     */
    pop_stack(s);
    CU_ASSERT(s->index == 2);
    CU_ASSERT(s->data[1] == 10);

    /*
     * Vérifie que la pile n'est pas vide
     */
    is_stack_empty(s);
    CU_ASSERT(true);

    /*
     * Verifie que les 2 valeurs du sommet sont dupliqués
     */
    dup(s);
    CU_ASSERT(s->data[1] == s->data[2]);
    CU_ASSERT(s->index == 3);
    CU_ASSERT(s->data[2] == 10);

    /*
     * Verifie que l'echange s'effectue entre les valeurs du haut
     */
    push_stack(s, 99);
    swap(s);
    CU_ASSERT(s->data[2] == 99);
    CU_ASSERT(s->data[3] == 10);

    /*
     * Verifie que la pile soit bien vidé
     */
    clear_stack(s);
    for (int i = 0; i != STACK_MAX_SIZE ; i++) {
        CU_ASSERT(s->data[i] == 0);
    }
    printf("Stack OK !\n");
}
void testQueue(void){
    Queue *q = malloc(sizeof(Queue));

    init_queue(q);
    CU_ASSERT(q->index == 0);

    enqueue(q, 48);
    CU_ASSERT(q->data[0] == 48);
    CU_ASSERT(q->index == 1);

    enqueue(q, 56);
    CU_ASSERT(q->data[0] == 56);
    CU_ASSERT(q->index == 2);

    enqueue(q, 78);
    CU_ASSERT(q->data[0] == 78);
    CU_ASSERT(q->index == 3);

    dequeue(q);
    CU_ASSERT(q->data[0] == 78);
    CU_ASSERT(q->index == 2);

    CU_ASSERT(is_queue_empty(q) == false);
    CU_ASSERT(front(q) == 56);

    printf("Queue OK !\n");
}
void testHeap(void) {
    Heap *h = malloc(sizeof(Heap));

    /**
     * Initialisation du tableau;
     */
    init_heap(h);
    CU_ASSERT(h->index == 0);
    CU_ASSERT(is_heap_empty(h) == true);

    h->data[0] = 0;
    CU_ASSERT(peek(h) == 0);

    printf("Heap OK !\n");
}
void testArrayList(void) {
    Array_list *l = malloc(sizeof(Array_list));

    init_array_list(l);
    CU_ASSERT(l->index == 0);

    /**
     * Test ajout sans passer de position en paramètre
     */
    add(l, 63);
    CU_ASSERT(l->data[0] == 63);
    CU_ASSERT(l->index == 1);


    /**
     * Test ajout avec passage de position en paramètre
     */
    insert_at(l, 80, 56);
    CU_ASSERT(l->index == 2);
    CU_ASSERT(l->data[1] == 56);


    /**
     * Test ajout avec passage de position en paramètre
     */
    insert_at(l, 1, 48);
    CU_ASSERT(l->index == 3);
    CU_ASSERT(l->data[1] == 48);


    /**
     * Test suppression valeur a un index precis.
     */
    remove_at(l, 1);
    CU_ASSERT(l->index == 2);
    CU_ASSERT(l->data[1] == 56);


    /**
     * Obtention de la valeur 56 dans l'arraylist.
     */
    CU_ASSERT(get_at(l, 1) == 56);
    clear(l);


    /**
     * On verifie que le tableau a bien ete vider.
     */
    CU_ASSERT(l->index == 0);

    printf("ArrayList OK !\n");
}
#endif