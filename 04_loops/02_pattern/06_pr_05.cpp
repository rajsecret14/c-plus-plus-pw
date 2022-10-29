#include<iostream>
using namespace std;
int main(){

    int n ;
    cout << "put ur no."<<endl;
    cin>>n;
    int a = 1 ;
    int factorial = 1;
    while (a<=n){
        factorial= a*factorial;
        a++;
    }

    cout<<factorial;




    return 0;
}