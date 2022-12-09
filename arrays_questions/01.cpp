#include<iostream>
using namespace std;
int main(){

    int array [6] = {1,2,4,6,8,9};
    int sumofarray = 0;
    
    for (int ind = 0; ind < 6; ind++){ 
       sumofarray = sumofarray + array[ind];
    }
    cout<<sumofarray;
   
    




    return 0;
}