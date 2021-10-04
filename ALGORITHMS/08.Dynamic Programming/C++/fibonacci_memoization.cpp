// @author : Akshat Jain
// github : akshatjai258

// nth Fibonacci number using dynamic programming - memoization (Top Down approach)
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;

int memo[N]; // an integer array used to memorize the fibonacci series terms

// Recursive function to calculate nth fibonacci number
int fib(int n) {

    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    // if this value is already calculated don't call function again

    if (memo[n] != -1) {
        return memo[n];
    }

    // if this value is not calculated find the value using recursion

    memo[n] = fib(n - 1) + fib(n - 2);
    return memo[n];
}


int main() {
    cout << "Enter the term which fibonacci number you want to get" << endl;
    int n; cin >> n;

    // mark every term not calculated (-1)

    memset(memo, -1, sizeof(memo));

    
    cout<<"Required Fibonacci number is"<<endl;

    cout << fib(n) << endl;

}

/*
  Time Complexity : O(n)
  Space Complexity : O(n)
*/