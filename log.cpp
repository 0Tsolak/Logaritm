#include <iostream>
#include <cmath>
using namespace std;


int main(){
int chs;
double long a;
double long b;
cout << "enter precision\n"; cin >> chs;
cout << "enter a\n"; cin>> a;
cout << "enter b\n"; cin >> b;

for(int i = 0; i < chs; i++){
	int sum = 0;
	while(a >= b){

		a /= b;
		sum++;
		} 
	if(i == 0) 
		cout << sum << ",";
	else
		cout << sum;
	a = pow(a,10);
	}

}
