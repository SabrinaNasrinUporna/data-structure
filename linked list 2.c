#include<stdio.h>

typedef struct Node node;
struct Node
{
    int value;
    node *next;

    //struct Node *next;


};

node *head=NULL;
int main()
{

    //struct Node a;
    node a,b,c,d;
    print_all(head);

    head=&a;
    a. value=5;
    a. next=&b;
    b. value=6;
    b. next=&c;
    c. value=7;
    c. next=&d;
    d. value=8;
    d. next=NULL;

    //printf("%p\t%d\t%p\n",&a,a.value,a.next);
    //printf("%p\t%d\t%p\n",&a,&a.value,&a.next);
    //printf("%p\t%p\t%p",&a,&a.value,&a.next);
    print(&a);
    print(&b);
    print(&c);
    print(&d);





    return 0;
}
void print(node *x)
{
    printf("%p\t%d\t%p\n\n",x,x->value,x->next);

}
void print_all(node *x)
{
    if(x==NULL){
        printf("Linked list is empty");
    }
    while(x!=NULL)
    {
        printf("%d\t",x->value);
        x=x->next;
    }
}
