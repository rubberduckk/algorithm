//
//  boj_11720.cpp
//  20220731
//
//  Created by 김예은 on 2022/07/31.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int cnt, num;
    cin >> cnt;
    cin >> num;
    
    int res = 0;
    for (int i=cnt-1; i>=0; i--)
    {
        int fordiv = pow(10, i);
        int div = num / fordiv;
        
        res += div;
        num = num - div * fordiv;
        if (num == 0)   break;
    }
    cout << res << endl;
}
