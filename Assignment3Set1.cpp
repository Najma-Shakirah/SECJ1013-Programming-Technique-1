#include<iostream>
using namespace std;

//function prototypes
void displayMainMenu();
void addBook(string[], string[], int[], int&);
void displayLibrary(string[], string[], int[], int);
void searchByTitle(string[], string[], int[], int);

const int MAX_BOOKS = 100;

int main()
{
    string bookTitle[MAX_BOOKS], bookAuthor[MAX_BOOKS];//arrays to keep book title,author entered by user
    int pubYear[MAX_BOOKS];//array to keep publication year of book entered by user
	int choice;//for user to choose between option in menu
	int numBooks = 0;//to count number of books entered by user

    
    do
	{
        displayMainMenu();//function call to display main menu 
        cout << "Enter your choice: ";
        cin >> choice;//user's choice based on option given
		
        cout <<  endl;

        switch (choice)
        {
        case 1:
            if(numBooks < MAX_BOOKS)//only allow user to add books if num of max is not reached
            {
             	addBook(bookTitle, bookAuthor, pubYear, numBooks);//function call to add a book
             	break;	
			}
			else
			{
				cout << "Maximum books reached. Cannot add more books\n" << endl;//display message when user can't add any more books
				break;
			}
			

        case 2:
        	if(numBooks == 0)//display message if no library in system yet
					{
					  	cout << "No books in library." << endl << endl;
					  	break;
					}
					else
					{
					  	displayLibrary(bookTitle, bookAuthor, pubYear, numBooks);//function call to display all books entered by user
            			break;		
					}
            

        case 3:
            searchByTitle(bookTitle, bookAuthor, pubYear, numBooks);//function call to search book by title
            break;

        case 4:
            cout << "Goodbye!" << endl << endl;
            cout << "--------------------------------";
            return 0;//end program once user choose option 4. Quit
        }
        
    }while(true);

}

//function to display menu with options
void displayMainMenu()
{
    cout << "<<<<<Library Management System>>>>>" << endl;
    cout << "========================================" << endl;
    cout << "1. Add a Book" << endl;
    cout << "2. Display Library" << endl;
    cout << "3. Search by Title" << endl;
    cout << "4. Quit" << endl;
}

//function for user to add and input book details
void addBook(string book[], string author[], int year[], int &numBooks)
{		
		cin.clear();// Clear any error flags
    	cin.ignore();  // Ignore newline character after reading the integer
   
    	cout << "Enter book title: ";
    	getline(cin, book[numBooks]);

    	cout << "Enter author name: ";
    	getline(cin, author[numBooks]);

    	cout << "Enter publication year: ";
    	cin >> year[numBooks];

    	cout << "\nBook added successfully!";
    	numBooks++; //counter for each book added by user	
    	
	cout << "\n\n";
	
}

void displayLibrary(string book[], string author[], int year[], int numBooks)
{
    cout << "Library Contents:" << endl;
    cout << "====================" << endl;

    for (int i = 0; i < numBooks; i++)
    {
        cout << "Title: " << book[i] << endl;
        cout << "Author: " << author[i] << endl;
        cout << "Year: " << year[i] << endl;
        cout << endl;
    }

    cout << "\n\n";
}

void searchByTitle(string book[], string author[], int year[], int numBooks)
{
    string search;
    int index = numBooks + 1;
    
    cin.ignore(); // Ignore newline character after reading the integer
    
    do
    {
    	cout << "Enter the title to search: ";
    	getline(cin, search);//enter book title to search
    	
	}while(search.empty());//repeat when enter/newline
	
    
    cout << endl;

    for (int i = 0; i < MAX_BOOKS; i++)
    {
        if (search == book[i])//search all books in array until found the same title 
        {
            index = i; //assign index of book found with same title
            break;
        }
    }

    if (index == numBooks + 1) //if no book is found after searching all books in program, display message
    {
        cout << "Book is not found!";
    }
    else
    {
        cout << "Book found:" << endl;
        cout << "====================" << endl;
        cout << "Title: " << book[index] << endl;
        cout << "Author: " << author[index] << endl;
        cout << "Year: " << year[index] << endl;
        cout << "Index book found: " << index;
    }
    
    cout << "\n\n";
}
