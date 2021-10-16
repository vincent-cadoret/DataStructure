//
// Created by Vincent Cadoret on 10/16/2021.
//

#include <stdio.h>
#include <malloc.h>

#include <array_list.h>
#include <assert.h>
#include <heap.h>
#include <stack.h>

#ifdef _WIN32
void operatingSystem(){
    printf("You have Windows Operating System\n");
}
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
void testQueue(void){
    //TODO
}
void testArrayList(void) {
    Array_list *l = malloc(sizeof(Array_list));

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
     * Initialisation du tableau;
     */
    init_heap(h);
    assert(h->index == 0);
    assert(is_heap_empty(h) == true);

    h->data[0] = 0;
    assert(peek(h) == 0);

    printf("Heap OK !\n");
}
#endif