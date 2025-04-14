#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int A, B, t;

    cin >> t;

    while (t--)
    {
        cin >> str;
        A = 0;
        B = 0;

        for (int i = 0; i < 5; i++)
        {
            if (str[i] == 'A')
                A++;
            else
                B++;
        }

        if (A > B)
        {
            cout << "A" << endl;
        }
        else
        {

            cout << "B" << endl;
        }
    }

    return 0;
}