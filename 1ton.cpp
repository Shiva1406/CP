//Print from 1 to n

#include <bits/stdc++.h>
using namespace std;

void printrev(int n, int i){
	if(i<=0){
		return ;
	}
	
	printrev(n,i-1);
	cout<<i<<endl;
}

int main(){
	int n;
	cin>>n;
	printrev(n,n);
	return 0;
}
