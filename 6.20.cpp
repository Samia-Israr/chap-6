#include<iostream>
using namespace std;
factor(int c, int d){
	if(d%c==0){
		cout<<"True"<<endl;
	}
	else{
		cout<<"False";
	}
}

int main(){
	int a,b;
	cout<<"Enter a number:"<<endl;
	cin>>a;
	cout<<"Enter a number:"<<endl;
	cin>>b;
	factor(a,b);
}
	
