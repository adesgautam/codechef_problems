#include<iostream>
#include <math.h>

using namespace std;

int main(void){

	int t;
	cin >> t;
	for(int i=0; i<t; i++){
		int x=0;
		cin >> x;

		if(x==0){
			cout<<1<<" "<<0<<" "<<0<<"\n";
			return 0;
		}

		int t = x%26;
		if(t==0)
			x=x-1;
		double q = pow(2, x/26);

		if(t==1 || t==2)
			cout<<q<<" "<<0<<" "<<0<<"\n";
		else if(t>2 && t<11)
			cout<<0<<" "<<q<<" "<<0<<"\n";
		else
			cout<<0<<" "<<0<<" "<<q<<"\n";	
	}

	return 0;
}