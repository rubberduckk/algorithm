//
//  boj_2675.cpp
//  20230329
//
//  Created by 김예은 on 2023/03/29.
//

#include <iostream>

using namespace std;

void RepeatString(int repeat, string input)
{
    for (int i=0; i<input.length(); i++) {
        for (int k=0; k<repeat; k++) {
            cout << input[i];
        }
    }
    cout << endl;
}

int main(int argc, const char * argv[])
{
    int test;
    cin >> test;
    
    int repeat;
    string input;
    for (int i=0; i<test; i++) {
        cin >> repeat >> input;
        
        RepeatString(repeat, input);
    }
}
