#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 5;

    string cards_on_hand;
    string cards_on_table;

    unordered_map<char, int> suit;
    suit['D'] = 0;
    suit['C'] = 0;
    suit['S'] = 0;
    suit['H'] = 0;

    unordered_map<char, int> rank;
    rank['2'] = 0;
    rank['3'] = 0;
    rank['4'] = 40;
    rank['5'] = 0;
    rank['6'] = 0;
    rank['7'] = 0;
    rank['8'] = 0;
    rank['9'] = 0;
    rank['T'] = 0;
    rank['J'] = 0;
    rank['Q'] = 0;
    rank['K'] = 0;
    rank['A'] = 0;

    cin >> cards_on_hand;

    for (int i = 0; i < t; i++)
    {
        cin >> cards_on_table;
        rank[cards_on_table[0]] = 1;
        suit[cards_on_table[1]] = 1;
    }

    if (rank[cards_on_hand[0]] == 1 || suit[cards_on_hand[1]] == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}