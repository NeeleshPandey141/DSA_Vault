#include<iostream>
#include<climits>
using namespace std;

bool ispresent(int arr[][3],int number){
    for(int i=0;i<3;i++){
        for (int j = 0; j < 3; j++){
            if(arr[i][j] == number){
                return 1;
            }
        }  
    }
    return 0;
}

void printSum(int arr[][3]){ 
    for(int i=0; i<3; i++){
         int sum = 0;
        for(int j=0; j<3; j++){
            sum += arr[i][j];
        }
        cout << sum << " "; 
    }
}

int largestrowSum(int arr[][3]){
    int maxi = INT_MIN;
    int rowIndex = -1;

    for(int i=0; i<3; i++){
         int sum = 0;
        for(int j=0; j<3; j++){
            sum += arr[i][j];
        }
        if (sum> maxi){
            maxi = sum;
            rowIndex = i;
        }  
    }

    for(int i=0; i<3; i++){
        int sum = 0;
        for(int j=0; j<3; j++){
            sum += arr[i][j];
        }
        cout << sum << " "; 
    }  
    return rowIndex;
}

int main (){
    int arr [3][3];

    cout << "Enter elements " << endl;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> arr[i][j];
        }
    }

    cout << "printing the array" << endl;

    for(int i=0;i<3;i++){
        for (int j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }  
        cout << endl; 
    }
/*
    cout << "Enter the number you want to search ";
    int number;
    cin >> number;

    if (ispresent(arr,number)){
        cout << "number found";
    }
    else{
        cout << "Number not found";
    }
    cout << endl;

    cout << "col wise sum" << " ";
    printSum(arr);
*/
   int ansIndex = largestrowSum(arr);
   cout << "max row sum index: " << ansIndex << endl;
    return 0;
}