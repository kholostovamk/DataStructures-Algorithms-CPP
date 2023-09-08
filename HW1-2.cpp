#include <iostream>
using namespace std;

int compute_sum(int &n){
int sum =0;
for(;n>0; --n)
sum+=n;
return sum;
}

int main()
{
int n = 3;
// refVal refers to the n
// I called the compute_sum by the reference
// value and verified it's still provides the same output
int &refVal = n;
int sum;
cout << n << endl;
sum = compute_sum(refVal);
cout << refVal << endl;
cout << sum << endl;
}

//if we pass n by value then result will be 3 3 6; value of n stays the same because we are using copy of n in function
//if we pass n by reference then result is 3 0 6; value of n will be changed