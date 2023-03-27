//
//  boj_10810.cpp
//  20230322
//
//  Created by 김예은 on 2023/03/22.
//

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[])
{
    // input
    int basket, ball;
    cin >> basket >> ball;
    
    vector<int> basket_list(basket);    // initailized by 0
    int first, last, ball_num;
    for (int i=0; i<ball; i++) {
        // input
        cin >> first >> last >> ball_num;
        
        // put ball into basket with check
        for (int k=first; k<=last; k++) {
            basket_list.at(k-1) = ball_num;
        }
    }
    
    for (int i=0; i<basket_list.size(); i++) {
        cout << basket_list.at(i);
        if (i != basket_list.size()-1) {
            cout << " ";
        }
    }
    cout << endl;
}
