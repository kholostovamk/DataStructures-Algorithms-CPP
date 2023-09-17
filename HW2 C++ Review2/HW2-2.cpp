/* Write a program to first prompt and read the number of integers to store in
an array. Allocate an array of that size dynamically. Read the integers from
the standard input and store them in the array. Display the array. */

#include <iostream>
using namespace std;

int numCount;

int main() {
    
    //prompt
    cout << "How many number do you want to store in array?" << endl;
    cin>> numCount;

    //dynamically allocate array with that size
    int *arr = new int[numCount];

    //get numbers for array
    cout << "Enter number for an array: "<<endl;
    for (int count = 0; count < numCount; count++) {
        cout << "Number" << (count +1) << ":";
        cin >>arr[count];
    }

    //display the array
    cout << "Here is your array: ";
    for (int i = 0; i < numCount; i++) {
        cout << arr[i] << " ";
    }

    //delete allocated memory
    delete [] arr;

    return 0;
}