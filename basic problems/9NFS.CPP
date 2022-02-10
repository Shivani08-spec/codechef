DAY-5

https://www.codechef.com/LP1TO201/submit/NFS


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	std::cin >> T;
	while(T--){
	    int u,v,a,s;
	    std::cin >> u >> v>> a>> s;
	     long long int vect = (u*u) -(2*a*s);
	     
	     if(sqrt(vect)>v)
	     std::cout << "No" << std::endl;
	     else
	     std::cout << "Yes" << std::endl;
	     
	     
	}
	return 0;
}
