//
//  boj_2439.cpp
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
        for (int j=1; j<cnt-i; j++) {
            cout << " ";
        }
        for (int k=0; k<i+1; k++) {
            cout << "*";
        }
        cout << "\n";
    }
}
