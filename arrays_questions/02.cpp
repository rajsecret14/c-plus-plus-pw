#include<iostream>
using namespace std;
int main(){
//my way
    //array
    int numbers[] = {40,98,19,27};

    //elements chosing

    int n0 = numbers[0];
    int n1 = numbers[1];
    int n2 = numbers[2];
    int n3 = numbers[3];


    //logic 
    int max;
    if ((n0<n1)){
       max = n1;
    }
    else{
        max = n0;
    }
    if(max<n2){
        max = n2;
    }
    if(max<n3){
        max = n3;
    }
    cout<<max;

    return 0;
}