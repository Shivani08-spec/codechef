DAY3
https://www.codechef.com/LP1TO201/submit/CHFSPL

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
	
	int T;
	std::cin >> T;
	while(T--){
	 
	    
	    int arr[3];
	    
	    for(int i =0;i<3;i++){
	        std::cin >> arr[i];
	        
	    }
	    
	    
	    sort(arr,arr+3);
	    
	    
	   std::cout <<arr[1]+arr[2] << std::endl; 
	    
	}
	
	
	return 0;
}
