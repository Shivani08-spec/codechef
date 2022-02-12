https://www.codechef.com/LP1TO202/problems/IPCCERT#include <iostream>

using namespace std;

int main() {
	// your code goes here
	int n,m,k;
	std::cin >> n>> m>> k;
	int arr[n][k+1];
	int arr1[k];
	
	    int sum=0,count=0,i,j;
	for(i=0;i<n;i++)
	{
	    for(j=0;j<k+1;j++)
	    {
	        cin>>arr[i][j];
	    }
	}
	for(i=0;i<n;i++)
	{
	    sum=0;
	    for(j=0;j<k;j++)
	    {
	        sum+=arr[i][j];
	       
	    }
	    if(sum>=m && arr[i][k]<=10)
	    count++;
	}
	cout<<count<<endl;
	    
	    
	
	return 0;
}
