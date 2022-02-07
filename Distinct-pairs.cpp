Day1
https://www.codechef.com/LP1TO201/problems/MANYSUMS

#include <iostream>


using namespace std;

int main() {
	// your code goes here
	int T;
	std::cin >> T;
	while(T--){
	    int L,R;
	    std::cin >> L >>R;
	    
	   
	    
	    int min = L+L;
	    int max = R+R;
	    
	    int a = max- min +1;
	    
	    
	    std::cout << a << std::endl;
	    
	}
	return 0;
}
