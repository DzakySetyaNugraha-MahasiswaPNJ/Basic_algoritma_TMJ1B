#include <iostream>
using namespace std;

//Nama	: Dzaky Setya Nugraha (2407421047)
//Kelas	: TMJ 1B

int main() {
	float nilai;

	cout << "Masukkan Angka 1-100 : ";
	cin >> nilai;
	cout << "" << endl;

	if (nilai >= 81 && nilai <= 100)
	{
		cout << "Huruf Mutu : A" << endl;
		cout << "Sebutan Mutu : Sangat Istimewa" << endl;
		cout << "Angka Mutu : 4" << endl;
	}
	else if (nilai >= 76 && nilai < 81)
	{
		cout << "Huruf Mutu : A-" << endl;
		cout << "Sebutan Mutu : Istimewa" << endl;
		cout << "Angka Mutu : 3,7" << endl;
	}
	else if (nilai >= 72 && nilai < 76)
	{
		cout << "Huruf Mutu : B+" << endl;
		cout << "Sebutan Mutu : Lebih dari Baik" << endl;
		cout << "Angka Mutu : 3,3" << endl;
	}
	else if (nilai >= 68 && nilai < 72)
	{
		cout << "Huruf Mutu : B" << endl;
		cout << "Sebutan Mutu : Baik" << endl;
		cout << "Angka Mutu : 3" << endl;
	}
	else if (nilai >= 64 && nilai < 68)
	{
		cout << "Huruf Mutu : B-" << endl;
		cout << "Sebutan Mutu : Cukup Baik" << endl;
		cout << "Angka Mutu : 2,7" << endl;
	}
	else if (nilai >= 60 && nilai < 64)
	{
		cout << "Huruf Mutu : C+" << endl;
		cout << "Sebutan Mutu : Lebih dari Cukup " << endl;
		cout << "Angka Mutu : 2,3" << endl;
	}
	else if (nilai >= 56 && nilai < 60)
	{
		cout << "Huruf Mutu : C" << endl;
		cout << "Sebutan Mutu : Cukup" << endl;
		cout << "Angka Mutu : 2" << endl;
	}
	else if (nilai >= 41 && nilai < 56)
	{
		cout << "Huruf Mutu : D" << endl;
		cout << "Sebutan Mutu : Kurang" << endl;
		cout << "Angka Mutu : 1" << endl;
	}
	else if (nilai >= 0 && nilai < 41)
	{
		cout << "Huruf Mutu : E" << endl;
		cout << "Sebutan Mutu : Gagal" << endl;
		cout << "Angka Mutu : 0" << endl;
	}
	else 
	{
		cout << "Format Nilai Salah";
	}
}
