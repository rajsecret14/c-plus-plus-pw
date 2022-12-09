#include<iostream>
using namespace std;
int main(){
// for each loop =  best for printing arrays
// this will traverse every element of the array
     
     int array[5] = {1,2,5,6,8};
     for(int element : array){
        cout<<element<<endl;
     }

     // while loop

     int idx = 0;
     int size = sizeof(array)/sizeof(array[0]);
     while (idx < size ){
        cout<<array[idx]<<endl;
        idx++;
     }


    return 0;
}