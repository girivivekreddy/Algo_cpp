/*Write a pseudo-code description of a method for finding the smallest and
largest numbers in an array of integers and compare that to a C++ function
that would do the same thing.*/

#include <iostream>
using namespace std;

void func(int*,int*,int*);

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int min = arr[0];
    int max = arr[0];

    func(arr,&min,&max);
    cout<<"min: "<<min<<"\nmax: "<<max<<endl;
    return 0;
}

void func(int* arr,int* min,int* max){
    for(int i=0;i<7;i++){
        if(arr[i]<*min){
            *min = arr[i];
        }
        if(arr[i]>*max){
            *max=arr[i];
        }
    }
}