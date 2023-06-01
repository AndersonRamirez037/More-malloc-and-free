#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers. 
 * @min: min of the integers. 
 * @max: max of the integers.
 * Return: an array of integers. 
 */
int *array_range(int min, int max){
    if (min > max){
        return NULL;
    }
    int *memory = malloc((max - min + 1)*sizeof(int)); 
    if (memory == NULL) {
        return NULL;
    }
    for (int i = 0; i <= (max - min); i++) {
        memory[i] = i;
    }
    return memory; 
}