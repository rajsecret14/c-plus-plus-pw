#include<iostream>
using namespace std;
int main(){

    int p = 5;
    
    cout << p;   //conflicting values

    while(p < 6){
        float p = 5.2;
        cout<<p;
        p++;
    }




    return 0;
}