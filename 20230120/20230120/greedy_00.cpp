//
//  greedy_00.cpp
//  20230120
//  : greedy example - charge
//
//  Created by 김예은 on 2023/01/20.
//

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[])
{
    int remains;
    cin >> remains;
    cout << "get: " << remains << endl;
    
    vector<int> charges = {500, 100, 50, 10};
    int available = 0;
    // the points greedy works
    for (int i=0; i<charges.size(); i++) {
        available = remains / charges[i];
        remains -= available * charges[i];
        
        cout << charges[i] << ": " << available << " and now remains: " << remains << endl;
    }
}
