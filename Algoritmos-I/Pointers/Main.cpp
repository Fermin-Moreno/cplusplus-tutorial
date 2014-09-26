#include <iostream>


using namespace std;


bool showPointerNotInitialized = false;

void Address();
void Pointer();
void PointerNotInitialized();


int main(){

	Address();

	Pointer();

	if(showPointerNotInitialized){
		PointerNotInitialized();
	}

	int *pointerToVolume = NULL;

	if(pointerToVolume){
		cout << "Empty pointer" << endl;
	}


	
	
	cout << "\n\n";
	system("pause");
	return 0;
}


void Address(){

	int volume = 25;

	cout << "Integer: " << volume << endl;
	cout << "Integer address: " << &volume << "\n\n";
}


void Pointer(){

	int volume = 25;

	int *pointerToVolume = &volume;

	cout << "Pointer value: " << pointerToVolume << endl;
	cout << "Pointer address: " << &pointerToVolume << endl;
	cout << "Pointer pointing to value: " << *pointerToVolume << endl;

}

void PointerNotInitialized(){

	int *pointerToVolume;

	cout << pointerToVolume;

}
