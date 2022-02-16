https://www.codechef.com/LP1TO202/problems/BALLOON


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	std::cin >> t;
	while(t--){
	    int n;
	    std::cin >> n;
	    int arr[n];
	    for(int i =0;i<n;i++){
	       std::cin >>arr[i];
	    }
	    int a = n;
	    int count =0;
	    while(a--){
	        if(arr[a]>7){
	            count++;
	        }
	        else
	           break;
	    }
	   std::cout << n-count << std::endl;
	   
	}
	return 0;
}