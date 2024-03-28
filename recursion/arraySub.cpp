#include <bits/stdc++.h>
using namespace std;




void printSubsequences(int arr[], int index, vector<int> &subarr,int n,int sum,int s)
{
	
	if (index == n)
	{
        if(s==sum){
		for (auto it:subarr){
		cout << it << " ";
		
		}
        cout<<endl;
        return;
        }
	// if(subarr.size()==0)
	// 	cout<<"{}";
	
	
	return;

		
	}
	else
	{

		subarr.push_back(arr[index]);
	
     sum+=arr[index];
		printSubsequences(arr, index + 1, subarr,n,sum,s);

		sum-=arr[index];
		subarr.pop_back();
        

        printSubsequences(arr, index + 1, subarr,n,sum,s);
		
	}
	
}

int main()
{
	int arr[]={1,2,1 };
	int n=sizeof(arr)/sizeof(arr[0]);
	vector<int> vec;
	int sum =2;

	printSubsequences(arr, 0, vec,n,0,sum);

	return 0;
}
