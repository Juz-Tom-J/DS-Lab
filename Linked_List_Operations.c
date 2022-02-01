#include<stdio.h>

struct Node
{
    int data;
    struct node *next;
}*start=NULL,*x,*temp;

void Insert_Beg()
{
    int num;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&num);
    temp->data=num;

    if(start==NULL)
    {
        temp->next=NULL;
        start=temp;
    }
    else
    {
        temp->next=start;
        start=temp;
    }
}

void Insert_End()
{
    int num;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&num);
    temp->data=num;
    temp->next=NULL;

    if(start==NULL)
    {
        start=temp;
    }
    else
    {
        x=start;
        while(x->next!=NULL)
        x=x->next;
        x->next=temp;
    }
}

int Insert_Pos()
{
    int pos,i,num;
    if(start==NULL)
    {
        printf("List is empty!!");
        return 0;
    }

    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&num);
    printf("Enter position to insert:");
    scanf("%d",&pos);
    temp->data=num;

    x=start;
    for(i=1;i<pos-1;i++)
    {
        if(x->next==NULL)
        {
            printf("There are less elements!!");
            return 0;
        }

        x=x->next;
    }

    temp->next=x->next;
    x->next=temp;
    return 0;
}

void Display_List()
{
    if(start==NULL)
    {
        printf("List is empty!!");
    }
    else
    {
        x=start;
        printf("The linked list is:\n");
        while(x!=NULL)
        {
            printf("%d->",x->data);
            x=x->next;
        }
    }
}

void Delete_Beg()
{
    if(start==NULL)
    {
        printf("The list is empty!!");
    }
    else
    {
        x=start;
        start=start->next;
        printf("Deleted element is %d",x->data);
        free(x);
    }
}

void Delete_End()
{
    if(start==NULL)
    {
        printf("The list is empty!!");
    }
    else
    {
        x=start;
        while(x->next->next!=NULL)
        x=x->next;

        temp=x->next;
        x->next=NULL;
        printf("Deleted element is %d",temp->data);
        free(temp);
    }
}

int Delete_Pos()
{
    int pos,i;

    if(start==NULL)
    {
        printf("List is empty!!");
        return 0;
    }

    printf("Enter position to delete:");
    scanf("%d",&pos);

    x=start;
    for(i=1;i<pos-1;i++)
    {
        if(x->next==NULL)
        {
            printf("There are less elements!!");
            return 0;
        }
        x=x->next;
    }

    temp=x->next;
    x->next=temp->next;
    printf("Deleted element is %d",temp->data);
    free(temp);

    return 0;
}

int main()
{
    int ch;

    while(1)
    {
        printf("\n\n Singly Linked List(SLL) Menu ");
        printf("\n 1.Insert\n 2.Display\n 3.Delete\n 4.Exit\n \n");
        printf("Enter your choice(1-4):");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                    printf("\n Insert Menu ");
                    printf("\n 1.Insert at beginning\n 2.Insert at end\n 3.Insert at specified position\n 4.Exit");
                    printf("\n\nEnter your choice(1-4):");
                    scanf("%d",&ch);

                    switch(ch)
                    {
                        case 1: Insert_Beg();
                                break;

                        case 2: Insert_End();
                                break;

                        case 3: Insert_Pos();
                                break;

                        case 4: exit(0);

                        default: printf("Wrong Choice!!");
                    }
                    break;

            case 2: Display_List();
                    break;

            case 3: printf("\n Delete Menu ");
                    printf("\n 1.Delete from beginning\n 2.Delete from end\n 3.Delete from specified position\n 4.Exit");
                    printf("\n\nEnter your choice(1-4):");
                    scanf("%d",&ch);

                    switch(ch)
                    {
                        case 1: Delete_Beg();
                                break;

                        case 2: Delete_End();
                                break;

                        case 3: Delete_Pos();
                                break;

                        case 4: exit(0);

                        default: printf("Wrong Choice!!");
                    }
                    break;

            case 4: exit(0);
                    default: printf("Wrong Choice!!");
        }
    }
    return 0;
}
