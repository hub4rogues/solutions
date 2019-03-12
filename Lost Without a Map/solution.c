#include <stddef.h>
#include <stdlib.h>

int *maps(const int *arr, size_t size)
{
        int *newarr = calloc(size, sizeof(int));
        while (size--)
        {
                newarr[size] = arr[size]*2;
        }
        
        return newarr;
}

void main(){};
