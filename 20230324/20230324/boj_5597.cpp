//
//  boj_5597.cpp
//  20230324
//
//  Created by 김예은 on 2023/03/24.
//

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[])
{
    vector<int> students(30);
    
    int temp;
    for (int i=0; i<28; i++) {
        cin >> temp;
        students.at(temp-1) = temp;
    }
    
    for (int i=0; i<students.size(); i++) {
        if (students.at(i) == 0) {
            cout << i+1 << endl;
        }
    }
}
