#include <bits/stdc++.h>
using namespace std;

int sumup(int n){
	if(n<=0){
		return n;
	}
	return n + sumup(n-1);
}

int main(){
	int n;
	cin>>n;
	cout<<sumup(n)<<endl;
	return 0;
}
