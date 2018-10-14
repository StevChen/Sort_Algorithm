#include "funcDec.h"

void merge(vector<vector<int>>&v, int lmin, int lmax, int umin, int umax, int l) {
	vector<vector<int>> temp1;
	int a = lmin;
	int b = umin;
	while (a <= lmax && b <= umax){
		if (COMPVEC(v[a], v[b], l) == -1) {
			temp1.push_back(v[a++]);
		}
		else{
			temp1.push_back(v[b++]);
		}
	}

	while (a <= lmax) {
		temp1.push_back(v[a++]);
	}
	while (b <= umax) {
		temp1.push_back(v[b++]);
	}

	for (int i = 0; i < temp1.size(); i++) {
		v[lmin++] = temp1[i];
	}
}

void mergeSort(vector<vector<int>>&v, int lower, int upper, int l) {
	if (lower >= upper) {
		return;
	}
	int mid = (upper + lower) / 2;
	mergeSort(v, lower, mid, l);
	mergeSort(v, mid+1, upper, l);
	merge(v, lower, mid, mid+1, upper, l);
}

vector<vector<int>> mergeSort(vector<vector<int>> v, int l) {
	mergeSort(v, 0, v.size()-1, l);
	return v;
}