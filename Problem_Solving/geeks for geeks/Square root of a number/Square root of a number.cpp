//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution {
  public:
    long long int floorSqrt(long long int n) {
        long long left = 1, right = n, mid, answer = 0;
        while (left <= right) {
            mid = left + (right - left) / 2;

            if (mid * mid <= n) {
                answer = mid;
            }
            if (mid * mid <= n) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return answer;
    }
};

//{ Driver Code Starts.

int main() {
    ifstream inputFile;
    inputFile.open("floorSqrt_test_cases.txt");

    while (!inputFile.eof()) {
        long long n, answer;
        inputFile >> n >> answer;
        Solution obj;
        long long solution = obj.floorSqrt(n);

        if (answer == solution) {
            cout << "SQRT of " << n << " is => " << solution << " Expected " << answer << " OK." << endl;
        } else {
            cout << "SQRT of " << n << " is => " << solution << " Expected " << answer << " error." << endl;
        }
    }
    inputFile.close();
    return 0;
}

// } Driver Code Ends