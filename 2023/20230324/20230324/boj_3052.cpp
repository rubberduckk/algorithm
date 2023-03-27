//
//  boj_3052.cpp
//  20230324
//
//  Created by 김예은 on 2023/03/24.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> remains;
    int input, temp;
    for (int i=0; i<10; i++) {
        cin >> input;
        
        temp = input % 42;
        if (find(remains.begin(), remains.end(), temp) == remains.end()) {
            remains.push_back(temp);
        }
    }
    
    cout << remains.size() << endl;
}
