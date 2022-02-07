                               DAY1 
TWODISHES
https://www.codechef.com/LP1TO201/submit/TWODISH



#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	
	int g =0;
	std::cin >> T;
	for(int i =0;i<T;i++){
	    int N,A,B,C;
	    std::cin >> N >>A >>B >>C;
	    
	    
	    if(B>=N && A+C >=N)
	    std::cout << "YES" << std::endl;
	    
	    else
	    std::cout << "NO" << std::endl;
	    
	}
	return 0;
}
