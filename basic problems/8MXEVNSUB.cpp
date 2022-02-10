day3
https://www.codechef.com/LP1TO201/problems/MXEVNSUB


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	std::cin >> T;
	while(T--){
	    int N;
	    std::cin >> N;
	    
	    
	   int sum = N*(N+1)/2;
	    
	    if(sum%2 ==0)
	    std::cout << N << std::endl;
	    else
	        std::cout << N-1 << std::endl;
	    
	}
	return 0;
}
