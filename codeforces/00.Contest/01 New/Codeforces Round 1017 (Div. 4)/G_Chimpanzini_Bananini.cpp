#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void print_arr(vector<int> &arr)
    {
        for (auto item : arr)
            cout << item << " ";
        cout << endl;
    }

    int arr_sum(vector<int> &arr)
    {
        int sum = 0, n = arr.size();
        for (int i = 0; i < n; i++)
        {
            sum += arr[i] * (i + 1);
        }

        return sum;
    }

    void solve()
    {
        int t;
        cin >> t;
        while (t--)
        {
            int q, sum = 0;
            int operation;
            vector<int> arr;

            cin >> q;

            while (q--)
            {
                cin >> operation;
                if (operation == 3)
                {

                    int num;
                    cin >> num;
                    arr.push_back(num);
                    sum += num * arr.size();
                    cout << sum << endl;
                }
                else if (operation == 1)
                {
                    int n = arr.size();
                    int last_item = arr[n - 1];

                    for (int i = n - 1; i > 0; i--)
                    {
                        arr[i] = arr[i - 1];
                    }
                    arr[0] = last_item;

                    sum = sum - (last_item * arr.size() - last_item);
                    cout << sum << endl;
                }
                else
                {
                    reverse(arr.begin(), arr.end());
                    sum = arr_sum(arr);
                    cout << sum << endl;
                }
            }
        }
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Ruhul_Amin ruhul;

    ruhul.solve();

    return 0;
}