#include<iostream>
using namespace std;

int main(){
	int disBig = 0;
	cout << "How long are the directions? ";
	cin >> disBig;

	//make 
	char* directions = new char [disBig];
	//make grid
	int arrayBig = disBig * disBig + 1; 
	bool* grid = new bool[arrayBig][arrayBig];
	cout << "What are the directions?";
	for (int counter = 0; counter < disBig; counter++){
		cin >> directions.[counter];
	}
}