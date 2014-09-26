# Arrays

Simple example of array of integers.

```c++
#include <iostream>

using namespace std;

int main(){

    int ages[5];

	ages[0] = 2;
	ages[1] = 6;
	ages[2] = 14;
	ages[3] = 9;
	ages[4] = 25;

	system("pause");
	return 0;
}

```

## Bad Index

In this example, the access to an invalid index will bring trash from the memory.

```c++

    int ages[5];

    cout << "Bad Index: ";
    cout << ages[6] << "\n\n";

```

## Buffer Overrun

This code will __thrown an error__ when be executed, but don't when be compiled. Just some warnings in the gcc line command.

```c++

    int ages[5];

	ages[5] = 10;

```

## Iterating

```c++

    int ages[4];
	int agesLength = 4;

	for (int i = 0; i < agesLength; i++)
	{
		ages[i] = i;
	}

	for (int i = 0; i < agesLength; i++)
	{
		cout << ages[i] << ", ";
	}
```
