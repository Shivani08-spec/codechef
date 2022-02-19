https://www.codechef.com/LP1TO202/problems/CASH


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	std::cin >> t;
	while(t--){
	    long long n,k;
	    std::cin >> n>> k;
	    long long arr[n];
	    long long sum =0;
	    for(int i=0;i<n;i++){
	        std::cin >> arr[i];
	         sum = sum+arr[i];
	    }
	    
	   
	   
	    long long r = sum % k;
	    std::cout << r << std::endl;
	}
	return 0;
}
