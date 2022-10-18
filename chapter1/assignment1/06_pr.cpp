#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    a = 4;
    b = 5;
    cout <<"a = " << a<<endl;
    cout <<"b = " << b<<endl;
    c = b;
    b = a;
    a = c;
    cout <<"a = " << a<<endl;
    cout <<"b = " << b<<endl;
    cout <<"value swaped done. ";

    return 0;
}