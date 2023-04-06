#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int bs;
    cout<<"Enter the basic salary"<<endl;
    cin>>bs;
    
    char grade;
    cout<<"Enter the grade"<<endl;
    cin>>grade;
    
   double hra = 0.2 * bs;
    double da = 0.5 *bs;
    double pf = 0.11 * bs;
    
   float result = bs + hra + da - pf;
  
    if(grade == 'A'){
        int a = 1700;
        cout<< round(result + a)<<endl;
    }
    else if (grade == 'B'){
        int b = 1500;
        cout<< round(result + b)<<endl;
    }
    else{
       cout<<round(result + 1300)<<endl;
    }
}
