#include <iostream>
using namespace std;
day2
https://www.codechef.com/LP1TO201/submit/PROBCAT

int main() {
	// your code goes here
	int T;
	std::cin >> T;
	while(T--){
	    int x;
	    std::cin >> x;
	     if(x>=1 &&x<100)
	       std::cout << "Easy" << std::endl;
	       else
	    if(x>=200 && x<=300)
	      std::cout << "Hard" << std::endl;
	    else
	     if(x>=100 && x<200)
	     std::cout << "Medium" << std::endl;
	     else
	      if(1<=x &&x<100)
	    std::cout << "Easy" << std::endl;
	}
	return 0;
}
