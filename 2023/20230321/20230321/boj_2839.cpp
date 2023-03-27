//
//  boj_2839.cpp
//  20230321
//
//  Created by 김예은 on 2023/03/21.
//

#include <iostream>

using namespace std;

int main()
{
    // input
    int sugar;
    cin >> sugar;
    
    int five, three, result;
    five = sugar/5;
    while (five >= 0) {
        three = 0;
        result = 0;
        
        if (five > 0) {
            three = sugar - five*5;
            result = five;
        }
        else {
            three = sugar;
        }
        
        result += three/3;
        three = three % 3;
        
        if (three == 0) {
            cout << result << endl;
            break;
        }
        
        five--;
    }
     // debugging line: cout << three << endl;
    
    if (three != 0) {
        cout << -1 << endl;
    }
}
