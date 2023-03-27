//
//  recursive_01.cpp
//  20230228
//  : recursive function example - euclidean algorithm
//
//  Created by 김예은 on 2023/02/28.
//

#include <iostream>

using namespace std;

int getGCD(int a, int b) {
    int gcd;
    if (a % b == 0) {
        gcd = b;
        return gcd;
    }
    return getGCD(b, a%b);
}

int main()
{
    int result = getGCD(1512, 1008);
    cout << "result: " << result <<  endl;
}
