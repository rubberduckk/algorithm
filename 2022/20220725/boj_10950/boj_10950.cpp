//
//  boj_10950.cpp
//  20220725
//
//  Created by 김예은 on 2022/07/25.
//

#include <iostream>
#include <vector>

using namespace std;

int makeSum(int a, int b) {
    return a + b;
}

int main() {
    int cnt, a, b;
    vector<int> res;
    
    cin >> cnt;
    for (int i=0; i<cnt; i++) {
        cin >> a >> b;
        res.push_back(makeSum(a, b));
    }
    for (int i=0; i<cnt; i++) {
        cout << res.at(i) <<endl;
    }
}
