#include<iostream>
using namespace std;
int main(){
    int arr[5] = {10, 25, 5, 30, 15};
    int size= 5;
    int largest= arr[0];

    for(int i=1; i < size; i++){
        if(arr[i] > largest){
            largest=arr[i];
        }


    }
    cout << "The largest element is: " << largest << endl;
    return 0;
}