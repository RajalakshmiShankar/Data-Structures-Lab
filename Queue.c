#include<stdio.h>
int a[100],front=-1,rear=-1,size;

int enqueue()
{
    int item;
    if(rear==size-1)
    {
        printf("QUEUE FULL!!");
    }
    else if(rear==-1 && front==-1)
    {
        front=0;
        rear=0;
        printf("Enter element to be inserted: ");
        scanf("%d", &item);
        a[rear]=item;
    }
    else
    {
        printf("Enter element to be inserted: ");
        scanf("%d", &item);
        rear++;
        a[rear]=item;
    }
}
void display()
{
    int i;
    if(front==-1 && rear==-1)
    {
       printf("QUEUE EMPTY!!");
    }
    else
    {
        for(i=front;i<=rear;i++)
        {
            printf("\t%d", a[i]);
        }
    }
}
int dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("QUEUE EMPTY!!");
    }
    else if(front==rear)
    {
        printf("Deleted Element: %d", a[front]);
        front=-1;
        rear=-1;
    }
   else
    {
        printf("Deleted Element: %d", a[front]);
        front++;
    }
}
int main()
{
    int n;
    printf("Enter the size of queue: ");
    scanf("%d", &size);
    do
    {
        printf("\n---------MENU---------\n\t 1 INSERT\n\t 2 DELETE\n\t 3 DISPLAY\n\t 4 EXIT\n");
        scanf("%d", &n);
        switch(n)
        {
            case 1:
                enqueue();
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                break;

            default:
                printf("ENTER A VALID INPUT");
        }
    }while(n!=4);

}

