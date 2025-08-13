#include<iostream>
using namespace std;

int binnarySearch(int arr[], int size, int key){

    int start = 0;
    int end = size-1;

        //(start + end)/2; chalaki
    int mid = start +(end-start)/2;

    while (start<=end){

        if (arr[mid] == key){
                return mid;
        }

        if (key > arr[mid]){
            start = mid + 1;
        }

        else{
            end = mid - 1; 
        }
        mid = start +(end-start)/2;
    }
    return -1; 
}

int main(){

    int even[6] = {2,4,6,8,10,18};
    int odd[5] = {1,3,5,7,17};

    int evenIndex = binnarySearch(even, 6, 10);

    cout << "Index of the key is:" << evenIndex << endl;

    int oddIndex = binnarySearch(odd, 5, 3);

    cout << "Index of the key is:" << oddIndex << endl;

 return 0; 
} 