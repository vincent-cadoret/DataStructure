#include <stdlib.h>

int main(void) {
    /**
     * @brief Affiche les résultats des tests unitaires avec les asserts.
     */
    #ifdef _WIN32
        #include <assertWindows.h>

        operatingSystem();
        testStack();
        testQueue();
        testArrayList();
        testHeap();
    #endif

    /**
     * @brief Affiche les résultats des tests unitaires avec CUnit.
     */
    #ifdef __linux__
        #include <assertLinux.h>

        operatingSystem();
        testStack();
        testQueue();
        testArrayList();
        testHeap();
    #endif
    return (EXIT_SUCCESS);
}

