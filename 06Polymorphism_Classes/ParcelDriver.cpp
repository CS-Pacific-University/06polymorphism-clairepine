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

// bool openFileForRead
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

  const string FILE_NAME = "parcels.txt";

  ifstream inFile;

  cout << "Reached the end!\n"; 
  return EXIT_SUCCESS;
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
