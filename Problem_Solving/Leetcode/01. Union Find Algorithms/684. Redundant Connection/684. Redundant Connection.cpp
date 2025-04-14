#include<bits/stdc++.h>
using namespace std;

class UnionFind {
public:
    vector<int> parent;
    vector<int> score;

public:
    UnionFind(int n) {
        parent.resize(n + 1);//This problem Requires 1 based index.So that we should resize oure vectors.
        score.resize(n + 1, 1);//This problem Requires 1 based index.So that we should resize oure vectors.
        for (int i = 0; i <= n; i++) {
            parent[i] = i;
        }
    }

public:
    int findRoot(int p) {
        while (parent[p] != p) {
            parent[p] = parent[parent[p]]; // Path compression
            p = parent[p];
        }
        return p;
    }

public:
    void Union(int p, int q) {
        int i = findRoot(p);
        int j = findRoot(q);

        if (i != j) {
            if (score[i] < score[j]) {
                parent[i] = j;
            } else if (score[i] > score[j]) {
                parent[j] = i;
            } else {
                parent[i] = j;
                score[j] += 1;
            }
        }
    }

public:
    bool isConnected(int p, int q) { return findRoot(p) == findRoot(q); }
};

class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        UnionFind uf(n);

        for (const auto& edge : edges) {
            int first = edge[0];
            int second = edge[1];
            if (uf.isConnected(first, second)) {
                return {first, second};
            } else {
                uf.Union(first, second);
            }
        }
        return {};
    }
};

int main(){
    //vector<vector<int>> edges={{1, 2}, {1, 3}, {2, 3}};
    vector<vector<int>> edges={{1,2},{2,3},{3,4},{1,4},{1,5}};
    vector<int> edge;

    Solution solution;

    edge = solution.findRedundantConnection(edges);

    for(auto item:edge){
        cout << item << " ";
    }
    return 0;
}
