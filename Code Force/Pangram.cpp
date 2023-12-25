#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, count = 0;
    cin >> a;
    string s;
    cin >> s;

    for (int i = 0; i < a; i++)
    {
        s[i] = tolower(s[i]);
    }

    sort(s.begin(), s.end());

    for (int i = 0; i < a; i++)
    {
        if (s[i] != s[i + 1])
            count++;
    }

    if(count==26)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
