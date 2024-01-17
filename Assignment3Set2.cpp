#include<iostream>
using namespace std;

int multiplyUsingAddition(int , int );
void displayMainMenu();
void performMultiplication(int[], int[], int &);
void displayResults(int[] ,int[], int);

int main()
{
	const int MAX_OPERATIONS = 100; //can handle 100 operations
	int operands1[MAX_OPERATIONS];// array declaration for number or operands for each operations
	int results[MAX_OPERATIONS];// array declaration for the results of each operation
	int operationCount = 0;//to count number of operation every time user perform multiplication
	int choice;//for user to choose between option in menu
	
	do
	{
		displayMainMenu();//display options
		cout << "Enter your choice: ";//ask user which option they choose
		cin >> choice;
		cout << endl;
		
	
		switch(choice)//determine which function to execute based on choice
		{
			case 1: if(operationCount < MAX_OPERATIONS)//allow user to perform multiplication until num of max operation reached.
					{
					  	performMultiplication(operands1,results,operationCount);
					  	break;
					}
					else
					{
					  	cout << "Maximum number of operations reached!"//message if user has reach max operations already
						     << "Cannot perform another multiplication" << endl << endl;
					  	break;		
					}
	
			case 2: if(operationCount == 0)//display message if no operation in system yet
					{
					  	cout << "No operation in system." << endl << endl;
					  	break;
					}
					else
					{
					  	displayResults(operands1,results,operationCount);
						break;		
					}
			
			
			case 3:	cout << "Goodbye!" << endl << endl;
					cout << "--------------------------------";
					return 0;// end program once user chooses option 3 (Quit)
					break;
		}

	}while(true);
	
		
}

int multiplyUsingAddition(int a, int b)
{
	int result = 0;//declare and initialize result with 0
	
	for(int i = 1; i <= b; i++)//repeat addition b times(if 4*5, then 4+4+4+4+4)
	{
		result += a;
	}
	return result;
}

void displayMainMenu()//display options
{
	cout << "<<<<<Main Menu>>>>>" << endl;
	cout << "=============================" << endl;
	cout << "1. Perform Multiplication" << endl;
	cout << "2. Display Results" << endl;
	cout << "3. Quit" << endl;
}

void performMultiplication(int operands1[], int results[], int &operationCount)
{
	int a,b;
	
	cout << "Enter the number of operands for multiplication: ";
	cin >> operands1[operationCount];
	
	for(int i = 1; i <= operands1[operationCount]; i++)
	{
		if(i == 1)//initializing first a with first operand
		{
			cout << "Enter operand " << i << ": ";
			cin >> a;	
		}
		else
		{
			cout << "Enter operand " << i << ": ";
			cin >> b;
			
			a = multiplyUsingAddition(a, b);//repeat calculate until entered num of operands reached
		}
		
	}
	
	results[operationCount] = a;//keeping result in array
	
	cout << "\nMultiplication performed successfully!\n" << endl;
	
	operationCount++;//counter for each operation done
}

void displayResults(int operands1[], int results[], int operationCount)
{
	cout << "Results of Mathematical Operations: " << endl;
	cout << "========================================" << endl;
	
	for(int i = 0; i < operationCount; i++)
	{
		cout <<	"Operation " << i+1 << ": " << results[i] 
		     << " (Operands: " << operands1[i] << ")" << endl;
	} 

	cout << endl << endl;

}
