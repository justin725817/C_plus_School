#include <iostream>
#include <iomanip> 
#include <fstream>
#include <string>
#include <cctype>
#include <cstdlib>
#include "Tool.h"
using namespace std;

// function prototypes
void initializeFile( fstream & );
void inputData( fstream & );
void listTools( fstream & );
void updateRecord( fstream & );
void insertRecord( fstream & );
void deleteRecord( fstream & );
int instructions();

int main()
{
   int choice; 
   char response;


} // end main

// function to clear file
void initializeFile( fstream &fRef )
{
   Tool blankItem; // empty Tool object




} // end function initializeFile

// function that receives input
void inputData( fstream &fRef )
{
   Tool temp; // temporary Tool object

   // temporary variables used to hold user input
   int number;
   string name;
   double price;
   int stock;





} // end inputData

// function that decides what choice user selected
int instructions()
{
   int choice;

   // ask user to enter a choice
   cout << "\nEnter a choice:\n1  List all tools."
      << "\n2  Update record.\n3  Insert record."
      << "\n4  Delete record.\n5  End program.\n";

   // ask user for choice until a valid choice is entered
   do 
   {
      cout << "? ";
      cin >> choice;
   } while ( choice < 1 || choice > 5 );

   return choice; // return user choice
} // end function instructions

// function that lists tools in file
void listTools( fstream &fRef )
{
   Tool temp;





} // end function listTools

// function to update a tool's information
void updateRecord( fstream &fRef )
{
   Tool temp;
   int part;
   string name;
   int stock;
   double price;




} // end function updateRecord

// function to insert a new record
void insertRecord( fstream &fRef )
{
   Tool temp;
   int part;
   string name;
   int stock;
   double price;

 
} // end function insertRecord



// function to delete a record
void deleteRecord( fstream &fRef )
{
   Tool blankItem;
   Tool temp;
   int part;




} // end function deleteRecord



