DAY3

https://www.codechef.com/LP1TO201/submit/IMDB

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	std::cin >> t;
	while(t--){
	    int N,X;
	    std::cin >> N>> X;
	   
	    int S,R;
	    int max =0;
	    while(N--){
	        std::cin >> S>>R;
	        if(S<=X){
	            if(R>max)
	            max = R;
	            
	        }
	        
	       
	        
	    }
	    std::cout << max << std::endl;
	    
	    
	}
	return 0;
}
