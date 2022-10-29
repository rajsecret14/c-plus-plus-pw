#include<iostream>
using namespace std;
int main(){

    int n,ldigit;
    cout<<"write ur no.";
    cin>>n;

    while (n > 0){
        ldigit = n %10;
        cout<<ldigit;
        n = n/10;
    }



    




    return 0;
}