#include <iostream>
#include <chrono>
#include <vector>
using namespace std;


int main() {
    vector<int> n_values = {50, 75, 100, 500,750, 1000, 1500, 2000,2500};

    for (int n: n_values) {
    int sum = 0;

    auto start = chrono::high_resolution_clock::now();

    sum = 0;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n * n; ++j)
            ++sum;
    

    auto stop = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::nanoseconds>(stop - start);

    cout << "For n = " << n << ", Time taken: " << duration.count() << " nanoseconds" << endl;}
    return 0;
}

/*
OUTPUT:
For n = 50, Time taken: 111117 nanoseconds
For n = 75, Time taken: 469304 nanoseconds
For n = 100, Time taken: 786826 nanoseconds
For n = 500, Time taken: 99303913 nanoseconds
For n = 750, Time taken: 342196297 nanoseconds
For n = 1000, Time taken: 780907709 nanoseconds
For n = 1500, Time taken: 2657362204 nanoseconds
For n = 2000, Time taken: 6300194701 nanoseconds
For n = 2500, Time taken: 12297712973 nanoseconds
*/