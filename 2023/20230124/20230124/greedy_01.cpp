//
//  main.cpp
//  20220124
//  greedy practice - biggest one
//
//  Created by 김예은 on 2023/01/24.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[])
{
    // n: 입력 받을 수의 개수
    // m: 덧셈 횟수
    // k: 한 원소당 최대 반복 가능 횟수
    int n, m, k;
    cin >> n >> m >> k;
    
    int temp;
    vector<int> container;
    for (int i=0; i<n; i++) {
        cin >> temp;
        container.push_back(temp);
    }
    sort(container.begin(), container.end()); // 오름차순 정렬
    
    // 덧셈
    int count = 0, result = 0;
    while (count < 8) {
        for (int i=0; i<k; i++) {
            result += container[container.size()-1];
            count++;
        }
        result += container[container.size()-2];
        count++;
    }
    cout << "result: " << result << endl;
}
