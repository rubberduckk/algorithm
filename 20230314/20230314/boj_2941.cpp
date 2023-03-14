//
//  boj_2941.cpp
//  20230314
//
//  FAILED!!
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> letter = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    
    string input;
    cin >> input;
    
    int pin;
    for (int i=0; i<letter.size(); i++)
    {
        while (true) {
            pin =(int)input.find(letter[i]);
            
            if (pin == string::npos)
                break;
            
            input.replace(pin, letter[i].length(), "0");
        }
    }
    
    cout << input.length() << endl;
}
