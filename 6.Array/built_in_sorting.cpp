
#include<bits/stdc++.h>
using namespace std;

void sort_Ascending(int a[],int n)
{
    sort(a,a+n);
}

void  sort_descending(int a[],int n)
{
    sort(a,a+n,greater<int>());
}

int main()
{
    int n,i;
    cout<<"Enter the no. of elements in the array: ";
    cin>>n;
    int a[n];
    cout<<"\nEnter the array: ";
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"\nBefore sorting:\n";
    for(i=0;i<n;i++)
        cout<<" "<<a[i];


    sort_Ascending(a,n);

    cout<<"\nAfter sorting in ascending order:\n";
    for(i=0;i<n;i++)
        cout<<" "<<a[i];

    sort_descending(a,n);
    cout<<"\nAfter sorting in descending order:\n";
    for(i=0;i<n;i++)
        cout<<" "<<a[i];

}
