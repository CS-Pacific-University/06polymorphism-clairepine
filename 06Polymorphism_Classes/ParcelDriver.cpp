//***************************************************************************
// File name:		ParcelDriver.cpp
// Author:			Claire Pine
// Date:				5/1/2021
// Class:				CS 250
// Assignment:	Polymorphism
// Purpose:			Function calls for functions in Parcel, letter, postcard
//              and overnight classes. Demonstrate polymorphism.
//***************************************************************************
#include "Parcel.h"
#include "Letter.h"
#include "Postcard.h"
#include "Overnight.h"
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

void drawHeading(string title);
void menu();
bool openFileForRead(ifstream& inputFile, string fileName,
  Parcel* apcParcels[], int &size);
void printAll(Parcel* apcParcels[], int size); 
bool addInsurance(Parcel* apcParcels);
bool addRush(Parcel* apcParcels);
void deliver(Parcel* apcParcels); 
void closeFileForRead(ifstream& inputFile);

//***************************************************************************
// Function:    main
//
// Description: Demonstrate polymorphism 
// 
// Parameters:  none
//
// Returned:    exit status
//***************************************************************************

int main() {

  const string TITLE_STRING = "Mail Simulator!";
  const string FILE_NAME = "parcels.txt";
  const int MAX_SIZE = 25;
  const int OPTION_FIVE = 5;

  Parcel* apcParcels[25];
  int size = 0;
  int option;
  ifstream inFile;

  if (!openFileForRead(inFile, FILE_NAME, apcParcels, size)) {
    
    return EXIT_FAILURE;
  }

  do {
    menu();

    switch(option) {
      case 1: printAll(apcParcels, size); 
        break;
    }
    switch (option) {
      case 2:
        break;
    }
    switch(option) {
      case 3:
        break;
    }
    switch (option) {
      case 4:
        break;
    }
    switch (option) {
    case 5:
      break;
    }
  } while (option != OPTION_FIVE);*/

  cout << "Reached the end!\n"; 
  return EXIT_SUCCESS;
}

//***************************************************************************
// Function:    drawHeading
//
// Description: 
//
// Parameters:  
//
// Returned:    
//***************************************************************************
void drawHeading(string title) {

  cout << title << endl << endl;

}

//***************************************************************************
// Function:    menu
//
// Description: 
//
// Parameters:  
//
// Returned:    
//***************************************************************************
void menu() {
  const int FIVE = 5;
  const int ONE = 1;

  int userInput;

  cout << "1. Print All" << endl;
  cout << "2. Add Insurance" << endl;
  cout << "3. Add Rush" << endl;
  cout << "4. Deliver" << endl;
  cout << "5. Quit" << endl;

  do {
    cout << "Choice> ";
    cin >> userInput;
  } while (userInput > FIVE || userInput < ONE);

}

//***************************************************************************
// Function:    openFileForRead
//
// Description: opens file "parcels.txt"
//
// Parameters:  inputFile   -file read in from main
//
// Returned:    none
//***************************************************************************
bool openFileForRead(ifstream& inputFile, string fileName, 
  Parcel* apcParcels[], int &size) {
  const char POSTCARD = 'P';
  const char LETTER = 'L';
  const char OVERNIGHT = 'O';

  bool bVal = true;
  char parcel;
  Parcel* pcParcel;

  inputFile.open(fileName);
  if (!inputFile.is_open()) {
    cout << "Cannot open file";
  }

  while (!inputFile.eof()) {
    inputFile >> parcel; 

    switch (parcel) {
      case POSTCARD:
        pcParcel = new Postcard();
        pcParcel->read(inputFile);
        apcParcels[size] = pcParcel;
    }
    switch (parcel) {
      case LETTER:
        pcParcel = new Letter(); 
        pcParcel->read(inputFile);
        apcParcels[size] = pcParcel;
    }
    switch (parcel) {
      case OVERNIGHT:
        pcParcel = new Overnight(); 
        pcParcel->read(inputFile); 
        apcParcels[size] = pcParcel;
    }
    size++;
  }

  return bVal;
}

//***************************************************************************
// Function:    printAll
//
// Description: 
//
// Parameters: 
//
// Returned:    
//***************************************************************************
void printAll(Parcel* apcParcels[], int size) {

  for (int i = 0; i < size; ++i) {
    apcParcels[i]->print(cout);
    cout << endl;
  }
}

//***************************************************************************
// Function:    addInsurance
//
// Description: Adds insurance to the parcel
//
// Parameters:  apcParcels    - Parcel array
//
// Returned:    
//***************************************************************************
bool addInsurance(Parcel* apcParcels) {

  return false;
}

//***************************************************************************
// Function:    addRush
//
// Description: Adds rush delivery to a parcel
//
// Parameters:  apcParcels    - array of Parcels
//
// Returned:    
//***************************************************************************
bool addRush(Parcel* apcParcels) {

  return false;
}

//***************************************************************************
// Function:    deliver
//
// Description: Delivery for a parcel
//
// Parameters:  apcParcels    - array of Parcels
//
// Returned:    
//***************************************************************************
void deliver(Parcel* apcParcels) {

}

//***************************************************************************
// Function:    closeFileForRead
//
// Description: closes file "parcels.txt"
//
// Parameters:  inputFile   -file read in from main
//
// Returned:    none
//***************************************************************************
void closeFileForRead(ifstream& inputFile) {

  inputFile.close();

}
