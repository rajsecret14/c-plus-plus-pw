#include<iostream>
using namespace std;
int main(){

    int a = 9;
    cout << sizeof(a) <<endl;  //4

    char name = 'b';
    cout << sizeof(name)<<endl;  //1

    double p = 9;
    cout << sizeof(p) <<endl; // 8

    int f;
    a == p ? f = 87888 : f = 6;
    cout<<f <<endl; //87888

    cout << (&a)<<endl; //place of  memory where this variable is stored







    return 0;
}