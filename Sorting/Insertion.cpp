#include<iostream>
using namespace std;
int main()
{
    int j,temp, n,i;
    cout<<"Enter the number of elements:";
    cin>>n;
    cout<<"Enter the elements:\n";
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    cout<<"Sorted array:\n";
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
}

/*#include<bits/stdc++.h>
using namespace std;
void insertion(int a[],int n)
{
   int i,j,temp;
   for(i=1;i<n;i++)
   {
       temp=a[i];
       j=i-1;
       while(j>=0 && a[j]>temp)
       {
           a[j+1]=a[j];
           j--;
       }
       a[j+1]=temp;
   }
}
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    insertion(a,n);
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
}
*/
