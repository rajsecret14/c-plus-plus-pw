#include<iostream>
using namespace std;
int main(){
// no of elements in array = length
    int array []{1,2,3,4,5};
    int p = sizeof (array);
    cout<< p<<endl; //size of array in bytes
    cout << p/ sizeof array[0] <<endl; //len of array


    int array2 [4];
    cout<<array2[0]<<endl;
    cout<<array2[1]<<endl;
    cout<<array2[2]<<endl;
    cout<<array2[3]<<endl;
    // always initialise your array ,garbage value will be there 



    return 0;
}