#include<iostream>
using namespace std;
int main(){

    int apple = 5;
    cout<<apple;


    




    return 0;
}
void print (){
    cout<<apple;  //apple is not defined in 'print' function , it is defined in another function.
}