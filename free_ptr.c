#include "main.h"
/**
 * @ptr: 
 * 
 * Return: void (Success) 
 */
void free_ptr(char **ptr)
{
    int i = 0;

    while (ptr[i])
    {
        free(ptr[i]);
        i++;
    }
    free(ptr);
}