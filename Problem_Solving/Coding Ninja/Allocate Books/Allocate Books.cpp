#include <bits/stdc++.h>
using namespace std;
int studentNumberCalculate(vector<int> &arr, int capacity);
int findPages(vector<int> &arr, int n, int m) {
    if (m > n)
        return -1;

    int left = *max_element(arr.begin(), arr.end());
    int right = accumulate(arr.begin(), arr.end(), 0);
    int answer, mid;

    while (left <= right) {
        mid = left + (right - left) / 2;
        if (studentNumberCalculate(arr, mid) <= m) {
            answer = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return answer;
}

int studentNumberCalculate(vector<int> &arr, int capacity) {
    int pageCount = 0;
    int studentCount = 1;
    for (auto page : arr) {
        if (page + pageCount > capacity) {
            studentCount++;
            pageCount = page;
        } else {
            pageCount += page;
        }
    }

    return studentCount;
}

int main() {
    /*
    Input: ‘n’ = 4 ‘m’ = 2
    ‘arr’ = [12, 34, 67, 90]
    */

    vector<int> arr{12, 34, 67, 90};
    int n = 4, m = 2;

    cout << findPages(arr, n, m) << endl;

    return 0;
}