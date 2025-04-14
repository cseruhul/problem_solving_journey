#include <bits/stdc++.h>
using namespace std;

int calculateNumberOfK(vector<int> &boards, int capacity) {
    int kCount = 1;
    int boardCount = 0;

    for (auto board : boards) {
        if (board + boardCount > capacity) {
            kCount++;
            boardCount = board;
        } else {
            boardCount += board;
        }
    }

    return kCount;
}

int findLargestMinDistance(vector<int> &boards, int k) {
    int left = *max_element(boards.begin(), boards.end());
    int right = accumulate(boards.begin(), boards.end(), 0);
    int answer = 0, mid;

    while (left <= right) {
        mid = left + (right - left) / 2;
        if (calculateNumberOfK(boards, mid) <= k) {
            answer = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return answer;
}

int main() {
    // vector<int> arr{2, 1, 5, 6, 2, 3};
    // int k = 2;
    vector<int> arr{10, 20, 30, 40};
    int k = 2;

    cout << findLargestMinDistance(arr, k) << endl;

    return 0;
}