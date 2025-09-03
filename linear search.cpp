//key is given and then values of array are compaired with it, this is linear search
#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){

    for (int  i = 0; i < size; i++)
    {
        if (arr[i] == key) 
        {
        return 1;
        }
        
    }
    return 0;
 }
 
int main(){

int arr[10]={1, 33, 5, 67, 4, -9, 7, 12, 4, 25};

    cout << "Enter the key you need to find in array:";
    int key; 
    cin >> key;

    bool found = search(arr, 10, key);

    if (found){
        cout <<"Key is present";
    }
    else{
        cout << "Key is absent";
        }
    return 0; 
}