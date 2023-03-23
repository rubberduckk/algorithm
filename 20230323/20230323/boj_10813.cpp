//
//  boj_10813.cpp
//  20230323
//
//  Created by 김예은 on 2023/03/23.
//

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[])
{
    // input
    int val, turn;
    cin >> val >> turn;
    
    vector<int> basket;
    for (int i=1; i<=val; i++) {
        basket.push_back(i);
    }
    
    int the, other, temp;
    for (int i=0; i<turn; i++) {
        cin >> the >> other;
        
        the -= 1;
        other -= 1;
        
        temp = basket.at(the);
        basket.at(the) = basket.at(other);
        basket.at(other) = temp;
    }
    
    for (int i=0; i<basket.size(); i++) {
        cout << basket.at(i);
        if (i != basket.size()-1) {
            cout << " ";
        }
    }
    cout << endl;
}
