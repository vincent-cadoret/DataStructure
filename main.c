#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "header/array_list.h"
#include "header/heap.h"

/**
 * Fonction de test ArrayList
 */
#ifdef _WIN32


void testArrayList(void) {
    printf("You have Windows Operating System\n");
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
#ifdef __linux__
void testHeap(void) {
    printf("You have Linux Operating System");
}
void testArrayList(void) {

}
#endif

int main(int argc, char** argv) {
    testArrayList();
    testHeap();
    return (EXIT_SUCCESS);
}

