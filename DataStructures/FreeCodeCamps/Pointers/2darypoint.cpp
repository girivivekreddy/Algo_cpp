#include <iostream>
using namespace std;

void INC(int *arr, int size){
    for(int i = 0; i < size; i++){
        *(arr + i) += 1; // Increment each element by 1
    }
}

int main(){
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    cout << "Original Array:" << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    INC(*arr, 9); // Pass the pointer to the first element of the array and the total number of elements

    cout << "Array after INC function:" << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}
