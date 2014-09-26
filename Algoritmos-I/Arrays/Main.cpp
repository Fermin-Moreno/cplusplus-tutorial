#include <iostream>


using namespace std;


bool showBufferOverrun = false;


void ShowAges();
void BadIndex();
void BufferOverrun();
void Iterating();


int main(){

	ShowAges();
	
	BadIndex();

	if(showBufferOverrun){
		BufferOverrun();
	}

	Iterating();

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


// This will throw a error when executed, but when compiling
void BufferOverrun(){
	
	int ages[5];

	ages[5] = 10;
}


void Iterating(){

	int ages[4];
	int agesLength = 4;

	for (int i = 0; i < agesLength; i++)
	{
		ages[i] = i;
	}

	cout << "Iterating by the array: ";
	for (int i = 0; i < agesLength; i++)
	{
		cout << ages[i] << ", ";
	}

}