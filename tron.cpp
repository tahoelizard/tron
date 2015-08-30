#include<iostream>
using namespace std;


int main(){
	int disBig = 0;
	cout << "How long are the directions? ";
	cin >> disBig;

	//make 
	char* directions = new char [disBig];
	//make grid
	int arrayBig = disBig + disBig + 1; 
	bool check = false; 
	int** grid = new int* [arrayBig];
	for(int i = 0; i < arrayBig; ++i){
		grid[i] = new int[arrayBig];
		for (int j= 0; j < arrayBig; j++){
			grid[i][j]= 0;
		}
	}

    	
	cout << "What are the directions?";
	char buff;
	for (int counter = 0; counter < disBig; counter++){
		cin >> buff;
		if (buff == 'n' || buff == 's' || buff == 'e' || buff == 'w'){
			directions[counter] = buff;
		}
		else{
			cout << "invalid direction" << endl; 
		}
	}

	int xCord = disBig;
	int yCord = disBig;
	grid[xCord][yCord]= 1;
		for (int counter = 0; counter < disBig; counter++){
			switch (directions[counter]) {
	  			case 'n':
		    		yCord--;
		    		if (grid[xCord][yCord] == 1){
		    			check = true; 
		    		} else{
		    			grid[xCord][yCord]= 1;
		    			cout << xCord << " and " << yCord << " set to 1" << endl; 
		    		}

	    		break;

	  			case 's':
		    		yCord++;
	    			if (grid[xCord][yCord] == 1){
	    				check = true; 
	    			} else{
	    				grid[xCord][yCord]= 1;
	    				cout << xCord << " and " << yCord << " set to 1" << endl; 
	    			}
	    		break;

	    		case 'e':
	    			xCord++;
	    			if (grid[xCord][yCord] == 1){
	    				check = true; 
	    			} else{
	    				grid[xCord][yCord]= 1;
	    				cout << xCord << " and " << yCord << " set to 1" << endl; 
	    			}
	    		break;

	    		case 'w':
	    			xCord--;
	    			if (grid[xCord][yCord] == 1){
	    				check = true; 
	    			} else{
	    				grid[xCord][yCord]= 1;
	    				cout << xCord << " and " << yCord << " set to 1" << endl; 
	    			}
	    		break;
	  
	  			default:
	    		cout << "invalid direction";
			}
		}

	if (check == true){
		cout << "colission found" << endl;
	}
	else{
		cout << "No colision found" << endl;
	}

	delete directions; 
	delete grid; 
}