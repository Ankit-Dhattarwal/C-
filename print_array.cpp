#include<iostream>
using namespace std;

void printArray(int a[][5], int m, int n){
    for(int j = 0; j<n; j++){
        for(int i = 0; i<m;i++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int a[5][5] = {{1,2},{3,4}};
    printArray(a, 5, 5);
}

