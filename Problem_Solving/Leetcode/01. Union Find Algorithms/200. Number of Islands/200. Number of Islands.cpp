#include<bits/stdc++.h>
using namespace std;

class UnionFind{
public:
    vector<int>parent;
    vector<int>height;

public:
    UnionFind(vector<vector<char>>& grid){
        int row = grid.size();
        int col = grid[0].size();
        //cout << row << " " << col << endl;
        int i, j;
        for(i = 0; i < row; i++){
            for(j = 0; j < col; j++){
                if(grid[i][j] == '1'){
                //cout << i * col + j << endl;
                    parent.push_back(i * col + j);
                }else{
                    parent.push_back(-1);
                }

                height.push_back(1);
            }
        }
    }

public:
    int findRoot(int n){
        if(parent[n] == -1)
            return -1;
        while(parent[n] != n){
            parent[n] = parent[parent[n]];//For path compression;
            n = parent[n];
        }

        return n;
    }

public:
    void unionf(int p, int q){
        int i = findRoot(p);
        int j = findRoot(q);

        if(i != j){
            if(height[i] < height[j]){
                parent[i] = j;
                height[j] += height[i];
            } else{
                parent[j] = i;
                height[i] += height[j];

            }
        }
    }
};

class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int row, col, n, m;
        n = grid.size();
        m = grid[0].size();

        UnionFind uf(grid);

        for(row = 0; row < n; row++){
            for(col = 0; col < m; col++){
                if(grid[row][col] == '1'){
                    if(((col - 1) >= 0 ) && (grid[row][col - 1]=='1'))
                    {
                        uf.unionf(m * row + col, m * row + (col - 1));
                    }
                    if(((col + 1) < m ) && (grid[row][col + 1]=='1'))
                    {
                        uf.unionf(m * row + col, m * row + (col + 1));
                    }
                    if(((row - 1) >= 0 ) && (grid[row - 1][col]=='1'))
                    {
                        uf.unionf(m * row + col, col + m * (row - 1));
                    }
                    if(((row + 1) < n ) && (grid[row + 1][col]=='1'))
                    {
                        uf.unionf(m * row + col, col + m * (row + 1));
                    }
                }
            }
        }

        unordered_set<int> answer;
        for(int i = 0; i < m*n; i++){
            int fRoot =  uf.findRoot(i);
            if(fRoot != -1)
                answer.insert(fRoot);
        }

        return answer.size();
    }
};

int main(){
	/*
	vector<vector<char>> grid = {
	    {'1', '1', '0', '0', '0'},
	    {'1', '1', '0', '0', '0'},
	    {'0', '0', '1', '0', '0'},
	    {'0', '0', '0', '1', '1'}};

	*/
	vector<vector<char>> grid = {
	    {'0', '0', '0', '0', '1'},
	    {'1', '0', '0', '0', '0'},};
    int n;
    Solution solnObj;

    n = solnObj.numIslands(grid);

    cout << n << endl;

    return 0;
}
