day-7
https://www.codechef.com/LP1TO201/submit/SMOL

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	std::cin >> T;
	
	while(T--){
	    int N,K;
	    std::cin >> N>> K ;
	   if(K==0)
	   std::cout << N << std::endl;
	  else
	      std::cout << N%K << std::endl;
	   
	}
	return 0;
}
