#include<stdio.h>
int main()
{
    int n,a[100],i,j,k=0,min,temp=0,loc=0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    while(k<n-1)
    {
        min=a[k];
        loc=k;
        j=k+1;
        while(j<n)
        {
            if(min>a[j])
            {
                min=a[j];
                loc=j;
            }
            j++;
        }
        temp=a[k];
        a[k]=a[loc];
        a[loc]=temp;

        k++;
    }
    printf("Sorted Array: ");
    for(i=0;i<n;i++)
    {
        printf("%d\t", a[i]);
    }

}
