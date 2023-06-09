#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings. 
 * @s1: string number 1 to concatenate.
 * @s2: string number 2 to concatenate.
 * @n: bytes of s2 to concatenate. 
 * Return: a concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n){
    if (s1 == NULL) {
        s1 = "";
    }
    if (s2 == NULL) {
        s2 = "";
    }
    int size_s1 = 0, size_s2 = 0; 
    while (s1[size_s1] != '\0') {
        size_s1++;
    }
    while (s2[size_s2] != '\0') {
        size_s2++;
    }
    if (n >= size_s2) {
        n = size_s2; 
    }
    char *string_concatenate = malloc((size_s1 + n + 1)*sizeof(char)); 
    if (string_concatenate == NULL) {
        return NULL; 
    }
    int i, j;
    for (i = 0; i < size_s1; i++) {
        string_concatenate[i] = s1[i];
    }
    for (j = 0; j < n; j++) {
        string_concatenate[i + j] = s2[j]; 
    }
    string_concatenate[i + j] = '\0';
    return string_concatenate; 
}