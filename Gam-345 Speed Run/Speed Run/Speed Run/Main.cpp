#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int StringToInt(std::string num) {
	const char* charArray = num.c_str();
	int number = atoi(charArray);
	return number;
}

int main() 
{
	std::string number, number1, number2;
	int prevNum = NULL;
	int dupAmount = 1;
	int arrNum = 0;
	bool CheckNum = false;
	std::ifstream myfile("Numbers.txt");
	if (!myfile.is_open())//Debug null
	{
		std::cout << "Unable to open Numbers.txt";
		return 0;
	}

	std::getline(myfile, number);
	int numberCount = StringToInt(number);
	const int arrayCount = numberCount;
	int* arr = new int [numberCount];

	std::getline(myfile, number1);
	std::stringstream ss(number1);

	std::cout << std::endl;

	std::getline(myfile, number2);
	std::cout <<"Number to Find: " << number2 << std::endl;
	int numberCount2 = StringToInt(number2);

	for (int i = 0; i < numberCount; i++){
		while (std::getline(ss, number1, ' ')){
			int numbercount3 = StringToInt(number1);
			std::cout << numbercount3 << ' ';
			arr[arrNum] = numbercount3;
			if (numberCount2 == numbercount3){
				CheckNum = true;
			}
			arrNum++;
		}	
	}
	std::cout << std::endl;
	for (int i = 0; i < numberCount; i++){
		for (int j = 0; j < numberCount; j++){
			if (arr[j] = arr[i]){
				dupAmount++;
			}			
		}
		if (dupAmount >= 2) {
			std::cout << arr[i] << " Repeates " << dupAmount << " Times.";
		}
		dupAmount = 1;
	}
	std::cout << std::endl;
	if (CheckNum){
		std::cout << numberCount2 << " is True" << std::endl;
	}else if(!CheckNum) {
		std::cout << numberCount2 << " is False" << std::endl;
	}

	myfile.close();

	return 0;
}