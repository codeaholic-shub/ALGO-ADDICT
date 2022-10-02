/*
Author : Prathamesh Patil
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, i;
		cin >> n;
		string str;
		cin >> str;
		
		int count_z = 0, count_o = 0, count = 0;
		
		for(i = 0; i < n; i++)
		{
			if(str[i] == '0')
			{
				count_z ++;
			}
			else
			{
				count_o ++;
			}
		}
		
		if(count_o == 0 || count_z == 0)
		{
			cout << 1 << endl;
			continue;
		}
		
		for(i = 0; i < n;)
		{
			str[i++] = '1';
			//cout << "count_o : " << count_o << endl;
			count_o --;
			str[i++] = '0';
			//cout << "count_z : " << count_z << endl;
			count_z --;
			//cout << "count of i : " << i << endl;
			if(count_o == 0 && count_z == 0)
			{
				break;
			}
			if(count_o == 0 || count_z == 0)
			{
				i++;
				break;
			}
		}
		
		cout << i << endl;
	}
}
