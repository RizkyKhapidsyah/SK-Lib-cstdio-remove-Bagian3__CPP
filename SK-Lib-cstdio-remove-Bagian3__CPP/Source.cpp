#include <iostream>
#include <cstdio>
#include <conio.h>

/*
	Source by Programiz
	Modified For Learn by RK
	I.D.E : VS2019
*/

using namespace std;

int main() {
	char filename[] = "program.cpp";

	// remove the file "program.cpp"
	int hasil = remove(filename);
	cout << hasil;

	_getch();
	return 0;
}