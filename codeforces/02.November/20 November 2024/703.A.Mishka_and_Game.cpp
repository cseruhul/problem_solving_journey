#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, m, c, m_score = 0, c_score = 0;

    cin >> t;

    while (t--)
    {
        cin >> m >> c;
        if (m > c)
        {
            m_score++;
        }
        else if (c > m)
        {
            c_score++;
        }
    }

    if (m_score > c_score)
    {
        cout << "Mishka" << endl;
    }
    else if (c_score > m_score)
    {
        cout << "Chris" << endl;
    }
    else
    {
        cout << "Friendship is magic!^^" << endl;
    }

    return 0;
}