// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int arr[100];
// 	    int number;
// 	    cin>>number;
// 	    int count=0;
// 	    for(int i=0;i<number;i++){
// 	        cin>>arr[i];
// 	    }
// 	    sort(arr,arr+number);
	    
// 	    for(int i=0;i<number;i++){
// 	        if(arr[i]!=arr[i+1])
// 	            count++;
// 	    }
// 	   cout<<count<<endl;
// 	}
// 	return 0;
// }
// CPP program to find the most frequent element
// in an array.
#include <bits/stdc++.h>
using namespace std;

int mostFrequent(int arr[], int n)
{
	// Insert all elements in hash.
	unordered_map<int, int> hash;
	for (int i = 0; i < n; i++)
		hash[arr[i]]++;

	// find the max frequency
	int max_count = 0, res = -1;
	for (auto i : hash) {
		if (max_count < i.second) {
			res = i.first;
			max_count = i.second;
		}
	}

	return res;
}

// driver program
int main()
{
	int t;
	cin>>t;
	while(t--){
	    int arr[100];
	    int n;
	    cin>>n;
	    int count=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
// 	cout << mostFrequent(arr, n)<<endl;
	int counter=0;
	for(int i=0;i<n;i++){
	    if( mostFrequent(arr,n) == arr[i] )
	        counter++;
	}
	cout<<n - counter<<endl;
	}
	return 0;
}
