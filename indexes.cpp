#include<iostream>


int main()
{
	char* myArray = new char[8];
    myArray[0] = 'V';
    myArray[1] = 'a';
    myArray[2] = 'r';
    myArray[3] = 't';
    myArray[4] = 'i';
    myArray[5] = 'k';
    myArray[6] = 'a';
    myArray[7] = '\0';

    myArray = myArray - 'a';
  	
  	std:: cout << myArray['a'];
  	std:: cout << myArray['b'];
  	std:: cout << myArray['c'];
  	std:: cout << myArray['d'];
  	std:: cout << myArray['e'];
  	std:: cout << myArray['f'];
  	std:: cout << myArray['g'];
    return 0;
}
