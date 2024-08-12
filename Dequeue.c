#include<stdio.h>
int a[100],front=-1,rear=-1,size;
int pushf()
{
    int item,i;
    if(front==0&&rear==size-1)
        printf("QUEUE FULL!!");
    else
    {
        printf("Enter the Element: ");
        scanf("%d", &item);

        if(front==-1&&rear==-1)
        {
            front=rear=0;
            a[front]=item;
        }
        else if(front>0)
        {
            front--;
            a[front]=item;
        }
        else
        {
            i=rear;
            while(i>=front)
            {
                a[i+1]=a[i];
                i--;
            }
            a[front]=item;
            rear++;
        }
    }
}
int pushr()
{
    int item,i;
    if(front==0&&rear==size-1)
        printf("QUEUE FULL!!");
    else
    {
        printf("Enter the Element: ");
        scanf("%d", &item);

        if(front==-1&&rear==-1)
        {
            front=rear=0;
            a[rear]=item;
        }
        else if(rear<=size-1)
        {
            rear++;
            a[rear]=item;
        }
        else
        {
            i=front;
            while(i>=rear)
            {
                a[i-1]=a[i];
                i++;
            }
            a[rear]=item;
            rear++;
        }
    }
}
int popf()
{
    int item,i;
    if(front==-1 && rear==-1)
        printf("QUEUE EMPTY");
    else
    {
        item=a[front];
        printf("Deleted Element: %d", item);
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
            front++;
    }
}
int popr()
{
    int item,i;
    if(front==-1 && rear==-1)
    {
        printf("QUEUE EMPTY");
    }
    else
    {
        item=a[rear];
        printf("Deleted Element: %d", item);
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
            rear--;
    }

}
void display()
{
    int i;
    if(front==-1 && rear==-1)
    {
        printf("QUEUE EMPTY");
    }
    else
    printf("QUEUE: ");
    {
        for(i=front;i<=rear;i++)
        {
            printf("%d\t", a[i]);
        }
    }
}
int main()
{
    int n;
    printf("Enter the size of the Queue: ");
    scanf("%d", &size);
    do
    {
        printf("\n---------MENU----------\n\t1 Insert Front\n\t2 Insert Rear\n\t3 Delete Front\n\t4 Delete Rear\n\t5 DISPLAY\n\t6 EXIT\n");
        scanf("%d", &n);
        switch(n)
            {
            case 1:
                pushf();
                break;

            case 2:
                pushr();
                break;

            case 3:
                popf();
                break;

            case 4:
                popr();
                break;

            case 5:
                display();
                break;

            case 6:
                break;

            default:
                printf("INVALID INPUT!!");
            }
    }while(n!=6);
}

