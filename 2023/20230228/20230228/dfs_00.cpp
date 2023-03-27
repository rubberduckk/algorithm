//
//  dfs_00.cpp
//  20230228
//  : DFS(depth-first search) example - implementation with recursive func.
//
//  Created by 김예은 on 2023/02/28.
//

#include <iostream>
#include <vector>

#define SIZE 7
using namespace std;

bool isVisited[SIZE];
vector<int> graph[SIZE];    // double dimension

void depthFirst(int x) {
    isVisited[x] = true;
    cout << x << " ";
    for (int i=0; i<graph[x].size(); i++) {
        int the = graph[x][i];
        
        if (!isVisited[the]) {
            depthFirst(the);
        }
    }
}

int main()
{
    // making connection with each node
    graph[0].push_back(1);
    graph[0].push_back(2);
    
    graph[1].push_back(3);
    
    graph[2].push_back(5);
    graph[2].push_back(4);
    
    depthFirst(0);  // input =  initial node
    cout << endl;
}
