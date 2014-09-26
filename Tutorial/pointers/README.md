# Pointers

## Address

To access the address of a variable you must use the keyworld __&__.

```c++
#include <iostream>

using namespace std;

int main(){

    int volume = 25;

    // Result: 25
    cout << "Integer: " << volume << endl;

    // Result in some value like this: 001CF7C8
	cout << "Integer address: " << &volume << "\n\n";

	system("pause");
	return 0;
}

```

## Pointer

To create a pointer use the keyword __*__ and attribute an address using __&__.
From the pointer to access the variable you must use __*__ again.

```c++

    int volume = 25;

    int *pointerToVolume = &volume;

	cout << "Pointer value: " << pointerToVolume << endl;
	cout << "Pointer address: " << &pointerToVolume << endl;
	cout << "Pointer pointing to value: " << *pointerToVolume << endl;

```

## Not Initialized

Case the pointer be declared but not initialized when the code be executed it will thrown a error.

```c++

    int *pointerToVolume;

	cout << pointerToVolume;

```
