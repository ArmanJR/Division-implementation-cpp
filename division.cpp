#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
	double a,q,x,x1,sum=0.0;
	cout<<"Calculationg a/x"<<endl<<"Enter a:"<<endl;
	cin>>a;
	cout<<"Enter x:"<<endl;
	cin>>x;
	if(x == 1.0){
		cout<<a;
		return 0;
	}
	while(x > 1){
		a /= 10;
		x /= 10;
	}
	q = 1-x;
	for(int i=0;i<100000;i++){
		sum += a;
		a = a*q;
	}
	cout<<sum;
	return 0;
	}
