//
//  boj_2920.cpp
//  20230327
//
//  Created by 김예은 on 2023/03/27.
//

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[])
{
    char scale;
    vector<char> input;
    
    for (int i=0; i<8; i++) {
        cin >> scale;
        input.push_back(scale);
    }
    
    string playing(input.begin(), input.end());
    // debugging line : cout << playing << endl;
    
    if (playing.compare("12345678") == 0) {
        cout << "ascending" << endl;
    }
    else if (playing.compare("87654321") == 0) {
        cout << "descending" << endl;
    }
    else {
        cout << "mixed" << endl;
    }
}
