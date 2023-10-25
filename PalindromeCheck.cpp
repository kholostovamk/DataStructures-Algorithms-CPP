#include <iostream>
#include <string>
#include <vector>

using namespace std;


template<typename T> 
bool isPalindrome (const vector<T>& vector) { //has to be const and reference
    int left = 0;
    int right = vector.getsize() - 1;

    while (left <right) {
        //if start and end is not equal then it's not a pallindrome
         if(vector[left] <vector[right]) {
            return false;
         }      
    
    //increment left and right to check next values
    left++;
    right++;
    
    }


}

int main() {

//initialize two pointers
int number;
string str;

//checking a number
cout << "Enter a number: " <<endl;
cin >> number;

//convert int into vector out of separate digits

vector<int> numVec; //empty vector numVec
//while number is not 0
while (number) {
    numVec.insert(numVec.begin(), number%10); //at the start of vector inserting last digit
    number/10;//making sure last number doesn't stay
}


if (isPalindrome(numVec)) {
    cout << "The number is a palindrome." << endl;
    } else {
    cout << "The number is not a palindrome." << endl;
    }


    // For vector of chars:
    string str;
    cout << "Enter a string: ";
    cin >> str;


    //coverts string into vector of characters
    vector<char> charVec(str.begin(), str.end());
    
    if (isPalindrome(charVec)) {
        std::cout << "The string is a palindrome." << std::endl;
    } else {
        std::cout << "The string is not a palindrome." << std::endl;
    }

    return 0;


}
