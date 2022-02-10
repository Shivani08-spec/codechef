day-7
https://www.codechef.com/LP1TO202/submit/VACCINQ


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	std::cin >> t;
	while(t--){
	    int n,p,x,y;
	    std::cin >> n>> p>> x>> y;
	    
	     int arr[n];
	     for(int i = 0;i<n;i++){
	         std::cin >> arr[i];
	     }
	     int sum = 0;
	     for(int i =0;i<p;i++){
	         if(arr[i]==0)
	         sum = sum+x;
	         else
	         sum = sum+y;
	     }
	     std::cout << sum << std::endl;
	     
	}
	return 0;
}