#include "funcDec.h"

int randomPivot(unsigned int l, unsigned int r) {
	int t = l + rand() % (r - l + 1);
	return t;
}

int partition(vector<vector<int>>&v, int left, int right) {
	int random = randomPivot(left, right);
	swap(v[random], v[right]);


	vector<int> pivot = v[right];

	int l = pivot.size();
	int i = (left - 1);

	for (int j = left; j <= right - 1; j++) {
		if (!(COMPVEC(pivot, v[j], l) == -1)) {
			i++;
			swap(v[i], v[j]);
		}
	}
	
	swap(v[i + 1], v[right]);
	return i+1;
}

void quickSort(vector<vector<int>>&v, int left, int right) {
	if (right < left) {
		return;
	}
	int i = partition(v, left, right);
	quickSort(v, left, i-1);
	quickSort(v, i+1, right);
}

vector<vector<int>> quickSort(vector<vector<int>>v, int l) {
	quickSort(v, 0, v.size() - 1);
	return v;
}