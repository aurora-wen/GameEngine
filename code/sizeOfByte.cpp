#include <iostream>
#include <climits>

int main() {
    using namespace std;
    int n_short = SHRT_MAX;
    int n_int = INT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    cout << "short size is: " << sizeof(n_short) << " byte."  << endl;
    cout << "int size is: " << sizeof(n_int) << " byte." << endl;
    cout << "long size is: " << sizeof(n_long) << " byte."  << endl;
    cout << "long long size is: " << sizeof(n_llong) << " byte."  << endl;

    cout << "int max is: " << n_int << endl;
    cout << "short max is: " << n_short << endl;
    cout << "long max is: " << n_long << endl;
    cout << "long long max is: " << n_llong << endl;

    return 0;
}

/*
short size is: 4 byte.
int size is: 4 byte.
long size is: 4 byte.
long long size is: 8 byte.
int max is: 2147483647
short max is: 32767
long max is: 2147483647
long long max is: 9223372036854775807
*/