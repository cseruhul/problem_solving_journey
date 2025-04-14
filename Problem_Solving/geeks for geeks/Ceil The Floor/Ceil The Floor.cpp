#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        int left = 0, right = arr.size() - 1, floor, ceill;
        sort(arr.begin(), arr.end());
        floor = floorCalculation(arr, left, right, x);
        ceill = ceillCalculation(arr, left, right, x);

        return {floor, ceill};
    }

    int floorCalculation(vector<int> &arr, int left, int right, int x) {
        int answer = -1, mid;

        while (left <= right) {
            mid = left + (right - left) / 2;
            if (arr[mid] <= x) {
                answer = arr[mid];
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return answer;
    }

    int ceillCalculation(vector<int> &arr, int left, int right, int x) {
        int answer = -1, mid;
        while (left <= right) {
            mid = left + (right - left) / 2;
            if (arr[mid] >= x) {
                answer = arr[mid];
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return answer;
    }
};

int main() {
    vector<int> arr = {5, 6, 8, 9, 6, 5, 5, 6}, answer;
    int x = 7;
    Solution obj;
    answer = obj.getFloorAndCeil(x, arr);
    for (auto item : answer) {
        cout << item << " ";
    }
    return 0;
}