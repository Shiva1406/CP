//n to 1

#include <bits/stdc++.h>
using namespace std;

void printrev(int n, int i){
	if(i>n){
		return;
	}
	printrev(n,i+1);
	cout<<i<<endl;
}


int main(){
	int n;
	cin>>n;
	printrev(n,0);	
	return 0;
}
