#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int remainder = a % b;
        if (remainder == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            int result = b - remainder;
            cout << result << endl;
        }
    }

    return 0;
}
