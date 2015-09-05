#include<iostream>
using namespace std;


int main(){
	int disBig = 0;
	int* xHolder, *yHolder;
	char buff;
	int disLong = 0;
	bool flag = false;

	cout << "How long are the directions? ";
	cin >> disLong;

	char* directions = new char [disLong];

	disBig = disLong * 2; 
	xHolder = new int[disBig];
	yHolder = new int[disBig];

	int xCord = 0;
	int yCord = 0;

	for (int counter = 0; counter < disLong; counter++){
		cin >> buff;
		if (buff == 'n' || buff == 's' || buff == 'e' || buff == 'w' || buff == 'N' || buff == 'S' || buff == 'E' || buff == 'W'){
			directions[counter] = buff;
		}
		else{
			cout << "invalid direction" << endl; 
		}
	}

	for (int counter = 0; counter < disLong; counter++){
		switch (directions[counter]) {
  			case 'n':
	    		yCord--;
    		break;

  			case 's':
	    		yCord++;
    		break;

    		case 'e':
    			xCord++;
    		break;

    		case 'w':
    			xCord--;
    		break;
  
  			default:
    		cout << "invalid direction";
		}

		xHolder[counter] = xCord;
		yHolder[counter] = yCord;

		if (counter != 0){

			for(int checking = 0; checking < counter; checking++){
				cout << "BATCH " << counter << endl;
				cout << "checking " << xHolder[counter] << " against " << xHolder[checking] << endl;
				cout << "checking " << yHolder[counter] << " against " << yHolder[checking] << endl;

				if(xHolder[counter] == xHolder[checking] && yHolder[counter] == yHolder[checking])
				{
					flag = true; 
					cout << "--------FOUND!" << endl;
				}
			}
		}


	}

	if(flag == true){
		cout << "colission found" << endl;
	}
	else{
		cout << "No colision found" << endl;
	}
}