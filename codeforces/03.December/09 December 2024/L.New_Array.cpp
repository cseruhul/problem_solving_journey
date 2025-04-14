#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> A(n), B(n);

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> B[i];
    }

    for (int i = 0; i < n; i++)
    {
        B.push_back(A[i]);
    }

    for (auto item : B)
    {
        cout << item << " ";
    }

    return 0;
}