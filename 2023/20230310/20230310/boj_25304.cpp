//
//  boj_25304.cpp
//  20230310
//
//  Created by 김예은 on 2023/03/10.
//

#include <iostream>
 
using namespace std;

int main()
{
    int wholePrice, wholeCount;
    cin >> wholePrice;
    cin >> wholeCount;
    
    int price, count, multipled;
    int compared = 0;
    for (int i=0; i<wholeCount; i++) {
        cin >> price >> count;
        multipled = price * count;
        
        compared += multipled;
    }
    
    // debug line
    // cout << "whole prices: " << compared << endl;
    
    if (wholePrice == compared) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}

