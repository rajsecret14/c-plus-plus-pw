#include<iostream>
using namespace std;
int main(){

// traversing through the elements of an array by loop method (for loop) 

    int array[4] = {1,2,3,5}; //initialise and give an array
    int n = sizeof(array)/ sizeof(array[4]); // declaring n as the no of elements
    for (int idx = 0 ; idx< n  ; idx++){ // declaring idx as index so that it will traverse to each index 0 to 4
        cout<<array[idx]<<endl; //print the elements of array
    }
    




    return 0;
}