day3
https://www.codechef.com/LP1TO201/submit/CSTOCK


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	std::cin >> T;
	while(T--){
	    int S,A,B,C;
	    std::cin >> S >> A>> B>> C;
	    double roc = S;
	   roc += (C*roc)/100;
	    
	    
	   
	    
	    if(roc>=A && roc<=B){
	        std::cout << "Yes" << std::endl;
	    }
	    else
	    std::cout << "No" << std::endl;
	    
	}
	return 0;
}
