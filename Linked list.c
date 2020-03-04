#include<stdio.h>
#include<stdlib.h>
typedef struct Node node;
struct Node
{
    int value;
    node *next;
};
node *head;
int main()
{
    int n;
    node *a =(node*) malloc(sizeof(node));
    node *b =(node*) malloc(sizeof(node));
    node *c =(node*) malloc(sizeof(node));

    a->value=5;
    a->next=b;
    b->value=6;
    b->next=c;
    c->value=7;
    c->next=NULL;

    head=a;
    print(head);
    printf("\n");
    scanf("%d",&n);
    pop_at(n);
    print(head);
    return 0;
}
void print()
{
    if(head==NULL)
    {
        printf("list is empty");
    }
    node *temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->value);
        temp=temp->next;
    }
}
void pop_at(int pos)
{
    if(head==NULL){
        printf("Linked list is empty");
        return;
    }
    node *temp,*prev;
    temp=head;
    int i=0;
    if(pos==1){
        head = head->next;
        free(temp);
        return;
    }
    i=1;
    while(temp->next){
        prev=temp;
        temp=temp->next;
        i++;
        if(pos==i){
            prev->next=temp->next;
            free(temp);
            return;
        }
    }

printf("Index out of range\n");
}
