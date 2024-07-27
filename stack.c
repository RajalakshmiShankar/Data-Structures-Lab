#include<stdio.h>

int push(int a[100], int top, int size);
int pop(int a[100],int top);
void display(int a[100],int top);

int main()
{
    int c,top=-1,size,a[100];
    printf("Enter the size of stack ");
    scanf("%d", &size);
    do
    {
        printf("\n\t1 PUSH\n\t2 POP\n\t3 DISPLAY\n\t4 BREAK\n");
        scanf("%d", &c);
        switch(c)
        {
            case 1:
            top=push(a,top,size);
            break;

            case 2:
            top=pop(a,top);
            break;

            case 3:
            display(a,top);
            break;

            case 4:
            break;

            default:
                printf("Enter a valid input!!");

        }
    }while(c!=4);
}
int push(int a[100], int top, int size)
{
    int item;
    if(top==size)
    {
        printf("Stack Full");
    }
    else
    {
        top++;
        printf("Enter the element ");
        scanf("%d", &item);
        a[top]=item;
        display(a,top);
    }
    return top;
}
int pop(int a[100],int top)
{
    int p=0;
    if(top==-1)
    {
        printf("Stack Empty");
    }
    else
    {
        p=a[top];
        top--;
        printf("Popped Element: %d",p);
    }
    return top;
}
void display(int a[100],int top)
{
    int i;
    if(top==-1)
    {
        printf("Stack Empty");
    }
    else
    {
        printf("Elements are:\t");
        for(i=0;i<=top;i++)
        {
            printf("%d\t", a[i]);
        }
    }

}