#include<iostream>
using namespace std;
int main(){

    int array[] = { 1,2,3,4,7,6};
    int size = sizeof (array) / sizeof (array[0]);

    // for each loop = sare elements ko print karega
    // for (int ele:array){
    //     cout<<ele<<endl;
    // }


    // while loop
    int index = 0;
    while(index < size){
        cout<<array[index]<<endl;
        index++;
    }

    




    return 0;
}