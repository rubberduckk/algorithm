//
//  main.cpp
//  20221119
//
//  Created by 김예은 on 2022/11/19.
//

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[])
{
    // get input
    int count, res=0;
    cin >> count;
    
    string tempString;
    cin >> tempString;
    
    int tempInt = stoi(tempString);
    for (int i=0; i<count; i++) {
        res += tempInt / pow(10, i);
        tempInt -= res;
    }
    
    cout << res << endl;
}
