//
//  boj_1712.cpp
//  20230314
//
//  Created by 김예은 on 2023/03/14.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    long a, b, c;
    long num = 0;
    
    // input
    cin >> a >> b >> c;
    
    if (c-b <= 0) {
        cout << -1 << endl;
    }
    else {
        num = (long)(a / (c-b)) + 1;
        cout << num << endl;
    }
    
}
