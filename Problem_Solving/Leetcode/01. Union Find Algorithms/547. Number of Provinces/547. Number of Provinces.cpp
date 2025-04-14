#include<bits/stdc++.h>
using namespace std;

class UnionFind{
private:
    vector<int> id;
    vector<int> sc;

public:
    UnionFind(int n){
        for(int i = 0; i < n; i++){
            id.push_back(i);
            sc.push_back(1);
        }
    }

public:
    int findRoot(int i){
        while(id[i] != i){
            id[i]=id[id[i]];
            i = id[i];
        }

        return i;
    }
private:
    bool idConnect(int p, int q){
        return findRoot(p) == findRoot(q);
    }

public:
    void union_two(int p, int q){
        int i = findRoot(p);
        int j = findRoot(q);
        if(i != j){
            if(sc[i] < sc[j]){
                id[i] = j;
                sc[j] += sc[i];
            } else{
                id[j] = i;
                sc[i] += sc[j];
            }
        }
    }
};

class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n, i, j;
        n = isConnected.size();

        UnionFind uf(n);
        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                if(isConnected[i][j] == 1){
                    uf.union_two(i, j);
                }
            }
        }

        set<int> answer;
        for(i = 0; i < n; i++){
            answer.insert(uf.findRoot(i));
        }

        return answer.size();
    }
};

int main(){
    //vector<vector<int>> isConnected = {{1, 1, 0},{1, 1, 0},{0, 0, 1}};
    //vector<vector<int>> isConnected = {{1, 0, 0},{0, 1, 0},{0, 0, 1}};

    /*[[1,0,0,1],[0,1,1,0],[0,1,1,1],[1,0,1,1]]*/
    vector<vector<int>> isConnected = {
        {1, 0, 0, 1},
        {0, 1, 1, 0},
        {0, 1, 1, 1},
        {1, 0, 1, 1}};
    Solution provinces;
    int n;

    n = provinces.findCircleNum(isConnected);

    cout << n << endl;
    return 0;
}
