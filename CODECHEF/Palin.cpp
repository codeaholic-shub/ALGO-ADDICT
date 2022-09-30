// Codechef - PALIN - Find next smallest palindrome number
// Link - https://www.codechef.com/problems/PALIN

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

	int t;				// Number of Testcases
	cin>>t;
	while(t--) {
    	string s;		// Taking input number as string as it can be large
    	cin>>s;

    	// Adding 1 to number from where we start finding next palindrome as current number can be palindrome as well
    	int l=0,r=s.size()-1;
	    bool carry = 1;
	    while(r>=0 and carry) {
	        s[r]++;
	        if(s[r]>'9') s[r]='0',r--;
	        else carry=0;
	    }
	    if(carry) s.insert(s.begin(),'1');

	    // Finding next Palindrome
	    r = s.size()-1;
	    while(l<r) {
	    	// If right side is smaller we simply increase it else we equate it top left side and then add 1 to left of right pointer
	        if(s[l] >= s[r]) {
	            s[r] = s[l];
	            l++,r--;
	        }
	        else {
	            s[r] = s[l];
	            s[r-1]++;
	            int j = r-1;
	            while(j>0) {
	                if(s[j]>'9') s[j]='0',j--,s[j]++;
	                else break;
	            }
	        }
	    }

	    // Printing Next Palindrome Number
    	cout<<s<<"\n";
	}
	return 0;
}

