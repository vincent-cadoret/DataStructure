#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "header/array_list.h"
#include "header/heap.h"

/**
 * Fonction de test ArrayList
 */
void testArrayList() {
    Array_list l;

    init_array_list(&l);
    assert(l.index == 0);

    /**
     * Test ajout sans passer de position en paramètre
     */
    add(&l, 63);
    assert(l.data[0] == 63);
    assert(l.index == 1);

    /**
     * Test ajout avec passage de position en paramètre
     */
    insert_at(&l, 80, 56);
    assert(l.index == 2);
    assert(l.data[1] == 56);

    /**
     * Test ajout avec passage de position en paramètre
     */
    insert_at(&l, 1, 48);
    assert(l.index == 3);
    assert(l.data[1] == 48);

    /**
     * Test suppression valeur a un index precis.
     */
    remove_at(&l, 1);
    assert(l.index == 2);
    assert(l.data[1] == 56);

    /**
     * Obtention de la valeur 56 dans l'arraylist.
     */
    assert(get_at(&l, 1) == 56);
    clear(&l);

    /**
     * On verifie que le tableau a bien ete vider.
     */
    assert(l.index == 0);

    printf("ArrayList OK !\n");
}
void testHeap(void){
    Heap h;
    init_heap(&h);
    assert(h.index == 0);

    printf("Heap OK !\n");
}
int main(int argc, char** argv) {
    testArrayList();
    testHeap();
    return (EXIT_SUCCESS);
}

