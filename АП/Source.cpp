// Lab_02.cpp
// < ó���� ����� >
// ����������� ������ � 2.1
// ˳��� ��������.
// ������ 4
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double z1; // ��������� ���������� 1-�� ������
	// double z2; // ��������� ���������� 2-�� ������

	cout << "x = "; cin >> x;

	z1 = (sin(x) + sin(5 * x) - sin(3 * x)) / (cos(x) - cos(3 * x) + cos(5 * x));
	// z2 = tan(3 * x) ;

	cout << endl;
	cout << "z1 = " << z1 << endl;
	// cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}

