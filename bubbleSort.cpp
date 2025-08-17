//optimised code
// time complexity O(n)
#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    for(int i = 0; i < n-1; i++){
        bool swapped = false;
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }    swapped = true;
        }
        if(swapped == false){
            break;
        }
    }
}
// time complexity is O(n^2)

/*#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n){   
    for(int i = 1; i < n; i++){
        for(int j = 0; j < n-i; j++){     //if i =0 then j <n-i-1 
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }    
        }
    }
}*/
