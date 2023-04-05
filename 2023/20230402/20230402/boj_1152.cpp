//
//  boj_1152.cpp
//  20230318
//
//  Created by 김예은 on 2023/04/02.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    getline(cin, input);
    
    int count = 0;
        bool space = false;
        if(input.empty())
        {
            cout << "0";
            return 0;
        }
        count = 1;
        for(int i = 0; i < input.length(); i++)
        {
            if(input[i] == ' ')
                count++;
        }
        if(input[0] == ' ')
            count--;
        if(input[input.length()-1] == ' ')
            count--;

        cout << count;
        return 0;
}
