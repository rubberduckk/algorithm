//
//  main.cpp
//  20230115
//
//  Created by 김예은 on 2023/01/15.
//

#include <iostream>
#include <istream>
#include <cstdlib>

using namespace std;

int main(int argc, const char * argv[]) {
    int strLength;
    char input[100];
    
    cin >> strLength;
    cin.ignore();
    
    cin.getline(input, strLength + 1);
    // cout << "input: " << input << endl; // debug line
    
    int sum = 0;
    int temp;
    string character;
    for (int i=0; i<strLength; i++) {
        character = input[i];
        temp = stoi(character);
        sum += temp;
    }
    
    cout << sum;
}
