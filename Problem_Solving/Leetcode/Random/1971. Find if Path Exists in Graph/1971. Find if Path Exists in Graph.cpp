#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        int m = edges.size(), i;
        int id[m];

        for(i = 0; i < n; i++){
            id[i] = i;
        }

        for(i = 0; i < m; i++){
            int pid = edges[i][0];
            int qid = edges[i][1];

            for(int j = 0; j < 3; j++){
                if(id[j] == pid)
                    id[j] = qid;
            }
        }

        return id[source] == id[destination];
    }
};

int main(){
    int n = 3;
    vector<vector<int>>edges{{0, 1}, {1, 2}, {2, 0}};
    int source = 0, destination = 2;
    Solution soln;

    cout << soln.validPath(n, edges, source, destination);

    return 0;
}
