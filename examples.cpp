//#include<iostream>
//using namespace std;
//int main(){
//    //    int i = 10;
//    //    cout<<i<<endl;
//    //
//    //    if(i == 10){
//    //        int i = 12;
//    //        cout<<i<<endl;
//    //    }
//    //}
//
//    //#include <iostream>
//    //using namespace std;
//    //int main() {
//    //int a = 10;
//    //if(a > 5) {
//    //int a = 100;
//    //}
//    //cout << a << endl;
//    //}
//    int x = 1;
//    while(x <= 10) {
//
//        x += 1;
//        cout<<("Coding Ninjas\n");
//    }
//}


//#include<iostream>
//using namespace std;
//#include <climits>
//
//
//int main(){
//    int n;
//    cin>>n;
//    int max=INT_MIN,secondMax=INT_MIN;
//    int num;
//    int count=1;
//
//    while(count<=n){
//        cin>>num;
//        if (num>max){
//            secondMax=max;
//            max=num;
//        }
//        else if(num>secondMax&&num!=max){
//            secondMax=num;
//        }
//        count++;
//
//
//    }
//    cout<<secondMax<<endl;
//
//}


//#include<iostream>
//using namespace std;
//int main(){
//    int n = 7;
//
//    int arr[] = {2,6,3,1,5,9,8};
//
//    int temp = arr[0];
//    for(int i = 0; i<n;i++){
//        arr[i] = arr[i+1];
//    }
//    arr[n-1] = temp;
//
//    for(int i = 0; i<n;i++){
//        cout<<arr[i];
//    }
//}


//#include<iostream>
//using namespace std;
//int main(){
//    int n = 7;
//    int d = 2;
//    int arr[] = {2,6,3,1,5,9,8};
//
//    int arr2[d];
//
//    for(int j = 0; j<d; j++){
//        arr2[d] = arr[j];
//    }
//
//    for(int i = 0; i<n-2;i++){
//        arr[i] = arr[i+d];
//     }
//    int k =d;
//    for(int i = 0; i<d; i++){
//        arr[n+i-2] = arr2[i];
//        k--;
//    }
