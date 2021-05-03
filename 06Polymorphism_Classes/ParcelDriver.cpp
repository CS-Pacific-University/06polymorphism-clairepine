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
  Parcel* apcParcels);
// print function
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

  Parcel* apcParcels = new Parcel[MAX_SIZE]; 

  ifstream inFile;

  if (!openFileForRead(inFile, FILE_NAME, apcParcels)) {
    
    return EXIT_FAILURE;
  }

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
// Function:    
//
// Description: 
//
// Parameters:  
//
// Returned:    
//***************************************************************************
void menu() {
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
  Parcel* apcParcels) {

  bool bVal = true;

  inputFile.open(fileName);
  if (!inputFile.is_open()) {
    cout << "Cannot oepn file";
  }

  return bVal;
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
