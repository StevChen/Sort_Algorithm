// Sorts.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "funcDec.h"

void runTestCases(int n, int l, int lower, int upper);

int singlecount = 0;
int totalcount = 0;

int main()
{
	randSeed();
	int n = 100 , l = 5, lower = 0, upper = 99;
	runTestCases(n, l, lower, upper);
	cout << endl;

	n = pow(2, 10); l = 3;
	runTestCases(n, l, lower, upper);
	cout << endl;

	n = pow(2, 15); l = 3;
	runTestCases(n, l, lower, upper);
	cout << endl;

	n = pow(2, 20); l = 3;
	runTestCases(n, l, lower, upper);
	cout << endl;


	return 0;
}

void runTestCases(int n, int l, int lower, int upper) {
	cout << "n=" << n << " and " << "l=" << l << endl;
	vector<vector<int>> vecList;
	vector<vector<int>> mergeSortedvec;
	vector<vector<int>> heapSortedvec;
	vector<vector<int>> quickSortedvec;

	vector<vector<int>> r_mergeSortedvec;
	vector<vector<int>> r_heapSortedvec;
	vector<vector<int>> r_quickSortedvec;

	vector<vector<int>> s_mergeSortedvec;
	vector<vector<int>> s_heapSortedvec;
	vector<vector<int>> s_quickSortedvec;

	vecList = vectorListGenerator(n, lower, upper, l);

	mergeSortedvec = vecList;
	heapSortedvec = vecList;
	quickSortedvec = vecList;

	double mergeTime = getMergeTime(mergeSortedvec, l);
	cout << "Merge Done" << endl;
	int mergeCount = singlecount;
	singlecount = 0;

	double quickTime = getQuickTime(quickSortedvec, l);
	cout << "Quick Done" << endl;
	int quickCount = singlecount;
	singlecount = 0;

	double heapTime = getHeapTime(heapSortedvec, l);
	cout << "Heap Done" << endl;
	int heapCount = singlecount;
	singlecount = 0;


	cout << "mergeSorted: ";
	cout << mergeTime << " seconds, " << mergeCount << " Comparisions" << endl;

	cout << "heapSorted: ";
	cout << heapTime << " seconds, " << heapCount << " Comparisions" << endl;

	cout << "quickSorted: ";
	cout << quickTime << " seconds, " << quickCount << " Comparisions" << endl;
	cout << endl;

	s_mergeSortedvec = mergeSortedvec;
	s_heapSortedvec = heapSortedvec;
	s_quickSortedvec = quickSortedvec;

	double s_mergeTime = getMergeTime(s_mergeSortedvec, l);
	cout << "s_Merge Done" << endl;
	int s_mergeCount = singlecount;
	singlecount = 0;

	double s_quickTime = getQuickTime(s_quickSortedvec, l);
	cout << "s_Quick Done" << endl;
	int s_quickCount = singlecount;
	singlecount = 0;

	double s_heapTime = getHeapTime(s_heapSortedvec, l);
	cout << "s_Heap Done" << endl;
	int s_heapCount = singlecount;
	singlecount = 0;

	cout << "s_mergeSorted: ";
	cout << s_mergeTime << " seconds, " << s_mergeCount << " Comparisions" << endl;

	cout << "s_heapSorted: ";
	cout << s_heapTime << " second, " << s_heapCount << " Comparisions" << endl;

	cout << "s_quickSorted: ";
	cout << s_quickTime << " second, " << s_quickCount << " Comparisions" << endl;
	cout << endl;


	r_mergeSortedvec = mergeSortedvec;
	r_heapSortedvec = heapSortedvec;
	r_quickSortedvec = quickSortedvec;

	double r_mergeTime = getMergeTime(r_mergeSortedvec, l);
	cout << "r_Merge Done" << endl;
	int r_mergeCount = singlecount;
	singlecount = 0;

	double r_quickTime = getQuickTime(r_quickSortedvec, l);
	cout << "r_Quick Done" << endl;
	int r_quickCount = singlecount;
	singlecount = 0;

	double r_heapTime = getHeapTime(r_heapSortedvec, l);
	cout << "r_Heap Done" << endl;
	int r_heapCount = singlecount;
	singlecount = 0;

	cout << "r_mergeSorted: ";
	cout << r_mergeTime << " second, " << r_mergeCount << " Comparisions" << endl;

	cout << "r_heapSorted: ";
	cout << r_heapTime << " second, " << r_heapCount << " Comparisions" << endl;

	cout << "r_quickSorted: ";
	cout << r_quickTime << " second, " << r_quickCount << " Comparisions" << endl;
	cout << endl;

}

int COMPVEC(vector<int> a, vector<int> b, int l) {
	totalcount++;
	singlecount++;
	for (int i = 0; i < l; i++) {
		if (a[i] == b[i]) {
			continue;
		}
		return a[i] > b[i] ? 1 : -1;
	}
	return 0;
}