#include "funcDec.h"

void printVector(vector<int> v) {
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << ", ";
	}
	cout << endl;
}

void printVectorList(vector<vector<int>> v) {
	for (int i = 0; i < v.size(); i++) {
		printVector(v[i]);
	}
}


vector<vector<int>> vectorListGenerator(int n, int lower, int upper, int l) {
	//n length of vector list;
	//s lower bound
	//l upper bound
	//l length of each vector;

	vector<vector<int>> vecList;
	for (int i = 0; i < n; i++) {
		vecList.push_back(vecGenerator(lower, upper, l));
	}
	return vecList;
}

vector<int> vecGenerator(int s, int l, int size) {
	vector<int> v;
	for (int i = 0; i < size; i++) {
		v.push_back(numGenerator(s, l));
	}
	return v;
}

int numGenerator(int s, int l) {
	int r = s + rand() % (l - s + 1);
	return r;
}

void randSeed() {
	srand(time(NULL));
}


void swap(vector<int>& a, vector<int>& b) {
	vector<int> t = a;
	a = b;
	b = t;
}

double getMergeTime(vector<vector<int>>&vecList, int l) {

	clock_t start = clock();
	vecList = mergeSort(vecList, l);
	clock_t end = clock();
	return (double)(end - start) / CLOCKS_PER_SEC;
}

double getQuickTime(vector<vector<int>>&vecList, int l) {

	clock_t start = clock();
	vecList = quickSort(vecList, l);
	clock_t end = clock();
	return (double)(end - start) / CLOCKS_PER_SEC;
}

double getHeapTime(vector<vector<int>>&vecList, int l) {

	clock_t start = clock();
	vecList = heapSort(vecList, l);
	clock_t end = clock();
	return (double)(end - start) / CLOCKS_PER_SEC;
}