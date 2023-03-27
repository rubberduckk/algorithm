//
//  boj_15552.cpp
//  20220726
//
//  Created by 김예은 on 2022/07/26.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    // C와 C++ 사이의 stream 동기화를 끊음 -> 속도 증가
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int cnt = 0, a, b;
    vector<int> res;
    
    cin >> cnt;
    for (int i=0; i<cnt; i++) {
        cin >> a >> b;
        res.push_back(a+b);
    }
    for (int i=0; i<cnt; i++) {
        cout << res[i] << "\n";
    }
}
