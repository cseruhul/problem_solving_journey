#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    float avg_calculator(vector<int> &arr)
    {
        float sum = 0;
        for (auto item : arr)
            sum += item;
        // cout << sum << endl;
        return sum / 5;
    }
    void solve()
    {

        float ans = 0, sum = 0, avg = 0;
        vector<int> score(5);

        for (int i = 0; i < 5; i++)
        {
            int x;
            cin >> x;
            score[i] = x;
            sum += x;
        }

        sort(score.begin(), score.end());
        // for (auto item : score)
        //     cout << item << " ";

        avg = avg_calculator(score);
        for (int i = 0; i < 5; i++)
        {
            sum -= score[i];
            score[i] = 10;
            if (avg >= 7.00)
                break;
            avg = avg_calculator(score);
            ans++;
        }

        cout << ans * 100 << endl;
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