//
//  boj_10811.cpp
//  20230325
//
//  Created by 김예은 on 2023/03/25.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[])
{
    int count, turn;
    cin >> count >> turn;
    
    vector<int> baskets;
    for (int i=1; i<=count; i++) {
        baskets.push_back(i);
    }
    
    int from, to;
    for (int i=0; i<turn; i++) {
        cin >> from >> to;
        
        from -= 1; // 왜징
        
        reverse(baskets.begin()+from, baskets.begin()+to);
    }
    
    for (int i=0; i<baskets.size(); i++) {
        cout << baskets.at(i) << " ";
    }
    cout << endl;
}
