#include<iostream>
using namespace std;
int main(){

    int array [] = {1,2,3,4,5};
    int p = sizeof (array) / sizeof (array[0]);
     
    for (int i = 0 ;p>i; i++) {
        cout<< array[i]<<endl;
        
    }



    




    return 0;
}