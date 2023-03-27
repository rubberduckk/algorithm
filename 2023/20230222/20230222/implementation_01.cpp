//
//  implementation_01.cpp
//  20230222
//  : implementation practice - knight in royal
//
//  Created by 김예은 on 2023/02/22.
//

#include <iostream>
#include <vector>

using namespace std;

class move {
private:
    int x, y;
public:
    move(int x, int y);
};

move::move(int x, int y) {
    this->x = x;
    this->y = y;
}

int main(int argc, const char * argv[])
{
    vector<move> routes = {
        move(1, 2), move(2, 1), move(2, -1), move(1, -2),
        move(-1, 2), move(-2, 1), move(-2, 1), move(-)
    };
}
