#include<stdio.h>
#include<stdlib.h>

int main()
{
    double *ptr = NULL;
    int iSize = 0;

    printf("Enter number of elements that you want to allocate: \n");
    scanf("%d",&iSize);

    ptr = (double *)malloc(iSize * sizeof(double));

    if (ptr == NULL)
    {
        printf("Unable to allocate memory..!\n");
        return -1;
    }
    else
    {
        printf("Memory gets allocated succesfully...\n");
    }
    
    free(ptr);

    return 0;
}
