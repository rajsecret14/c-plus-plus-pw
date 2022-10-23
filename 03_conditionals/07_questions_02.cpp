#include<iostream>
using namespace std;
int main(){

    int a ;
    cin>> a;
    if ((a%3==0)&&(a%5==0)){
        cout << a<<endl;
    }
    else{
        cout << a<<" is not divisible by 3 or 5.";
    }

    




    return 0;
}