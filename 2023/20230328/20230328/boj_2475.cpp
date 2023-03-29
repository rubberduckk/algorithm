//
//  boj_2475.cpp
//  20230328
//
//  Created by 김예은 on 2023/03/28.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int input;
    int verified = 0;
    
    for (int i=0; i<5; i++) {
        cin  >> input;
        verified += input * input;
    }
    
    cout << verified % 10 << endl;
}
