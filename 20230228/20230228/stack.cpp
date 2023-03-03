//
//  stack.cpp
//  20230228
//  : stack example
//
//  Created by 김예은 on 2023/02/28.
//

#include <iostream>
#include <stack>

using namespace std;

int main(int argc, const char * argv[])
{
    // definition
    stack<int> s;
    
    // push and pop
    s.push(5);
    s.push(2);
    s.push(3);
    s.push(7);
    
    s.pop();    // delete
    
    s.push(1);
    s.push(4);
    
    s.pop();
    
    // print out
    cout << "[ ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << "]" << endl;
}
