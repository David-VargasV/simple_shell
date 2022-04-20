#include "main.h"

void free_ptr(char **ptr)
{
    int i = 0;

    while (ptr[i])
    {
        free(*(ptr + i));
        i++;
    }
	free(ptr);
}