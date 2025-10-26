#include<iostream>
using namespace std;

int partition(int *arr, int s, int e){

    int pivot = arr[s];
    int cnt = 0;

    for(int i = s+1; i<=e; i++){
        if(arr[i] <= pivot){
            cnt++;  
        }
    }
    // pivot placement 
    int pivotIndex = s+ cnt; 
    swap(arr[pivotIndex], arr[s]);

    // left and right management 
    int i = s ,j =e;
    while(pivotIndex > i && pivotIndex < j){
        while (arr[i] < pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(pivotIndex > i && pivotIndex < j){
            swap(arr[i++],arr[j--]);
        } 
    } 
    return pivotIndex;
}

void quickSort(int *arr, int s, int e){
    // base case
    if(s>=e){
        return;
        cout << "already sorted" << endl;
    }
    // creating partition
    int p = partition(arr,s,e);

    // sorting left part
    quickSort(arr,s,p-1);

    // sorting right part
    quickSort(arr, p+1, e);  
}
int main(){
    int arr[5] = {4,1,8,3,5};
    int n =5;
    quickSort(arr,0,n-1);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0; 
} 