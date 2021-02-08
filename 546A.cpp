#include <iostream>
using namespace std;
int k,n,w,sum=0;
int main(){
	cin>>k>>n>>w;
	for(int i=1;i<=w;i++){
		sum=sum+(i*k);
	}
	if(sum>n){
		cout<<sum-n;
	}
	else{
		cout<<0;
	}
}
