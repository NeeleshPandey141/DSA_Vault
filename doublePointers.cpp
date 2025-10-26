#include<iostream>
using namespace std;

void update (int **p2){
    // anything changed - NO
    // p2 = p2 + 1;
    // anything changed - YES
    // *p2 = *p2 + 1;
    // anything changed -YES
    **p2 = **p2 + 1; 
}

int main(){
    
    int i = 5;
    int *p = &i;
    int **p2 = &p;
/*
    cout << "ptr" << endl;
    cout << ptr << endl;
    cout << *ptr << endl;
    cout << &ptr << endl;

    cout<< endl << endl;

    cout <<"ptr2" <<endl;
    cout<< ptr2 << endl;
    cout << *ptr2 << endl;
    cout << &ptr2 << endl;

    cout<< endl << endl;

    cout << "i" << endl;
    cout << i << endl;
    cout << &i << endl;
    */
   cout << i << endl;
   cout << p << endl;
   cout << p2 << endl;

   cout<< endl;

   cout << "after" << endl;

   update(p2);

   cout << i << endl;
   cout << p << endl;
   cout << p2 << endl;
}