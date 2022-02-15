https://www.codechef.com/LP1TO202/problems/SUBTASK

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	std::cin >> t;
	while(t--){
	    int n,m,k;
	    std::cin >> n>> m>> k;
	    int arr[n];
	    int count = 0;
	    for(int i =0;i<n;i++){
	        std::cin >> arr[i];
	       
	    }
	    for(int i=0;i<n;i++){
	        if(arr[i]==1){
	        count++;
	        } 
	        else
	        {
	        if(count >= m)
	        std::cout << k << std::endl;
	        else
	        std::cout << "0" << std::endl;
	        break;
	        }
	        }
	   if(count == n)
	   std::cout << "100" << std::endl;
	    
	}
	return 0;
}
