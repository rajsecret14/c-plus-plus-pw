#include<iostream>
using namespace std;
int main(){

    int a ,b,power,c;
    a= 5;
    b = 2;
    c= 1;
    power = 1;
    while(c<=b){
        power*=a;
        c++;
    }

    cout << power;




    return 0;
}