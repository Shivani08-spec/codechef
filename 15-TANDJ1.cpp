DAY-5

https://www.codechef.com/LP1TO201/problems/TANDJ1


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int  T;
	std::cin >> T;
	while(T--){
	    int a,b,c,d,k;
	    std::cin >> a>> b>> c>> d>> k;
	    int min = abs(c-a)+abs(d-b);
	    if(k==min)
	    std::cout << "Yes" << std::endl;
	    else if(min>k)
	    std::cout << "No" << std::endl;
	    else if((k-min)%2==0)
	    std::cout << "Yes" << std::endl;
	    else
	    std::cout << "No" << std::endl;
	    
	}
	return 0;
}
