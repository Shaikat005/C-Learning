#include<stdio.h>
int a[20][20],q[20],visited[20],n,f=-1,r=-1;


void bfs(int v)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[v][i]!=0 && visited[i]==0)
        {
            r=r+1;
            q[r]=i;
            visited[i]=1;
            printf("%d ",i);
        }
    }
    f=f+1;
    if(f<=r)
        bfs(q[f]);
}

int main()
{
    int v,i,j;
    printf("\nEnter the number of vertices:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        visited[i]=0;
    }
    printf("\nEnter graph data in matrix form:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nEnter the starting vertex:");
    scanf("%d",&v);

    f=r=0;
    q[r]=v;

    printf("\nBFS traversal is:\n");

    visited[v]=1;
    printf("%d  ",v);
    bfs(v);
    if(r!=n-1)
        printf("\nBFS is not possible.");
}
