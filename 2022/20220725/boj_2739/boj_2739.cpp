//
//  boj_2739.cpp
//  20220725
//
//  Created by 김예은 on 2022/07/25.
//

#include <iostream>
#include <cmath>

using namespace std;

class Gugu {
private:
    int index;
public:
    Gugu(int n);
};

Gugu::Gugu(int n) {
    this->index = n;
    
    for (int i=1; i<10; i++) {
        cout << n << " * " << i << " = " << n*i << endl;
    }
}

int main() {
    int index;
    cin  >> index;
    
    Gugu gugu(index);
}
