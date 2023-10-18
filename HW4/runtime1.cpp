#include <iostream>
#include <chrono>
#include <vector>
using namespace std;


int main() {
    vector<int> n_values = { 10, 100,1000,10000,100000, 10000000};

    for (int n: n_values) {
    int sum = 0;

    auto start = chrono::high_resolution_clock::now();

    sum = 0;
        for (int i = 0; i < n; ++i)
            ++sum;
    

    auto stop = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::nanoseconds>(stop - start);

    cout << "For n = " << n << ", Time taken: " << duration.count() << " nanoseconds" << endl;}
    return 0;
}

/*
Output:
For n = 10, Time taken: 140 nanoseconds
For n = 100, Time taken: 170 nanoseconds
For n = 1000, Time taken: 1082 nanoseconds
For n = 10000, Time taken: 9578 nanoseconds
For n = 100000, Time taken: 81242 nanoseconds
For n = 10000000, Time taken: 8338857 nanoseconds
*/