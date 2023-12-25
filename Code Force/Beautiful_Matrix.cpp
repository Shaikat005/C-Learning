#include<iostream>
using namespace std;
int main()
{
    int a[5][5],row,col,pos_R,pos_C,result,s1,s2;
    for(row=1; row<=5; row++)
    {
        for(col=1; col<=5; col++)
        {
            cin>>a[row][col];
            if(a[row][col]==1)
            {
                pos_R=row;
                pos_C=col;
            }
        }
    }
    if(pos_R>3)
        s1=pos_R-3;
    else
        s1=3-pos_R;

    if(pos_C>3)
        s2=pos_C-3;
    else
        s2=3-pos_C;

    cout<<s1+s2;

}
