#include<iostream>
using namespace std;
int main()
{
    int n,i,temp,j;
    cout<<"Enter the number of element in the array: ";
    cin>>n;
    cout<<"Enter the elements of the array:\n";
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];

    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<"sorted array:";
    for(i=0; i<n; i++)
        cout<<a[i]<<" ";
}
