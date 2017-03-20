#include <iostream>
using namespace std;
//contoh parameter

//prototype
int tambahkan(int a, int b);

//program utama
int main (){
	cout << "hasil : " << tambahkan (5, 6) << endl;
	return 0;
	}
	
	int tambahkan (int a, int b) {
	 return a + b;
	}