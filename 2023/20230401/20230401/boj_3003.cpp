//
//  boj_3003.cpp
//  20230401
//
//  Created by 김예은 on 2023/04/01.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int king, queen, rook, bishop, knight, pawn;
    cin >> king >> queen >> rook >> bishop >> knight >> pawn;
    
    king = 1-king;
    queen = 1-queen;
    rook = 2-rook;
    bishop = 2-bishop;
    knight = 2-knight;
    pawn = 8-pawn;
    
    cout << king << " " << queen << " " << rook << " " << bishop << " " << knight << " " << pawn << endl;
}
