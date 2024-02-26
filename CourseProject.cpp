/*
Author: Austin Stephens

Date: 05/05/2022

FileName: CourseProject.cpp

Purpous: Module 05: Multiple Inheritance

Input: Menu Selection Based on Input

Output: Either menu item or concepts of entering in adress information



Exceptiuons:
The program must use at least a menu at the beginning with multiple options including an option to exit the program. 
The program will run continuously, in a cyclic manner until the user chooses to exit. 
Sublevel menus are allowed. 
The program must use classes, objects, and inheritance. 
Objects must be used in both a has-a and an is-a relationship. 
All class implementations must be separated from declarations into proper .cpp and .h files.

*/



#include <iostream>
#include <string>
#include <stdlib.h>


using namespace std;





//Classes

class Contact
{
private:

    char *FirstName,*LastName;
    long *PhoneNumber;
    int *Age, *ContactNumber;
public:
    Contact()
    {
        FirstName = new char[100];
        LastName = new char[100];
        PhoneNumber = new long;
        Age = new int;
        ContactNumber = new int;
    }   
    
        void datafeed();
        void ShowContacts();
};


    //Functions
void Contact::datafeed()
{
    cin.ignore();
    cout << "Enter First Name: ";
    cin.getline(FirstName, 100);
    cout << "Enter Last Name ";
    cin.getline(LastName, 100);
    cout << "Enter Age: ";
    cin >> *Age;
    cout << "Enter Phone Number: ";
    cin >> *PhoneNumber;
    cout << "Enter Contact No. (I.E 1, 2, 3, 4, 5): ";
    cin >> *ContactNumber;
    system("Pause");
    system("CLS");
    
}

//Purpose: Contains a pointer function to feed data

//Input: Inputs pointer from int main and allows for inputs to be solidified into a particular class

//Output: Outputs walk through steps in order to create the proper item for each variable


void Contact::ShowContacts()
{
        cout << char(218);      for(int i=0; i<21; i++){cout << char(196);}      cout << char(191) << endl;

        cout << char(179) << *ContactNumber << "." << endl; 

        cout << char(179) << "   First Name: " << FirstName << "     " << endl;
        
        cout << char(179) << "    Last Name: " << LastName  << "     " << endl;

        cout << char(179) << "          Age: " << *Age  << "    " << endl;

        cout << char(179) << " Phone Number: " << *PhoneNumber  << "    " << endl;
        cout << char(192);      for(int i=0; i<21; i++){cout << char(196);}      cout << char(217) << endl;
        system("Pause");
        system("CLS");
}

//Purpose: Shows contacts for each contact created

//Input: N/A

//Output: Outputs each contact based on what conctact wants to be shown (I.E All of them in this case)



//main
int main()
{
    Contact *B[20];
    int Choice, i=0, j, l;
    
    
    while (1)
    {
        Choice = 0;
        cout << char(218);      for(int i=0; i<21; i++){cout << char(196);}      cout << char(191) << endl;

        cout << char(179) << "\t Menu\t      " << char(179) << endl;

        cout << char(192);      for(int i=0; i<21; i++){cout << char(196);}      cout << char(217) << endl;
        cout << char(218);      for(int i=0; i<21; i++){cout << char(196);}      cout << char(191) << endl;
        cout << char(179) << "1. New Contact       " << char(179) << endl;
        cout << char(192);      for(int i=0; i<21; i++){cout << char(196);}      cout << char(217) << endl;
        cout << char(218);      for(int i=0; i<21; i++){cout << char(196);}      cout << char(191) << endl;
        cout << char(179) << "2. Display Contacts  " << char(179) << endl;
        cout << char(192);      for(int i=0; i<21; i++){cout << char(196);}      cout << char(217) << endl;
        cout << char(218);      for(int i=0; i<21; i++){cout << char(196);}      cout << char(191) << endl;
        cout << char(179) << "3. Exit\t      " << char(179) << endl;
        cout << char(192);      for(int i=0; i<21; i++){cout << char(196);}      cout << char(217) << endl;
        cout << "\n";
        cout << "\n";
        cout << char(218);      for(int i=0; i<21; i++){cout << char(196);}      cout << char(191) << endl;
        cout << char(179) << "   Select Option     " << char(179) << endl;
        cin >> Choice;


        switch (Choice)
        {
            //new Contact creation
        case 1:
            system("CLS");
            B[i] = new Contact;
            B[i]-> datafeed();
            i++;
            break;

        case 2:
        system("CLS");
        cin.ignore();
            for (int j = 0; j < i; j++)
            {
                B[j]->ShowContacts();
            }
            break;

            
            
            //exit
        case 3:
            exit(0);
        default:
            cout << "Invalid Choice Entered" << endl;
        }
    }
    

    return 0;

}