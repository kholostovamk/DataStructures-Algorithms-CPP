/*Write a program that uses pointers to set ten elements in an array of ints to zero.*/


#include <iostream>
using namespace std;

int arr[10] = {1, 2,3,4,5,6,7,8,9,10};
int arrLength = sizeof(arr) / sizeof(int);

int *arrptr = arr;

int main () {



    //change numbers in array for 0s
    for (int i=0; i < arrLength; i++) {
    *(arrptr+i)= 0;
    }

    //check if it was actually changed
    cout << "New array: ";
    for (int j =0; j <arrLength; j++) {
        cout<< arr[j] << " ";
    }

    return 0;
}