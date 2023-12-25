//https://www.geeksforgeeks.org/minimum-increment-k-operations-make-elements-equal/
//Minimum increment by k operations to make all elements equal
#include<bits/stdc++.h>
using namespace std;
int minOperation(int a[],int n,int k)
{
    int max=*max_element(a, a + n);//finding the largest element in the array.
    int result=0,i;
    for(i=0;i<n;i++)
    {
        if((max-a[i] )%k != 0)
            return -1;
        else
            result+=((max-a[i])/k);
    }
    return result;
}

int main()
{
    int n,i,k;
    cout<<"Enter the no. of elements in the array: ";
    cin>>n;
    int a[n];
    cout<<"\nEnter the array: ";
    for(i=0; i<n; i++)
        cin>>a[i];
    cout<<"Enter the value of k: ";
    cin>>k;
    cout<< minOperation(a,n,k);
}
