//
//  recursive_00.cpp
//  20230228
//  : recursive function example - factorial
//
//  Created by 김예은 on 2023/02/28.
//

#include <iostream>

using namespace std;

int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n-1);
}

int main()
{
    int result = factorial(5);
    cout << "result: " << result << endl;
}
