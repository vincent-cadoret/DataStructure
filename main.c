#include <stdlib.h>

#include <assertLinux.h>
#include <assertWindows.h>

int main(int argc, char** argv) {
    #ifdef _WIN32
        operatingSystem();
        testStack();
        testQueue();
        testArrayList();
        testHeap();
    #endif
    #ifdef __linux__
        operatingSystem();
        testStack();
        testQueue();
        testArrayList();
        testHeap();
    #endif

    return (EXIT_SUCCESS);
}

