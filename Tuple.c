#include<stdio.h>

int tuple(int a[10][10], int r, int c, int t[10][3]);
int sum(int t1[10][3], int t2[10][3],int n1, int n2);
int read(int a[10][10], int r, int c);

void main()
{
    int r1,r2,c1,c2,a[10][10],b[10][10],t1[10][3],t2[10][3],s[100][100],f1=0,f2=0,n1=0,n2=0;

    printf("Enter the number of rows of First matrix ");
    scanf("%d", &r1);
    printf("Enter the number of columns of First matrix ");
    scanf("%d", &c1);

    f1=read(a,r1,c1);

    if(f1==0)
    {
        n1=tuple(a,r1,c1,t1);
    }

    printf("Enter the number of rows of second matrix ");
    scanf("%d", &r2);
    printf("Enter the number of columns of second matrix ");
    scanf("%d", &c2);

    f2=read(b,r2,c2);


    if(f2==0)
    {
        n2=tuple(b,r2,c2,t2);

    }
    if(f1==0 && f2==0)
    {
        sum(t1,t2,n1,n2);
    }
    else
    {
        printf("\n So Addition is not possible!!!");
    }

}
int read(int a[10][10], int r, int c)
{

    int i,j,z1=0,n1=0,flag=0;

    printf("Enter elements of Matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==0)
            {
                z1++;
            }
            else
                n1++;

        }
    }
    if(n1<z1)
    {
        printf("Spurse Matrix:\n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("\t%d", a[i][j]);

            }printf("\n");
        }
    }
    else
    {
        flag=1;
        printf("It's not a spurse matrix\n");
    }
    return flag;

}
int tuple(int a[10][10], int r, int c, int t[10][3])
{
        int i,j,k=1,count=0;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(a[i][j]!=0)
                {
                    t[k][0]=i;
                    t[k][1]=j;
                    t[k][2]=a[i][j];
                    k++;
                    count++;
                }
            }
        }

        t[0][0]=i;
        t[0][1]=j;
        t[0][2]=count;
        printf("Corresponding Tuple matrix:\n");

        for(i=0;i<k;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("\t%d", t[i][j]);
            }printf("\n");
        }
        return count;
}
int sum(int t1[10][3], int t2[10][3],int n1, int n2)
{
    int k=1,i=1,j=1,s[100][3];
    while(i<=n1 && j<=n2) 
    { 
        if(t1[i][0]<t2[j][0]) 
        { 
            s[k][0]=t1[i][0]; 
            s[k][1]=t1[i][1]; 
            s[k][2]=t1[i][2]; 
            i++; 
            k++; 
        } 
        else if(t1[i][0]>t2[j][0]) 
        { 
            s[k][0]=t2[j][0]; 
            s[k][1]=t2[j][1]; 
            s[k][2]=t2[j][2]; 
            j++; 
            k++; 
        } 
        else if(t1[i][1]<t2[j][1]) 
        { 
            s[k][0]=t1[i][0]; 
            s[k][1]=t1[i][1]; 
            s[k][2]=t1[i][2]; 
            i++; 
            k++; 
        } 
        else if(t1[i][1]>t2[j][1]) 
        { 
            s[k][0]=t2[j][0]; 
            s[k][1]=t2[j][1]; 
            s[k][2]=t2[j][2]; 
            j++; 
            k++; 
        } 
        else
        { 
            s[k][0]=t1[i][0]; 
            s[k][1]=t1[i][1]; 
            s[k][2]=t1[i][2]+t2[j][2]; 
            i++; 
            j++; 
            k++; 
        } 
    } 

    while(i<=n1) 
    { 
        s[k][0]=t1[i][0]; 
        s[k][1]=t1[i][1]; 
        s[k][2]=t1[i][2]; 
        i++; 
        k++; 
    } 

    while(j<=n2) 
    { 
        s[k][0]=t2[j][0]; 
        s[k][1]=t2[j][1]; 
        s[k][2]=t2[j][2]; 
        j++; 
        k++; 
    } 

    s[0][0]=t1[0][0]; 
    s[0][1]=t1[0][1]; 
    s[0][2]=k-1; 

    printf("\nSum of two matrices: \n"); 

    for(i=0;i<k;i++) 
    { 
        for(j=0;j<3;j++) 
        { 
            printf("\t%d",s[i][j]); 
        }printf("\n"); 
    } 
}