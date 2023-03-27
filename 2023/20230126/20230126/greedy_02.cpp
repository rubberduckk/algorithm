//
//  greedy_02.cpp
//  20230126
//  greedy practice - card game
//
//  Created by 김예은 on 2023/01/26.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[])
{
    int col, row;
    cin >> col >> row;
    
    vector<int> cardPerColumn;
    vector<int> minList;
    int temp;
    for (int i=0; i<col; i++) {
        for (int k=0; k<row; k++) {
            cin >> temp;
            cardPerColumn.push_back(temp);
        }
        minList.push_back(*min_element(cardPerColumn.begin(), cardPerColumn.end()));
        cardPerColumn.clear();
    }
    
//    /* debug line */
//    for (int i=0; i<minList.size(); i++) {
//        cout << minList[i] << " ";
//    }
//    cout << endl;
    
    int result = *max_element(minList.begin(), minList.end());
    cout << "result: " << result << endl;
}
