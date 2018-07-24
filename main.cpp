#include <iostream>

#include <string>

using namespace std;

int main(int argc, char **argv) {
    int N, S, C, H, U;
    cin >> N >> S >> C >> H >> U;
    string temp;
    temp.resize(N);
    string hand;
    hand.resize(H + S);
    cin.read(&temp[0], N);
    cin.read(&hand[0], H+S);
    
    return 0;
}
