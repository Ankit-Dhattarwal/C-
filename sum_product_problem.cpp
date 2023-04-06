#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    
    int choice;
    int sum = 0;
    int product = 1;
    cout<<"Enter the choice only in form of the 1 and 2"<<endl;
    cin>>choice;

    if(choice == 1){
        for(int i = 0 ; i<=n;i++){
            sum = sum + i;
        }
        cout<<sum<<endl;
    }
    if(choice == 2){
        for(int i = 1; i<=n;i++){
            product = product * i;
        }
        cout<<product<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
}

