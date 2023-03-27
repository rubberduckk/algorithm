//
//  boj_10871.cpp
//  20220729
//
//  Created by 김예은 on 2022/07/29.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int cnt, mark, num;
    vector<int> condition;
    cin >> cnt >> mark;
    
    for (int i=0; i<cnt; i++) {
        cin >> num;
        condition.push_back(num);
    }
    for (int i=0; i<cnt; i++) {
        if (condition.at(i) < mark) {
            cout << condition.at(i) << " ";
        }
    }
    cout << endl;
}
