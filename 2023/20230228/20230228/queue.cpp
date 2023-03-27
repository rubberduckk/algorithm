//
//  queue.cpp
//  20230228
//  : queue example - first in, first out
//
//  Created by 김예은 on 2023/02/28.
//

#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> q;
    
    q.push(4);
    q.push(0);
    q.push(7);
    
    q.pop();
    
    q.push(56);
    q.push(3);
    q.push(10);
    
    // print out
    cout << "[ ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << "]" << endl;
}
