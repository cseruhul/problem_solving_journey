#include<bits/stdc++.h>
using namespace std;

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(int n, int arr[]) {
        // Code here
        vector<int> answer;
        int i, lead;
        lead = arr[n - 1];
        answer.insert(answer.begin() + 0, lead);

        for(i = n - 2; i >= 0; i--){
            if(arr[i] >= lead){
                lead = arr[i];
                answer.insert(answer.begin() + 0, lead);
            }
        }

        return {answer};
    }
};

int main(){
    int arr[] = {30, 10, 10, 5} ;
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> answer;
    Solution ans;

    answer = ans.leaders(n, arr);

    for(auto item : answer)
        cout << item << " ";
    return 0;
}
