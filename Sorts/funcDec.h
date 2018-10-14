#pragma once
#include <iostream>
#include <vector>
#include <ctime>
#include <cmath>

using namespace std;

void printVector(vector<int>);
void printVectorList(vector<vector<int>>);

int COMPVEC(vector<int>, vector<int>, int); //return 1 if a is greater, 0 if equal, -1 if less;
int numGenerator(int, int);
void randSeed();
vector<int> vecGenerator(int, int, int);
vector<vector<int>> vectorListGenerator(int, int, int, int);

void swap(vector<int>&, vector<int>&);


//Merge Sort
vector<vector<int>> mergeSort(vector<vector<int>> v, int l);

//Heap Sort
vector<vector<int>> heapSort(vector<vector<int>>, int);

//Quick Sort
vector<vector<int>> quickSort(vector<vector<int>>, int);

//Time Function
double getMergeTime(vector<vector<int>>&, int);
double getQuickTime(vector<vector<int>>&, int);
double getHeapTime(vector<vector<int>>&, int);