#include <iostream>
using namespace std;
int a,b,count=0;
int main(){
	cin>>a>>b;
	while(a<=b){
		a=a*3;
		b=b*2;
		count++;
	}
	cout<<count;
}
