//
//  boj_10952.cpp
//  20230312
//
//  Created by 김예은 on 2023/03/12.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int a, b;
    
    while (true) {
        cin >> a >> b;
        
        if (a==0 && b==0) {
            break;
        }
        else {
            cout << a+b << endl;
        }
    }
}
