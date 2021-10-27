#include <iostream>

int GetLenghtOfString(const char* string) {
	int count = 0;
	for (int i = 0; i < string[i]; i++)
	{
		count++;
	}
	return count;
}

char* RemoveLastChar(const char* string, int stringLenght) {

	char* newarray = new char[stringLenght];
	for (int i = 0; i < stringLenght; i++)
	{
		newarray[i] = string[i];
	}


	int removeCount = 0;
	for (int i = 0; i < stringLenght; i++)
	{
		if (newarray[i] == 'l')
		{
			for (int j= i; j < stringLenght; j++)
			{
				newarray[j] = newarray[j + 1];
			}
			removeCount++;
		}
	}
	newarray[GetLenghtOfString(string) - removeCount] = '\0';

	return newarray;
}

void PrintString(const char * string) {
	int f;
	std::cout << string;
	std::cin >> f;
}


int main() {
	const char* string = "Hello World";
	int f = GetLenghtOfString(string);
	PrintString(RemoveLastChar(string,f));
}
