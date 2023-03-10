//
//  boj_4673.cpp
//  20230310
//
//  Created by 김예은 on 2023/03/10.
//

#include <iostream>
#include <vector>
#include <string>       // to_string
#include <algorithm>    // find(int)

#define END 10000
using namespace std;

int getSelfNumber(int n)
{
    int res = n;
    string itoa = to_string(n);
    
    // for switch type: char -> int
    for (int i=0; i<itoa.length(); i++) {
        res += (itoa[i] - '0');
    }
    
    return res;
}

int main()
{
    vector<int> numbers;
    
    int n;
    for (int i=1; i<END; i++) {
        n = getSelfNumber(i);
        if (find(numbers.begin(), numbers.end(), n) == numbers.end()) {
            numbers.push_back(n);
        }
    }
    
    for (int i=1; i<10000; i++) {
        if (find(numbers.begin(), numbers.end(), i) == numbers.end()) {
            cout << i << endl;
        }
    }
}
