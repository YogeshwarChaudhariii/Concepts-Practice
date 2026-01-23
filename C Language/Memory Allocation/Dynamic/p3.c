#include<stdio.h>
#include<stdlib.h>

struct Demo
{
    int no;
};

int main()
{
    struct Demo dobj;           // Static
    struct Demo *ptr = NULL;

    ptr = (struct Demo *)malloc(1 * sizeof(struct Demo));       // Dynamic

    if (ptr == NULL)
    {
        printf("Unable to allocate the memory..!\n");
        return -1;
    }
    else
    {
        printf("Memory gets allocated succesfully...\n");
    }
    
    dobj.no = 11;
    ptr->no = 11;
    
    free(ptr);

    return 0;
}
