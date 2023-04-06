#include<iostream>
using namespace std;


int main() {
    int n;
    cin >> n;

    int square = 0;
    while(square * square <= n) {
        square= square + 1;
    }
    square = square - 1;
    cout << square<<endl;
}
