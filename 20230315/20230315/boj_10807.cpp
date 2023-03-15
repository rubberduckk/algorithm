//
//  boj_10807.cpp
//  20230315
//
//  Created by 김예은 on 2023/03/15.
//

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[])
{
    vector<int> array;
    int count, temp, number;
    
    cin >> count;
    for (int i=0; i<count; i++) {
        cin >> temp;
        array.push_back(temp);
    }
    
    cin >> number;
    int res = 0;
    for (int i=0; i<array.size(); i++) {
        if (array[i] == number) {
            res++;
        }
    }
    
    cout << res << endl;
}
