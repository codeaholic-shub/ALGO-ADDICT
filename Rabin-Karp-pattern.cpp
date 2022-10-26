//Rabin-Karp pattern searching Algorithm

/*
Given a string S and a pattern P of lowercase characters. The task is to check if the pattern is present in string or not.

Example :

Input:
S = aabaacaadaabaaba
P = aaba
Output: Yes
Explanation: You can find the patter at
starting at index 12.

Expected Time Complexity: O(N + M).
Expected Auxiliary Space: O(1).
Note: N = |S|, M = |P|.

Constraints:
1 <= |S|, |P| <= 104
*/
#include<bits/stdc++.h>
using namespace std;

bool search(string, string, int);
#define d 256 
bool search(string pat, string txt, int q) 
{ 
	int n=txt.length(); int m=pat.length();
	
	int h=1;
	for(int i=0; i<m-1; i++){
	    h= (h*d)%q;
	}
	int p=0; int t=0;
	for(int i=0; i<m; i++){
	    p = ((p*d) + pat[i])%q;
	    t = ((t*d) + txt[i])%q;
	}
	
	for(int i=0; i<n-m+1; i++){
	    if(t==p){
	        int j=0;
	        for(; j<m; j++){
	            if(txt[i+j]!=pat[j]){
	                break;
	            }
	        }
	        if(j==m) return true;
	    }
	    t= (d*(t - h*txt[i]) + txt[i+m])%q;
	    if(t<0){
	        t=t+q;
	    }
	}
	return false;
} 
int main() 
{ 
    int t;
    cin >> t;
    
    while(t--){
	    string s, p;
	    cin >> s >> p;
	    int q = 101; // A prime number 
	    if(search(p, s, q)) cout << "Yes" << endl;
	    else cout << "No" << endl;
    }
	return 0; 
}
