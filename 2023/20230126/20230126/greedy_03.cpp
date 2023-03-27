//
//  greedy_03.cpp
//  20230126
//  greedy practice - until what is going to be 1
//
//  Created by 김예은 on 2023/01/26.
//

#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    
    int count = 0;
    while (n > 1) {
        if (n % k == 0) {
            n /= k;
            cout << "divided by " << k << " and now N: " << n << endl;
        }
        else {
            n -= 1;
            cout << "subtracted 1 and now N: " << n << endl;
        }
        count++;
    }
    cout << "result : " << count << endl;
}
