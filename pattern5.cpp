#include<bits/stdc++.h>
using namespace std;

void seeding(int n) {
	for(int i=1;i<=n;i++){
		for(int j=0;j<n-i+1;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}

int main(){
    int t;
    cin>>t;
    seeding(t);
    return 0;
}