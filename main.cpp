#include<iostream>

using namespace std;

int main() {
	int r, c;
	cin >> r >> c;

	int rmap[r];
	int cmap[c];

	for (int i = 0; i < r; i++) rmap[i] = 1;
	for (int i = 0; i < c; i++) cmap[i] = 1;

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			char t;
			cin >> t;
			if (t == 'S') {
				rmap[i] = 0;
				cmap[j] = 0;
			}
		}
	}

	int rs = 0;
	for (int i = 0; i < r; i++)  rs += rmap[i];

	int cs = 0;
	for (int i = 0; i < c; i++) cs += cmap[i];

	cout << (rs * c) + (cs * (r - rs));
}
