#include<iostream>
using namespace std;
int main(){
// sum of n nos. and take input from user
    cout<<"input n ";
    int n ;
    cin>> n ;
    int sum = 0;
    do{
        int num ;
        cin>>num;
        sum = sum + num;
        n--;
    }
    while (n>0);

    cout<<sum<<endl;

    




    return 0;
}