# include <stdio.h>
int adj_matr[10][10],visited[10],v;
int stack[10],top=-1;
int q[10],front=-1,rear=-1;
void push(int n)
{
    top++;
    stack[top]=n;
}
int pop()
{
    int item=stack[top];
    top--;
    return item;
}
void enq(int n)
{
    if(front==-1)
        front++;
    rear++;
    q[rear]=n;
}
int dq()
{
    int item=q[front];
    if(front==rear)
    {
        rear=-1;front=-1;
    }
    else
        front++;
    return item;
}
init()
{
    for(int i=0;i<v;i++)
        visited[i]=0;
}
void DFS(int node)
{
    visited[node]=1;
    push(node);
    while(top!=-1)
    {
        int x=pop();
        printf("%d\t",x);
        int i=0;
    //    printf("\nhello v=%d",v);
        while(i<v)
        {
      //      printf("hello");
            if(adj_matr[x][i]==1 && visited[i]==0)
            {
        //        printf("\nhi here x=%d i=%d",x,i);
                visited[i]=1;
                push(i);
            }
            i++;
        }
    }
}
void BFS(int node)
{
    visited[node]=1;
    enq(node);
    while(front!=-1)
    {
        int x=dq();
        printf("%d\t",x);
        int i=0;
        while(i<v)
        {
            if(adj_matr[x][i]==1 && visited[i]==0)
            {
                visited[i]=1;
                enq(i);
            }
            i++;
        }
    }
}
int main()
{
int e,dg,v1,v2;
printf("Enter the no of vertices(<10) and edges:");
scanf("%d%d",&v,&e);
printf("Do you want to create a directed graph(0/1)?");
scanf("%d",&dg);
for(int i=0;i<v;i++)
    for(int j=0;j<v;j++)
        adj_matr[i][j]=0;
printf("The vertices are:");
for(int i=0;i<v;i++)
    printf("%d\t",i);
for(int i=0;i<e;i++)
{
    printf("Enter the vertices of edge %d:",i+1);
    scanf("%d%d",&v1,&v2);
    adj_matr[v1][v2]=1;
    if(dg==0)
        adj_matr[v2][v1]=1;
}
printf("The adjacency matrix is:\n");
for(int i=0;i<v;i++)
{
    for(int j=0;j<v;j++)
        printf("%d\t",adj_matr[i][j]);
    printf("\n");
}
printf("DFS:");
init();
for(int i=0;i<v;i++)
{
    if(visited[i]==0)
        DFS(i);
}
printf("\nBFS:");
init();
for(int i=0;i<v;i++)
{
    if(visited[i]==0)
        BFS(i);
}
return 0;
}
