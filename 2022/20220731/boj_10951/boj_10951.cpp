//
//  boj_10951.cpp
//  20220731
//
//  Created by 김예은 on 2022/07/31.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a, b;
    
    // 입력 수가 정해지지 않음 => 읽어낼 수 없을 때까지 읽어낸다(EOF 이용)
    while(!(cin >> a >> b).eof()) {
        cout << a+b << "\n";
    }
}
