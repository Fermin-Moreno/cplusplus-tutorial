# Random Numbers

Include __ctime__ library to use the function __time()__ and generate the seed. The seed will be used to generate random numbers when you call the function __rand()__.

The interval of numbers that __rand()__ will return is between __0__ and __RAND_MAX__ parameter.

```c++
#include <ctime>
#include <iostream>


using namespace std;


int main(){

	// Seed Rand
	srand(time(0));

	cout << "Rand Max: "		   << RAND_MAX		  << endl;
	cout << "Between 0 and Max: "  << rand()			<< endl;
	cout << "Between 0 and 4: "    << rand() % 5		<< endl;
	cout << "Between 1 and 5: "    << (rand() % 5) + 1  << endl;

	system("pause");
	return 0;
}
```
