                 DAY1
CHFRICH

https://www.codechef.com/LP1TO201/submit/CHFRICH


#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int T;
	std::cin >> T;
	while(T--){
	    int A,B,x;
	    std::cin >> A >>B >>x;
	    
	    int g = B-A;
	    int y = ceil(g/x);
	    std::cout << y << std::endl;
	}
	return 0;
}
