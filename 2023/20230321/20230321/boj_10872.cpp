//
//  boj_10872.cpp
//  20230321
//
//  Created by 김예은 on 2023/03/21.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    // input
    int input;
    cin >> input;
    
    int res = 1;
    if (input == 0) {
        cout << res << endl;
    }
    else {
        for (int i=input; i>0; i--) {
            res = res * i;
        }
        cout << res << endl;
    }
}
