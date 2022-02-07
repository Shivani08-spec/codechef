DAY3
https://www.codechef.com/LP1TO201/submit/VDATES


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	std::cin >> T;
	while(T--){
	    int D,L,R;
	    std::cin >> D >>L >>R;
	    if(D<L){
	        std::cout << "Too Early" << std::endl;
	        
	    }
	    else if(D>R){
	        std::cout << "Too Late" << std::endl;
	    }
	    
	    else if(L<=D || D<=R){
	    
	    std::cout << "Take second dose now" << std::endl;
	    }
	    else{
	        std::cout << "Invalid" << std::endl;
	    }
	}
	return 0;
}
