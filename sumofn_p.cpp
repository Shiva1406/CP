#include <bits/stdc++.h>
using namespace std;

void sumup(int n, int sum){
	if(n<=0){
		cout<<sum<<endl;
		return;
	}
	sumup(n-1,sum+n);
}

int main(){
	int n;
	cin>>n;
	sumup(n,0);	
	return 0;
}
