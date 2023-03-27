//
//  boj_2562.cpp
//  20230313
//
//  Created by 김예은 on 2023/03/13.
//

#include <iostream>
#include <vector>
#include <algorithm>

#define SIZE 9

using namespace std;

int main(int argc, const char * argv[])
{
    vector<int> container;
    int temp, max = 0;
    
    for (int i=0; i<SIZE; i++) {
        cin >> temp;
        container.push_back(temp);
        
        if (temp > max) {
            max = temp;
        }
    }
    
    cout << max << endl;
    cout << find(container.begin(), container.end(), max) - container.begin() + 1 << endl;
    
}
