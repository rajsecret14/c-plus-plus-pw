#include<iostream>
using namespace std;
int main(){
    int a = 5;
    cout<<(a++)<<endl; //not change the value of a // 5
    cout<<a <<endl; //6

    int b = 9;
    cout<<(++b)<<endl; //change the value of a  //10
    cout<<b<<endl; //10

    int c = 8 ;
    cout<<(--c)<<endl;
    cout<<c<<endl;


    return 0;
}