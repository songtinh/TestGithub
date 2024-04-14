#include "Arrays.h"

void input(int a[max], int& n) {
	for (int i = 1; i <= n; i++) {
		cout << "hay nhap phan tu thu " << i << " : ";
		cin >> a[i - 1];
	}
}

void output(int a[max], int n) {
	for (int i = 1; i <= n; i++) {
		cout << "phan tu thu " << i << " : " << a[i - 1] << endl;
	}
}

bool check_evennumber(int x) {
	if (x % 2 == 0) {
		return true;
	}
	else return false;
}

bool check_oodnumber(int y) {
	if (y % 2 == 1) {
		return true;
	}
	else return false;
}

bool check_array_is_evennumber(int a[max], int n) {
	for (int i = 1; i <= n; i++) {
		if (check_oodnumber(a[i - 1])) {
			return false;
			break;
		}
	}
	return true;
}

bool check_array_is_oodnumber(int a[max], int n) {
	for (int i = 1; i <= n; i++) {
		if (check_evennumber(a[i - 1])) {
			return false;
			break;
		}
	}
	return true;
}