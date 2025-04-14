#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums;
    int q;
    cin >> q;

    while (q--)
    {
        string query;
        int val;
        cin >> query;

        if (query == "push")
        {
            cin >> val;
            nums.push_back(val);
        }
        else if (query == "pop")
        {
            if (nums.size() != 0)
                nums.pop_back();
        }
        else if (query == "print")
        {
            if (nums.size() == 0)
            {
                cout << "EMPTY";
            }
            else
            {
                for (auto item : nums)
                    cout << item << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
