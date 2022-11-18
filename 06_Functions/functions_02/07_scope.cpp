#include<iostream>
using namespace std;
int p = 5;
int main(){

    float p = 5.6;
    cout<<p<<endl; // now it will deliver local varibale value
    return 0;
}
void print(){
    cout<<p;
}