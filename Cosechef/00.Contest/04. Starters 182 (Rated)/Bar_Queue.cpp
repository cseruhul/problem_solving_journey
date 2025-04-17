#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n;
        cin >> n;
        string str_queue;
        cin >> str_queue;
        
        int boy = 0, girl = 0;

        for (int i = 0; i < n; i++)
        {
            if (str_queue[i] == 'B')
                boy++;
            if (str_queue[i] == 'G')
                girl++;

            if (boy > (2 * girl))
            {
                break;
            }
        }

        cout << boy + girl << endl;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Ruhul_Amin ruhul;
    int t;
    cin >> t;

    while (t--)
        ruhul.solve();

    return 0;
}