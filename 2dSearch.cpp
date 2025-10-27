#include<iostream>
using namespace std;

bool ispresent(int arr[][4],int number){
    for(int i=0;i<3;i++){
        for (int j = 0; j < 4; j++){
            if(arr[i][j] == number){
                return 1;
            }
        }  
    }
    return 0;
}

int main (){
    int arr [3][4];

     cout << "Enter elements " << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin >> arr[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for (int j = 0; j < 4; j++){
            cout << arr[i][j] << " ";
        }  
        cout << endl; 
    }
    cout << "Enter the number you want to search ";
    int number;
    cin >> number;

    if (ispresent(arr,number)){
        cout << "number found";
    }
    else{
        cout << "Number not found";
    }
    return 0;
}