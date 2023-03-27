//
//  boj_9086.cpp
//  20230318
//
//  Created by 김예은 on 2023/03/18.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int count;
    cin >> count;
    
    
    string input;
    
    for (int i=0; i<count; i++) {
        cin >> input;
        cout << input.at(0) << input.at(input.length()-1) << endl;
    }
}
