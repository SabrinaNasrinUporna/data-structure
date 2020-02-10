#include<stdio.h>
int menu();
void insert();
int main()
{
    while(menu()!=5);

    return 0;
}
int menu()
{
    int op;

    printf("Select linked list operation\n");
    printf("1. Insert\n");
    printf("2. Delete\n");
    printf("3. Update\n");
    printf("4. Search\n");
    printf("5. Close\n");
    printf("Input Operation:");
    scanf("%d",&op);

    if(op==1)
    {
        insert();

    }
    else if(op==2)
    {
        printf("***Delete Operation***\n");
    }
    else if(op==3)
    {
        printf("***Update Operation***\n");
    }
    else if(op==4)
    {
        printf("***Search Operation***\n");
    }
    else if(op==5)
    {
        printf("***Close Operation***\n");

    }
    else{
        printf("Input operation Invalid try again!");
    }
    return op;
}
void insert()
{
    int op;

    printf("Select Insert operation\n");
    printf("1. Push Front\n");
    printf("2. Push  back");
    printf("3. Push After\n");
    printf("4. Push Before\n");
    printf("5. Push At\n");
    printf("6. Close\n");
    printf("Input Operation:");
    scanf("%d",&op);

    if(op==1)
    {
        printf("***Push Front Operation***\n");
    }
    else if(op==2)
    {
        printf("***Push Back Operation***\n");
    }
    else if(op==3)
    {
        printf("***Push After Operation***\n");
    }
    else if(op==4)
    {
        printf("***Push Before Operation***\n");
    }
    else if(op==5)
    {
        printf("***Push At Operation***\n");

    }
    else if(op==6){
        printf("***Close Operation***\n");
    }
    else{
        printf("Input operation Invalid try again!");
    }
    return op;
}
