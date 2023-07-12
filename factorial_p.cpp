#include <bits/stdc++.h>
using namespace std;

void fact(int n, int i){
	if(n<=0){
		cout<<i<<endl;
		return ;
	}
	
	fact(n-1,i*n);
}

int main(){
	int n;
	cin>>n;
	fact(n,1);
	return 0;
}
