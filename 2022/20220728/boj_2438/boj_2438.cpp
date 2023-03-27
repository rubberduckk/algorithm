//
//  boj_2438.cpp
//  20220728
//
//  Created by 김예은 on 2022/07/28.
//

#include <iostream>

using namespace std;

int main() {
    int cnt = 0;
    cin >> cnt;
    
    for (int i=0; i<cnt; i++) {
        for (int j=1; j<=i+1; j++) {
            cout << "*";
        }
        cout << "\n";
    }
}
