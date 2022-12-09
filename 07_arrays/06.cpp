#include<iostream>
using namespace std;
int main(){

    // int array[] = {1,2,3,4,5};
    // cout<<sizeof(array)<<endl;
    // cout<<"length of array"<<endl;
    // cout<<sizeof(array)/sizeof(array[0]);

// traversing through the elements of an array by loop method (while) 
    int array2[5];
    int a = 0 ;
    int n = sizeof(array2)/ sizeof(array2[1]);
    while (a < n ){
    cout<<array2[a]<<endl;
    a++;   

    }   
    


    




    return 0;
}