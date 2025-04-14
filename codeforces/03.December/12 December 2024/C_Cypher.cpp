#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> wheel(n);
        for (int i = 0; i < n; i++)
        {
            cin >> wheel[i];
        }

        for (int i = 0; i < n; i++)
        {
            int N, original = wheel[i];
            string pattern;
            cin >> N >> pattern;
            for (int j = 0; j < N; j++)
            {
                if (pattern[j] == 'D')
                {
                    original++;
                    if (original == 10)
                    {
                        original = 0;
                    }
                }
                else
                {
                    original--;
                    if (original == -1)
                    {
                        original = 9;
                    }
                }
            }

            cout << original << " ";
        }
        cout << endl;
    }

    return 0;
}