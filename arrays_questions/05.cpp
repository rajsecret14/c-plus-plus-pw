#include<iostream>
using namespace std;
int main(){
// find sum of all elements of the array
    int array[4]={1,2,3,10};
    int sum = 0;
    for (int a = 0; a< 4 ; a++){
        sum= array[a] + sum ;
    }

    cout<<sum;






    return 0;
}