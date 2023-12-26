#include <bits/stdc++.h>
using namespace std;

// Function to calculate the LCS length
int lcs(string X, string Y, int m, int n)
{
    if (m == 0 || n == 0)
    {
        return 0;
    }

    if (X[m - 1] == Y[n - 1])
    {
        return 1 + lcs(X, Y, m - 1, n - 1);
    }
    else
    {
        // Calculate the LCS for both possibilities and return the maximum
        return max(lcs(X, Y, m, n - 1), lcs(X, Y, m - 1, n));
    }
}

// Function to print the LCS
void printLCS(string X, string Y, int m, int n)
{
    if (m == 0 || n == 0)
    {
        return;
    }

    if (X[m - 1] == Y[n - 1])
    {
        printLCS(X, Y, m - 1, n - 1);
        cout << X[m - 1];  // Print the common character
    }
    else if (lcs(X, Y, m - 1, n) > lcs(X, Y, m, n - 1))
    {
        printLCS(X, Y, m - 1, n);
    }
    else
    {
        printLCS(X, Y, m, n - 1);
    }
}

int main()
{
    string S1 = "AGGTAB";
    string S2 = "GXTXAYB";
    int m = S1.size();
    int n = S2.size();

    cout << "Length of LCS is " << lcs(S1, S2, m, n) << endl;  // Print the LCS length
    cout << "The LCS is: ";
    printLCS(S1, S2, m, n);  // Print the LCS itself

    return 0;
}
