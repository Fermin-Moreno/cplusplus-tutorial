#include <iostream>


using namespace std;


bool showBufferOverrun = false;


void ShowAges();
void BadIndex();
void TypeValues();
void BufferOverrun();


int main(){

	ShowAges();
	
	BadIndex();

	TypeValues();

	if(showBufferOverrun){
		BufferOverrun();
	}

	cout << "\n\n";
	system("pause");
	return 0;
}


void ShowAges(){

	int ages[5];

	ages[0] = 2;
	ages[1] = 6;
	ages[2] = 14;
	ages[3] = 9;
	ages[4] = 25;

	cout << "Ages: ";
	cout << ages[0] << " ";
	cout << ages[1] << " ";
	cout << ages[2] << " ";
	cout << ages[3] << " ";
	cout << ages[4] << "\n\n";
}


void BadIndex(){

	int ages[5];

	cout << "Bad Index: ";
	cout << ages[6] << "\n\n";
}


void TypeValues(){

	int ages[1];

	ages[0] = 'c';

	char codes[1];

	codes[0] = 90;

	cout << "Char 'c' inside array of int: " << ages[0] << endl;
	cout << "Int '90' inside array of char: " << codes[0] << endl;

}


// This will throw a error when executed, but when compiling
void BufferOverrun(){
	
	int ages[5];

	ages[5] = 10;
}