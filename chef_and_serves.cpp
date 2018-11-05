#include<iostream>

using namespace std;

int main(void){

	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		int p1=0, p2=0, k=0;
		cin >> p1 >> p2 >> k;

		if(int((p1 + p2)/k)%2 == 0)
			cout << "CHEF\n";
		else
			cout << "COOK\n";
	}
	return 0;
}