#include<stdio.h>
#include"assignment2-3.h"
void add(struct node **l,int o)
{
   struct  node *r;
   r=(struct node *)malloc(sizeof(struct node));
   r->a=o;
   if((*l)==NULL)
   {
        (*l)=(struct node *)malloc(sizeof(struct node));
        r->next=NULL;
        (*l)=r;
   }
   else
   {
       r->next=(*l);
       (*l)=r;
   }
}
void isort(struct node **l)
{
    struct node *u,*p,*g,*s,*f;
    int i=0,j=1,k=0,d,v,t;
    u=(*l);
    p=(*l)->next;
   while(u->next!=NULL)
    {
        i++;
        u=u->next;
    }
    while(j<=i && p!=NULL)
    {
       g=(*l);
       v=j-1;
       d=p->a;
       while(v>=0 && g->next!=NULL)
       {
           g=(*l);
           for(k=0;k<v;k++)
           {
              g=g->next;
           }
           if(d < g->a)
           {
              t=p->a;
              p->a=g->a;
              g->a=t;
           }
           v--;
       }
       p=p->next;
       j++;
    }
}
void display(struct node *i)
{
    while(i!=NULL)
    {
        printf("%d",i->a);
        if(i->next!=NULL)
        printf("->");
        i=i->next;
    }
}
