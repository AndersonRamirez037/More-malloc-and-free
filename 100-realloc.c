#include "main.h"
/**
 * 
 * 
 * 
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size){
    if (new_size == old_size) {
        return ptr; 
    }
    char *copy = (char*)prt; 
    *copy = malloc(new_size);
    if (copy == NULL) {
        return NULL; 
    }
    for (int i = 0; i < new_size; i++) {

    }
    return ptr; 
}