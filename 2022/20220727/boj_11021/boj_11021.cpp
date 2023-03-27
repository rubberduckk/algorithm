//
//  boj_11021.cpp
//  20220727
//
//  Created by 김예은 on 2022/07/27.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int cnt = 0, i, a, b;
    vector<int> res;
    
    cin >> cnt;
    for (i=0; i<cnt; i++) {
        cin >> a >> b;
        res.push_back(a+b);
    }
    for (i=0; i<cnt; i++) {
        cout << "Case #" << i+1 << ": " << res.at(i) << "\n";
    }
}
