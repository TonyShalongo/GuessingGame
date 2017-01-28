#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {

    int g, n;
	
	play:
	srand (time(NULL));
	n = rand() % 35 + 1;
	system("cls")	;
	
	cout << "Number Guessing Game" << endl;
	cout << "********************" << endl;
	cout << endl;
	cout << "The ramndom number has been generated. It is between 1 and 35." << endl;
	system("pause");
		
		while (g!=n)
			    
	    {
		system("cls");
		cout << "Number Guessing Game" << endl;
		cout << "********************" << endl;
		cout << endl;
		cout << "Type a guess between 1 and 35 and press enter" << endl;
		cout << "Your guess: ";
		cin >> g;
	    }
	system ("cls");
	cout << "You have found the mystery numeber!" << endl;
	cout << "The number was " << n << endl;
	cout << "Press any key to play again" << endl;
	system("pause");
	goto play;
	
	return 0;	
    }
	