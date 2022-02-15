#include <iostream>
https://www.codechef.com/LP1TO202/problems/MAKEEQUAL
--------------------------------------------------------------------------


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	std::cin >> t;
	while(t--){
	    int N;
	    std::cin >> N;
	    int arr[N];
	    int Max = INT_MIN;
	    int Min = INT_MAX;
	    
	    for(int i =0;i<N;i++){
	        std::cin >> arr[i];
	        Min = min(Min,arr[i]);
	        Max = max(Max,arr[i]);
	    }
	    std::cout << Max-Min << std::endl;
	}
	return 0;
}