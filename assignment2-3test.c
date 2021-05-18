#include<stdio.h>
#include"assignment2-3.h"
void main()
{
    struct node *l=NULL;
    int a,j=0,n;
    printf(" enter number of nodes = ");
    scanf("%d",&n);
    while(j<n)
    {
        printf(" enter value ");
        scanf("%d",&a);
        add(&l,a);
        j++;
    }
    printf(" unsorted list = ");
    display(l);
    printf("\n");
    for(j=0;j<n;j++)
    {
        isort(&l);
    }

    printf("\n");
    printf("   sorted list = ");
    display(l);

}
