#include <bits/stdc++.h>
using namespace std;

int book_search(vector<int> &book, int target)
{
    unordered_map<int, int> mp;

    for (int i = 0; i < book.size(); i++)
    {
        mp[book[i]] = i;
    }

    sort(book.begin(), book.end());

    int l = 0;
    int r = book.size() - 1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (target == book[mid])
            return mp[book[mid]];
        else if (target > book[mid])
            l = mid + 1;
        else
            r = mid - 1;
    }

    return -1;
}

int main()
{
    vector<int> books;
    int n, target;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int book_num;
        cin >> book_num;
        books.push_back(book_num);
    }

    cin >> target;

    cout << book_search(books, target);

    return 0;
}