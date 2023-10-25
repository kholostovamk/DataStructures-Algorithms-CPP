#include <iostream>
#include <string>
#include <vector>

using namespace std;

template<typename T> 
bool isPalindrome(const vector<T>& vec) { //has to be const and reference
    int left = 0;
    int right = vec.size() - 1;

    while (left < right) {
        //if start and end is not equal then it's not a pallindrome
        if (vec[left] != vec[right]) {
            return false;
        }
        //increment left and right to check next values
        left++;
        right--;  // Corrected to decrement right pointer
    }
    return true;  // Added this line to return true if the loop completes without finding a mismatch
}

bool isNumber(const string& input) {
    for (char c : input) {
        if (!isdigit(c)) {
            return false;  // If any character is not a digit, return false
        }
    }
    return true;  // If all characters are digits, return true
}

int main() {
    string input;

    //checking a number
    cout << "Enter a number or a string" <<endl;
    cin >> input;

    if (isNumber(input)) {
        vector<int> numVec; //empty vector numVec
        //while number is not 0
        for (char c : input) {
            numVec.push_back(c - '0');  // Convert character to integer
        }

        if (isPalindrome(numVec)) {
            cout << "The number is a palindrome." << endl;
        } else {
            cout << "The number is not a palindrome." << endl;
        }
    } else {
        //coverts string into vector of characters
        vector<char> charVec(input.begin(), input.end());

        if (isPalindrome(charVec)) {
            cout << "The string is a palindrome." << endl;
        } else {
            cout << "The string is not a palindrome." << endl;
        }
    }
    return 0;
}