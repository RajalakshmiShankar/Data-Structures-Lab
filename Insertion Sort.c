#include<stdio.h>
int main()
{
    int n,a[100],i,j,k=1,min,temp=0,loc=0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    while(k<n)
    {
        temp=a[k];
        j=k-1;
        while(temp<a[j] && j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
        k++;
    }
    printf("Sorted Array: ");
    for(i=0;i<n;i++)
    {
        printf("%d\t", a[i]);
    }
}
