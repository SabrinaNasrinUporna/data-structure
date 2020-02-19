#include<stdio.h>
#include<stdlib.h>
typedef struct Node node;
struct Node
{
    int value;
    node *next;
};
//node *head=NULL;
int main()
{
    node *a =(node*) malloc(sizeof(node));
    node *b =(node*) malloc(sizeof(node));
    node *c =(node*) malloc(sizeof(node));
    node *head=NULL;
    a->value=5;
    a->next=b;
    b->value=6;
    b->next=c;
    c->value=7;
    c->next=NULL;

    head=a;

    print(a);
    printf("\n");
    print_reverse(a);
    printf("\n%d\n",size(head));


    return 0;
}
int front(node *x){
    if(x==NULL)
    {
        printf("Linked list is empty");
        return;
    }
    return x->value;

}
void print(node *x)
{
    if(x==NULL)
    printf("Linked list is empty");
    while(x!=NULL)
    {
        printf("%d ",x->value);
        x=x->next;
    }
}

void print_reverse(node *x){
    if(x==NULL)
        return;
    print_reverse(x->next);
    printf("%d ",x->value);


}
int back(node *x)
{
    if(x==NULL){
        printf("Linked list is empty");
        return
        while(x->!=NULL){
            x=x->next;
        }
        return x->value;
    }
}
int is_empty(node *x){
    if(x==NULL)

        return 1;
    return 0;


}
int size(node *x)
{
    int count =0;
    while(x)
    {
        count++;
        x=x->next;
    }
    return count;
}
