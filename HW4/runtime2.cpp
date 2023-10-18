#include <iostream>
#include <chrono>
#include <vector>
using namespace std;


int main() {
    vector<int> n_values = {10, 100,500,750, 1000,5000,7500,10000};

    for (int n: n_values) {
    int sum = 0;

    auto start = chrono::high_resolution_clock::now();

    sum = 0;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            ++sum;
    

    auto stop = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::nanoseconds>(stop - start);

    cout << "For n = " << n << ", Time taken: " << duration.count() << " nanoseconds" << endl;}
    return 0;
}

/*
OUTPUT:
For n = 10, Time taken: 0 microseconds
For n = 100, Time taken: 8 microseconds
For n = 500, Time taken: 186 microseconds
For n = 750, Time taken: 582 microseconds
For n = 1000, Time taken: 737 microseconds
For n = 5000, Time taken: 18916 microseconds
For n = 7500, Time taken: 42005 microseconds
For n = 10000, Time taken: 75588 microseconds
*/