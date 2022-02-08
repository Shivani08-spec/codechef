                       PROGLANG
DAY1
https://www.codechef.com/LP1TO201/submit/PROGLANG

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
    std::cin >> T;
    while(T--){
        int A,B,A1,B1,A2,B2;
        std::cin >>A >>B >>A1 >>B1 >>A2 >>B2;
        
        if(A == A1 && B == B1 || A==B1 && B==A1 )
        std::cout << "1" << std::endl;
        else if(A == A2 && B == B2 || A==B2 && B==A2 )
        std::cout << "2" << std::endl;
        else
        std::cout << "0" << std::endl;
    }
	return 0;
}
