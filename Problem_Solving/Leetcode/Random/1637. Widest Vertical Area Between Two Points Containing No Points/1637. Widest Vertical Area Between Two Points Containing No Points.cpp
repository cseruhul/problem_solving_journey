#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points)
    {
        int max_width = 0, i, j, max_val = 0;
      /*  sort(points.begin(),
             points.end(),
             [](const vector<int>& a, const vector<int>& b)
             {
                return a[0] < b[0];
            });*/
        sort(points.begin(), points.end());
        for(i = 0; i < points.size() - 1; i++){
            max_val = abs(points[i][0] - points[i + 1][0]);
            if( max_val > max_width)
                max_width = max_val;
        }

        return max_width;
    }
};

int main(){
    vector<vector<int>>points{{8,7},{9,9},{7,4},{9,7}};
    Solution obj;
    cout << obj.maxWidthOfVerticalArea(points);
    return 0;
}
