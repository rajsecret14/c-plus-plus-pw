#include<iostream>
using namespace std;
int main(){

    cout<<"Please enter ur no.";
    int n,a,sum;
    cin>> n ;
    sum = 0;
    a = 1; //loop varibale
    while (a <= n){ //condition
        sum = sum + a ;
        a++; //updating a loop

    }
cout<<sum<<endl;




    




    return 0;
}