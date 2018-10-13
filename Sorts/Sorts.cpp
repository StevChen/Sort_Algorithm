// Sorts.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <time.h>

using namespace std;

void printVector(vector<int> v) {
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << ", ";
	}
	cout << endl;
}


bool COMPVEC(vector<int>, vector<int>, int);
int numGenerator(int, int);
void randSeed();
vector<int> vecGenerator(int, int, int);



int main()
{
	randSeed();
	vector<int> vec1 = vecGenerator(1, 50, 10);
	vector<int> vec2 = vecGenerator(50, 100, 10);
	cout << "vec1: ";
	printVector(vec1);
	cout << "vec2: ";
	printVector(vec2);
	cout << "Compare result: " << COMPVEC(vec1, vec2, 10) << endl;
	
	return 0;
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

bool COMPVEC(vector<int> a, vector<int> b, int l) {
	for (int i = 0; i < l - 1; i++) {
		if (a[i] > b[i]) {
			return false;
		}
	}
	return true;
}