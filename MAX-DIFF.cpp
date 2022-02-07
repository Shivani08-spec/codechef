DAY4

https://www.codechef.com/LP1TO201/problems/MAX_DIFF


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	std::cin >> T;
	while(T--){
	    int N,S;
	    std::cin >> N>>S;
	    
	    if(S<=N){
	        std::cout << S << std::endl;
	    }
	    else
	    std::cout << 2*N-S << std::endl;
	}
	return 0;
}
