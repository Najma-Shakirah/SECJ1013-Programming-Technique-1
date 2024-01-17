/*
ASSIGNMENT 2 PROGRAMMING TECHNIQUE (SET 2)

TEAM MEMBERS:
YASMIN BATRISYIA BINTI ZAHIRUDDIN (A23CS0201)
NURUL ASYIKIN BINTI KHAIRUL ANUAR (A23CS0162)
NAJMA SHAKIRAH BINTI SHAHRULZAMAN (A23CS0140)
*/

#include <iostream>
using namespace std; 

int main (){

    int number;

    cout<<"Welcome to the Food Ordering System"<<endl;
    cout<<"1. Pizza - $10"<<endl;
    cout<<"2. Burger - $5"<<endl;
    cout<<"3. Sandwich - $7"<<endl;
    
    cout<<"Enter the number of the item you want to order: ";
    cin>>number; 

    switch (number){
        case 1 : cout<<"Your total bill is: $10"<<endl;
                 break;
        case 2 : cout<<"Your total bill is: $5"<<endl;
                 break;
        case 3 : cout<<"Your total bill is: $7"<<endl;
                 break;
        default : cout<<" "<<endl;
    }

system("pause");
return 0;
}