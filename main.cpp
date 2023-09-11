#include <iostream>

using namespace std;

int main(){

cout << "\nWelcome to Angelo's Monday, September 11th Pointer Practice!\n" << endl;


char SomeString[] = "Hello!";

char* pSomeString = SomeString;

// cout << "pSomeString = " << (void*)pSomeString << endl;
cout << "pSomeString = " << pSomeString << endl;

char* pLocation3 = &SomeString[3];
char* pLocation0 = &SomeString[0];

cout << "pLocation3 = " << (int)pLocation3 << endl;
cout << "pLocation0 = " << (int)pLocation0 << endl;





int SomeArray[10] = { 3, 6, 9, 12, 15, 18, 21, 24, 27, 30 };

int* pLocation0 = &SomeArray[0];

for ( int i = 0; i < 10; i++){
    // cout << SomeArray + i << " = " << *(SomeArray + i) << endl;

    cout << pLocation0 << " = " << *pLocation0 << endl;
    pLocation0++;
}


return 0;
}
