#include<stdio.h>
#include"assignment2-1.h"
#include<stdlib.h>
int booleanisempty(struct lt *l)
{
    if(l==NULL)
        return 1;
    else
        return 0;
}
int length(struct lt *l)
{
    int j=0;
    struct node *oj;
    oj=l->head->next;
    while(oj!=NULL)
    {
        if(oj->a!=0)
        {
          j++;
        }
          oj=oj->next;
    }
    return j;
}
void addastail(struct lt **l,int i)
{
   struct node *r,*o;
   r=(struct node *)malloc(sizeof(struct node));

   r->a=i;
   if((*l)==NULL)
   {
       (*l)=(struct lt *)malloc(sizeof(struct lt));

        (*l)->head=(struct node *)malloc(sizeof(struct node));

         (*l)->head->next=r;
         r->next=NULL;
   }
   else
   {
       o=(*l)->head->next;
       while(o->next!=NULL)
       {
           o=o->next;
       }
       o->next=r;
       r->next=NULL;
   }

}
 void addashead(struct lt **l,int i)
{
   struct node *r,*o;
   struct lt *lf;
   r=(struct node *)malloc(sizeof(struct node));

   r->a=i;
   if((*l)==NULL)
   {
       (*l)=(struct lt *)malloc(sizeof(struct lt));

        (*l)->head=(struct node *)malloc(sizeof(struct node));

         (*l)->head->next=r;
         r->next=NULL;
   }
   else
   {
         r->next=(*l)->head->next;
          (*l)->head->next=r;
   }
}
void print(struct lt *l)
{
    struct node *o;
    o=l->head->next;
    while(o!=NULL)
    {
        if(o->a!=0)
        printf("%d ",o->a);
        o=o->next;
    }

}
struct node *find(struct lt *l,int y)
{
    struct node *oj;
    int h=0;
    oj=l->head->next;
    if(oj->a==y)
    {
        return oj;
    }
    while(oj!=NULL)
    {
        if(oj->a==y)
        {

          return oj;
        }
        oj=oj->next;

    }
     if(oj==NULL)
           {
               printf(" value not present ");
               return;
           }
}
void reverse( struct lt **lf)
{
    int arr[100];
    int i=0,l,t,k=0;
    struct node *oj,*j;
    oj=(*lf)->head->next;
    arr[i]=oj->a;
    i++;
    while(oj->next!=NULL)
    {
       oj=oj->next;
        arr[i]=oj->a;
        i++;
    }
    for(l=0;l<=(i/2);l++)
    {
        t=arr[l];
        arr[l]=arr[i-l-1];
        arr[i-l-1]=t;
    }

     j=(*lf)->head->next;
     j->a=arr[k];
     for(k=1;k<i && j->next!=NULL;k++)
     {
        j=j->next;
        j->a=arr[k];
     }
}
int pophead(struct lt **l)
{
    struct node *u;
    int t;
    if((*l)==NULL)
    {
        printf(" empty ");
        return 0;
    }
    else
    {
         u=(*l)->head->next;
        (*l)->head->next=(*l)->head->next->next;
        t=u->a;
        return t;
        free( (*l)->head->next );
    }


}
void removefirst(struct lt **l,int f)
{
    struct node *u,*t;
    if((*l)==NULL)
    {
        printf(" empty ");
        return ;
    }
    else
    {
        u=(*l)->head->next;
        if(u->a==f)
        {
           t=(*l)->head->next;
           (*l)->head->next=(*l)->head->next->next;
           free(t);
        }
        else
        {
           while(u!=NULL)
           {
             if(u->a==f)
             {
                u->a=0;
                break;
             }
             else
             {
                 u=u->next;
             }
           }
           if(u==NULL)
           {
               printf(" value not present ");
               return;
           }
        }
    }
}
void removeall(struct lt **l,int f)
{
    struct node *u,*t,*i;
    i=(*l)->head->next;
     u=(*l)->head->next;
    if((*l)==NULL)
    {
        printf(" empty ");
    }
    else
    {
           while(u!=NULL)
           {
             i=u;
             if(u->a==f)
             {
                u->a=0;
                u=i;
             }
             else
             {
                 u=u->next;
             }
           }
            if(u==NULL)
           {
               printf(" value not present ");
               return;
           }
    }
}
void addsorted(struct lt **l,int a)
{
    int arr[100];
    int i=0,t,ln,n=0,f;
    struct node *oj,*j;
    oj=(*l)->head->next;
    arr[i]=oj->a;
    i++;
    while(oj->next!=NULL)
    {
       oj=oj->next;
        arr[i]=oj->a;
        i++;
    }
    for(ln=0;ln<i-1;ln++)
    {
        for(n=ln+1;n<i;n++)
        {
            if(arr[n]<arr[ln])
            {
                f=arr[n];
                arr[n]=arr[ln];
                arr[ln]=f;
            }
        }
    }
    f=0;
    oj=(*l)->head->next;
    while(oj!=NULL)
    {
        oj->a=arr[f];
        oj=oj->next;
        f++;
    }
   struct node *o,*k;
   k=(struct node *)malloc(sizeof(struct node));
   k->a=a;
   k->next=NULL;
   o=(*l)->head->next;
   if(a > (o->a) )
   {
       k->next=(*l)->head->next;
       (*l)->head->next=k;
   }
   else
   {
       while(o->next!=NULL)
       {
           if( (o->next->a) < a)
            break;
           o=o->next;
       }
       if(o->next==NULL)
       {
           printf(" the value you entered is the smallest ");
           addastail(l,a);
       }
       else
       {
          k->next=o->next;
          o->next=k;
       }
   }
}
void addall(struct lt  **l,struct lt **m)
{
   struct node *r,*i;

   r=(*m)->head->next;
   while(r->next!=NULL)
   {
       r=r->next;
   }
   i=(*l)->head;
   r->next=(*l)->head->next;
   free(i);
}

