#include "funcDec.h"

void heapify(vector<vector<int>>&vecList, int i, int n, int l) {
	int largest = i;          //initialize largest to be parent
	int left = 2 * i + 1;	  //calculate index of left and right node
	int right = 2 * i + 2;    

	
	//Find the largest value index within parent, left and right
	if (left < n && COMPVEC(vecList[left], vecList[largest], l) == 1) {
		largest = left;
	}
	
	if (right < n && COMPVEC(vecList[right], vecList[largest], l) == 1) {
		largest = right;
	}

	//build max heap;
	if (largest != i) {
		swap(vecList[largest], vecList[i]);
		heapify(vecList, largest, n, l);
	}
}

vector<vector<int>> heapSort(vector<vector<int>> v, int l) {
	vector<vector<int>> vecList = v;
	int vlength = vecList.size();
	for (int i = vlength / 2 - 1; i >= 0; i--) {
		heapify(vecList, i, vlength, l);
	}

	for (int i = vlength - 1; i >= 0; i--) {
		swap(vecList[0], vecList[i]);

		heapify(vecList, 0, i, l);
	}

	return vecList;
}
