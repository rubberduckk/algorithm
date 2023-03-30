//
//  boj_8958.cpp
//  20230330
//
//  Created by 김예은 on 2023/03/30.
//

#include <iostream>
#include <string>

using namespace std;

int GetScore(string ox)
{
    int score = 0;
    int temp = 0;
    for (int i=0; i<ox.length(); i++) {
        if (ox[i] == 'O') {
            ++temp;
            score += temp;
        }
        else {
            temp = 0;
        }
    }
    
    return score;
}

int main(int argc, const char * argv[])
{
    int input;
    cin >> input;
    
    cin.ignore();   // !!!
    
    string ox;
    for (int i=0; i<input; i++) {
        getline(cin, ox);
        
        cout << GetScore(ox) << endl;
    }
}
