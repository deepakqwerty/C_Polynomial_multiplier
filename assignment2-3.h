struct node
{
    int a;
    struct node *next;
};
void add(struct node **,int);
void isort(struct node **);
void display(struct node *);
