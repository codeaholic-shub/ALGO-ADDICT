//@author : Akshat Jain
// github : akshatjai258


//nth Fibonacci number using dynamic programming - Tabulation (Bottom up appraoch)
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;


int fib[N]; //fib[i] -> stores the ith fibonacci number

int main() {
    cout << "Enter the term which fibonacci number you want to get" << endl;
    int n; cin >> n;

    // Base Case
    fib[0] = 0;
    fib[1] = 1;


    // Calculating each fibonacci term in bottom up manner
    for (int i = 2; i <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    cout << fib[n] << endl;


}
/*
  Time Complexity : O(n)
  Space Complexity : O(n)
*/