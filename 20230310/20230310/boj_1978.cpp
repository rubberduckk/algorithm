//
//  boj_1978.cpp
//  20230310
//
//  Created by 김예은 on 2023/03/10.
//

#include <iostream>

using namespace std;

bool isPrime(int n)
{
    bool res = true;
    
    if (n < 2) {
        res = false;
    }
    for (int i=2; i<n; i++) {
        if (n%i == 0){ res = false; }
    }
    
    return res;
}

int main()
{
    int count, number, result = 0;
    cin >> count;
    
    for (int i=0; i<count; i++) {
        cin >> number;
        
        if (isPrime(number)) {
            result++;
        }
    }
    
    cout << result << endl;
}
