//
//  boj_1316.cpp
//  20230314
//
//  Created by 김예은 on 2023/03/14.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isGroupWord(string str)
{
    vector<char> check;
    check.push_back(str[0]);
    
    for (int i=1; i<str.length(); i++) {
        if (find(check.begin(), check.end(), str[i]) != check.end()) {
            if (str[i] != str[i-1]) {
                return false;
            }
        }
        check.push_back(str[i]);
    }
    return true;
}

int main()
{
    int count, res = 0;
    string input;
    
    //input
    cin >> count;
    for (int i=0; i<count; i++) {
        cin >> input;
        if (isGroupWord(input)) {
            res++;
        }
    }
    
    cout << res << endl;
}
