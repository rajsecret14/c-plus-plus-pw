#include<iostream>
using namespace std;
int main(){

// we are taking input from user and give output by for loop

    char vowels[5];

    cout<< "put ur vowels"<<endl;

    for(int idx= 0 ; idx < 5 ; idx++){
        cin >>vowels[idx];
    }
    
    for(int idx= 0 ; idx < 5 ; idx++){
        cout<<vowels[idx] <<" ";
    }




    return 0;
}