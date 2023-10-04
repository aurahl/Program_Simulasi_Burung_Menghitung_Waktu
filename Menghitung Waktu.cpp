#include <bits/stdc++.h>
using namespace std;
// rumus waktu=2(v*sin(s))/10
int main()
{
	cout << "Masukkan sudut peluncuran: ";
	float v, s, waktu = 0, selisih;
	cin >> s;
	cout << "Masukkan kecepatan: ";
	float sinA = sin(s * 22 / 7 / 180);
	cin >> v;
	waktu = (2 * (v * sinA)) / 10;
	cout << "Waktu: ";
	cout << waktu;
}
