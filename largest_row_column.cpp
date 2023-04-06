#include<iostream>
using namespace std;

void printArray(int a[][100], int m, int n){
    for(int j = 0; j<n; j++){
        for(int i = 0; i<m;i++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int colsum = INT_MIN;
    int rowsum = INT_MIN;
    
    // for index
    int r = 0;
    int c = 0;
    
    int a[100][100];
    int m, n;
    cin>>m>>n;
    
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n;j++){
            cin>>a[i][j];
        }
    }
    
    // <------ column sum ----->
    
    for(int j = 0; j<n; j++){
        int col = 0;
        for(int i = 0; i<m;i++){
            col = col + a[i][j];
            
        }
        if(col>colsum){
            colsum = col;
            r  = j;
        }
        cout<<endl;
        
        
    }
    
    // <------ row sum ----->
    
    
    
    for(int i = 0; i<m; i++){
        int row = 0;
        for(int j = 0; j<n;j++){
            row = row + a[i][j];
            
        }
        if(row>rowsum){
            rowsum = row;
            c  = i;
        }
        cout<<endl;
        
    }
    if(colsum>rowsum){
        cout<<"Largest is: "<<colsum<<" with index is: "<<c<<endl;
    }
    else{
        cout<<"Largest is: "<<rowsum<<" with index is: "<<r<<endl;
    }
}
