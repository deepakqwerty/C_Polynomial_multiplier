struct node
{
    int a;
    struct node *next;
};
struct lt
{
    struct  node *head;
};
int booleanisempty(struct lt *);
int length(struct lt *);
void print(struct lt *);
void addashead(struct lt **,int);
void addastail(struct lt **,int);
void addsorted(struct lt **,int);
struct node *find(struct lt *,int);
void reverse(struct lt **);
int pophead(struct lt **);
void removefirst(struct lt **,int);
void removeall(struct lt **,int);
void addall(struct lt **,struct lt **);
