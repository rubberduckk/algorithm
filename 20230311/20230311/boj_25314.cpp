//
//  boj_25314.cpp
//  20230311
//
//  Created by 김예은 on 2023/03/11.
//

#include <iostream>
#define LONG "long "

using namespace std;

int main(int argc, const char * argv[])
{
    int bytes;
    cin >> bytes;
    
    string l = LONG;
    int count = bytes / 4;
    
    for (int i=0; i<count-1; i++) {
        l += LONG;
    }
    
    cout << l << "int" << endl;
}
