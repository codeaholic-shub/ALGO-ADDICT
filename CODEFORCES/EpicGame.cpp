#include <iostream>

/*
    Problem: 119A. Epic Game
    https://codeforces.com/problemset/problem/119/A
*/

using namespace std;

int gcd(int a, int b) {
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

int main () {

    int a, b, n, won = 0, change = 0;
    cin >> a >> b >> n;

    while(true) {
        // simon starts, change is going to be 0 for simon and 1 for Antisimon
        int tt = gcd(!change ? a : b, n);
        if (n >= tt) {
            won = change;
            n-=tt;
        } else {
            break;
        }
        // change between them
        change = !change;
    }

    cout << won << endl;
    return 0;
}
