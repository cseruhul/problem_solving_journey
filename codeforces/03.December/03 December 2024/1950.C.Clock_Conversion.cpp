#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int hour, minute;
        string time;
        cin >> time;

        hour = (time[0] - '0') * 10 + (time[1] - '0');
        minute = (time[3] - '0') * 10 + (time[4] - '0');

        // if()

        if (hour >= 0 && hour <= 11)
        {
            if (hour == 0)
            {
                cout << "12:";
                if (minute <= 9)
                    cout << "0" << minute << " AM" << endl;
                else
                    cout << minute << " AM" << endl;
            }
            else if (hour > 0 && hour <= 9)
            {
                cout << "0" << hour;
                if (minute <= 9)
                    cout << ":0" << minute << " AM" << endl;
                else
                    cout << ":" << minute << " AM" << endl;
            }
            else
            {
                cout << hour;
                if (minute <= 9)
                    cout << ":0" << minute << " AM" << endl;
                else
                    cout << ":" << minute << " AM" << endl;
            }
        }
        else
        {
            if (hour == 12)
            {
                cout << hour;
                if (minute <= 9)
                    cout << ":0" << minute << " PM" << endl;
                else
                    cout << ":" << minute << " PM" << endl;
            }
            else if (hour - 12 > 0 && hour - 12 <= 9)
            {
                cout << "0" << hour - 12;
                if (minute <= 9)
                    cout << ":0" << minute << " PM" << endl;
                else
                    cout << ":" << minute << " PM" << endl;
            }
            else
            {
                cout << hour - 12;
                if (minute <= 9)
                    cout << ":0" << minute << " PM" << endl;
                else
                    cout << ":" << minute << " PM" << endl;
            }
        }

        // cout << hour << " : " << minute << endl;
    }
    return 0;
}