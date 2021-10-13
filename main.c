#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <assert.h>
#include "header/array_list.h"

float test(int a) {
    errno = a;
    assert(a == 5);
    int errnum = errno;
    fprintf(stderr, "Value of errno: %d\n", errnum);
    perror("Error printed by perror");
    fprintf(stderr, "Error opening file: %s\n", strerror(errnum));

}
/**
 * Fonction de test
 */
void test_arraylist() {
    Array_list l;

    init_array_list(&l);
    assert(l.index == 0);

    add(&l, 63);
    assert(l.data[0] == 63);
    assert(l.index == 1);

    insert_at(&l, 80, 56);
    assert(l.index == 2);
    assert(l.data[1] == 56);

    insert_at(&l, 1, 48);
    assert(l.index == 3);
    assert(l.data[1] == 48);

    remove_at(&l, 1);
    assert(l.index == 2);
    assert(l.data[1] == 56);

    assert(get_at(&l, 1) == 56);
    clear(&l);

    assert(l.index == 0);
}
void checkTest(void){
    test_arraylist();
    printf("ArrayList OK !");
}
int main(int argc, char** argv) {
    checkTest();
    return (EXIT_SUCCESS);
}

