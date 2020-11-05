#include <iostream>
#include <stdio.h> 
#include <bitset>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int a ,b;
	cout << "podaj a "<< endl;
	cin >> a;
	cout << "podaj b "<< endl;
	cin >> b;

		cout << bitset<8>(a|b).to_string()<<endl;
	
		cout<< bitset<8>(a^b).to_string()<<endl;
	
		cout<< bitset<8>(a&b).to_string()<<endl;
		
		cout<< bitset<8>(a <<= b).to_string()<<endl;
		cout<< bitset<8>(a >>= b).to_string()<<endl;
	
	return 0;
}
