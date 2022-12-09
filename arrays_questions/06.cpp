#include<iostream>
using namespace std;
int main(){
//find greatest no.

    int number[] = {1,5,8,6};
    int max = number[0];

    for(int a = 0 ; a < 2; a++){
        if (number[a+1]<number[a]){
            max = number[a];
        }
        else{
            max = number[a+1];
        }
    }


cout<<max;





   return 0 ;
}