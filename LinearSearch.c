#include<stdio.h>
int a[100], s, n, i, flag=0;
int main()
{
    printf("Enter number of Elements: ");
    scanf("%d", &n);
    printf("Enter Elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter Element to be searched: ");
    scanf("%d", &s);
    for(i=0;i<n;i++)
    {
        if(s==a[i])
        {
            flag=1;
            break;
        }
        else
        {
            break;
        }
    }
    if(flag==0)
    {
        printf("Element Not Found!!");
    }
    else if(flag==1)
    {
        printf("Element Found!!");
    }
}