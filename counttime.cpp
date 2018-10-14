#include<iostream>
#include<ctime>

using namespace std;

int main(){
	clock_t start = clock();
	for(int i =0; i < 100; i++){
		
	}
	clock_t end = clock();

	cout<<(double)(end-start)/CLOCKS_PER_SEC <<endl;
	return 0;
}
