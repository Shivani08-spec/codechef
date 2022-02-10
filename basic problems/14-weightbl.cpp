day2

https://www.codechef.com/LP1TO201/submit/WEIGHTBL

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	std::cin >> T;
	while(T--){
	    int w1,w2,x1,x2,M;
	    std::cin >> w1 >> w2>> x1 >>x2 >>M;
	        int change = w2-w1;
	        int min = M*x1;
	        int max = M*x2;
	        if(change>=min && change<=max)
	        std::cout << "1" << std::endl;
	        else
	        std::cout << "0" << std::endl;
	}
	return 0;
}
