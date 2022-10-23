#include <iostream>;
using namespace std;

int main () {
	int panjang,lebar,luas,kel;
	
	cout<<"=========Program Menghitung Luas dan Keliling Persegi=======\n";
	
	cout<<"Masukan Panjang:";
	cin>>panjang;
	cout<<"Masukan Lebar:";
	cin>>lebar;
	
	luas=panjang*lebar;
	kel=(2*panjang)+(2*lebar);
	
	cout<<"Luas Persegi adalah "<<luas<<endl;
	cout<<"Keliling persegi adalah "<<kel<<endl;
	
}
