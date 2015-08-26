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
	int** grid = new int* [arrayBig];
	for(int i = 0; i < arrayBig; ++i){
		grid[i] = new int[arrayBig];
	}

	//populate with 0's
    	
	cout << "What are the directions?";
	char buff;
	for (int counter = 0; counter < disBig; counter++){
		cin >> buff;
		if (buff == 'n' || buff == 's' || buff == 'e' || buff == 'w'){
			directions[counter] = buff;
			cout << "here1";
		}
		else{
			cout << "invalid direction" << endl; 
		}
	}

	bool shouldContinue = true;
	//get to logicing 
	//while (shouldContinue == true){
		for (int counter = 0; counter < disBig; counter++){
			cout << "here2";

			switch (directions[counter]) {
	  			case 'n':
	    		cout << "x is n";
	    		break;

	  			case 's':
	    		cout << "x is s";
	    		break;

	    		case 'e':
	    		cout << "x is e";
	    		break;

	    		case 'w':
	    		cout << "x is w";
	    		break;
	  
	  			default:
	    		cout << "invalid direction";
			}
			//if(nextStep == 1){
				//shouldContinue = false;
			//}
		}
	//}

	delete directions; 
	delete grid; 
}