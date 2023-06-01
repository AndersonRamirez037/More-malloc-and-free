#include "main.h"
#include <stdlib.h>
/**
 * function that allocates memory using malloc.
 * @b: size to allocate 
 * Return: Nothing.
 */
void *malloc_checked(unsigned int b) {
    void *memory = malloc(b);
    if (memory == NULL) {
        exit(98);
    }
    return memory;
}