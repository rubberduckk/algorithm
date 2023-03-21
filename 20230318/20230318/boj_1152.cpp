//
//  boj_1152.cpp
//  20230318
//
//  Created by 김예은 on 2023/03/18.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    getline(cin, input);
    
    unsigned long len = input.length();
    while (input[0] == ' ' || input[len-1] == ' ') {
        if (input[0] == ' ')    { input.erase(0, 1); }
        if (input[len-1] == ' ')  { input.erase(len-1, 1); }
    }
    
    
    unsigned long count = 1;
    for (int i=0; i<len; i++) {
        
        if (input[i] == ' ') {
            count++;
        }
    }
    cout << count << endl;
}
