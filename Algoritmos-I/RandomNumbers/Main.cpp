#include <ctime>
#include <iostream>


using namespace std;


int main(){

	// Seed Rand
	srand(time(0));
	
	cout << "Rand Max: "			<< RAND_MAX			<< endl;
	cout << "Between 0 and Max: "   << rand()			<< endl;
	cout << "Between 0 and 4: "		<< rand() % 5		<< endl;
	cout << "Between 1 and 5: "		<< (rand() % 5) + 1 << endl;

	system("pause");
	return 0;
}