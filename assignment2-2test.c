#include<stdio.h>
#include"assignment2-2.h"
#include<stdlib.h>
int main()
{

    struct lt *o=NULL,*s=NULL;
    struct  node *p=NULL;
    int c,d,f,a,z,j=0,g;
    while(1)
    {
        printf("\n");

        printf(" 1. addashead \n");
        printf(" 2. addastail \n");
        printf(" 3. booleanisempty \n");
        printf(" 4. length of list \n");
        printf(" 5. print list \n");
        printf(" 6. nodefind \n");
        printf(" 7. reverse the list \n");
        printf(" 8. pophead \n");
        printf(" 9. removefirst \n");
        printf(" 10. removeall \n");
        printf(" 11. addsorted \n");
        printf(" 12. addall \n");

        printf(" enter any number to exit ");

        printf("\n");
        printf("\n");

        printf(" Enter your choice = ");
        scanf("%d",&c);

        printf("\n");
        switch(c)
        {
            case 1:printf(" enter value = ");
                   scanf("%d",&a);
                   addashead(&o,a);
                   break;
            case 2:printf(" enter value = ");
                   scanf("%d",&a);
                   addastail(&o,a);
                   break;
            case 3:d=booleanisempty(o);
                   if(d==1)
                   {
                       printf(" list is empty ");
                   }
                   else
                   {
                        printf(" list is not empty ");
                   }
                   break;
            case 4:printf(" length of list  = %d",length(o));
                   break;
            case 5:print(o);
                   break;
            case 6:printf(" enter value to find = ");
                   scanf("%d",&f);
                   p=find(o,f);
                   printf(" the node is = %d",p->a);
                   break;
            case 7:reverse(&o);
                   break;
            case 8:printf(" head = %d",pophead(&o));
                   break;
            case 9:printf(" enter value to delete = ");
                   scanf("%d",&f);
                   removefirst(&o,f);
                   break;
            case 10:printf(" enter value to delete = ");
                    scanf("%d",&f);
                    removeall(&o,f);
                    break;
           case 11:printf(" enter value to add = ");
                    scanf("%d",&f);
                    addsorted(&o,f);
                    break;
            case 12:printf(" enter number of nodes = ");
                    scanf("%d",&z);
                    while(j<z)
                    {
                        printf(" enter value for  second list = ");
                        scanf("%d",&g);
                        addastail(&s,g);
                        j++;
                    }
                    j=0;
                    addall(&s,&o);      //adds s to o the current  list
                    print(o);
                    break;
            default:exit(0);

        }
    }
    return 0;
}
