//
//  main.cpp
//  20221111
//
//  Created by 김예은 on 2022/11/11.
//

#include <iostream>
#include <vector>

using namespace std;

long long sum(vector<int> &a);

int main(int argc, const char * argv[])
{
    vector<int> container;
    
    int n, number;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> number;
        container.push_back(number);
    }
    long res = sum(container);
    cout << res;
}

long long sum(vector<int> &a)
{
    long long resSum = 0;
    for (int i=0; i<a.size(); i++) {
        resSum += a.at(i);
    }
    
    return resSum;
}
