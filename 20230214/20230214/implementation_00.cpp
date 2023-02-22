//
//  implementation_00.cpp
//  20230214
//  : implementation example - LRUD
//
//  Created by 김예은 on 2023/02/14.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Destination {
private:
    int x, y;
public:
    vector<string> route;
    Destination();  // constructor
    
    // moving function
    void left();
    void right();
    void up();
    void down();
    
    // adjust the way
    bool checkBorder(int forwardX, int forwardY);
    
    // accesses to private objects
    int getXcoord() { return x; }
    int getYcoord() { return y; }
};

// implementation
//
// constructor
Destination::Destination() { x = 1; y = 1; }

bool Destination::checkBorder(int forwardX, int forwardY) {
    if (forwardX>0 && forwardX<=5)
    {
        if (forwardY>0 && forwardY<=5) {
            return true;
        }
        else {
            return false;
        }
    }
    else {
        return false;
    }
}

// moving function
void Destination::left() {
    int tempY = y-1;
    if (checkBorder(x, tempY))
        y -= 1;
}
void Destination::right() {
    int tempY = y+1;
    if (checkBorder(x, tempY))
        y += 1;
}
void Destination::up() {
    int tempX = x-1;
    if (checkBorder(tempX, y))
        x -= 1;
}
void Destination::down() {
    int tempX = x+1;
    if (checkBorder(tempX, y))
        x += 1;
}


int main(int argc, const char * argv[])
{
    Destination test;
    
    // input field
    int size;
    cin >> size;

    string lrud;
    do {
        cin >> lrud;
        test.route.push_back(lrud);
        
        lrud.clear();
    } while (getc(stdin) == ' ');
    
    
    for (int i=0; i<test.route.size(); i++) {
        
        if (test.route[i] == "L")   test.left();
        if (test.route[i] == "R")   test.right();
        if (test.route[i] == "U")   test.up();
        if (test.route[i] == "D")   test.down();
        
        cout << i << " turn result: " << test.getXcoord() << " " << test.getYcoord() << endl;
    }
    cout << test.getXcoord() << " " << test.getYcoord() << endl;
}
