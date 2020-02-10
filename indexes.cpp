#include <iostream>
using namespace std;

int stringLength(char* charArray)
{
	int length = 0;
	while (charArray[length] != '\0')length++;
	return length;
}

int findIdx(char array[], char searchValue, int startIdx = 0)
{
	for (int i = startIdx; array[i]  != '\0'; i++)
	{
		
		if (searchValue == array[i])
		{
			return i;
		}
	}

	return -1;
}

void fillIdx(char* array, char fillValue,int fillAmount, int startIdx = 0)
{
	for (int i = startIdx; array[i] !=startIdx+fillAmount; i++)
	{
		array[i] = fillValue;
	}
	array[startIdx + fillAmount] = '\0';
}



void optimize(char** charArrayPtr)
{
	char* charArray = *charArrayPtr;
	int length = stringLength(charArray);
	int capacity = length + 1;
	char* temp = new char[capacity];

	for (int i = 0; i < capacity; i++)
	{
		temp[i] = charArray[i];
	}

	delete[] charArray;
	*charArrayPtr = temp;
}

int main()
{
	/*char* firstName = new char[50];
	char* lastName = new char[50];
	char* fullName = new char[50];
	cout << "Enter name  ";
	cin >> firstName;
	cout << "enter last name  ";
	cin >> lastName;
	int firstSize = stringLength(firstName);
	int lastSize = stringLength(lastName);
	int fullSize = firstSize + lastSize + 2;
	for (int i = 0; i < firstSize; i++)
	{
		fullName[i] = firstName[i];
	}
	fullName[firstSize] = ' ';
	for (int i = 0,j= firstSize+1; i < lastSize+1; i++,j++)
	{
		fullName[j] =lastName[i];
	}
	cout << " full name --- >" << fullName << endl;*/
	//char array[10];
	int startIdx = 0;
	//char searchValue;
	//cout << " Enter char array --- ";
	//cin >> array;
	//cout << " Your array is " << array << endl;
	//cout << "enter wich char to find --- ";
	//cin >> searchValue;
	//cout << " Enter from wich index to start  --- ";
	//cin >> startIdx;
	//int idx=findIdx(array, searchValue, startIdx);
	//cout << " your char was found on --- " << idx;


	int fillAmount;
	char fillChar;


	char* charArray = new char[30];
	cout << " enter char array ";
	cin >> charArray;
	cout << "enter on wich index you want to start";
	cin >> startIdx;
	cout << " enter how many chars to add ";
	cin >> fillAmount;
	cout << " enter char  -- ";
	cin >> fillChar;

	fillIdx(charArray, fillChar, fillAmount, startIdx);
	cout << charArray;
		
	 

	return 0;
}