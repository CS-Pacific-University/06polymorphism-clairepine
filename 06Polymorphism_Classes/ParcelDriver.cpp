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
void menu(int &userInput);
bool openFileForRead(ifstream& inputFile, string fileName,
  Parcel* apcParcels[], int &size);
void printAll(Parcel* apcParcels[], int size); 
//bool addInsurance(Parcel* apcParcels[], int size);
//bool addRush(Parcel* apcParcels[], int size);
//void deliver(Parcel* apcParcels[], int size); 
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
  const int MIN_SIZE = 0;

  const int OPTION_ONE = 1;
  const int OPTION_TWO = 2;
  const int OPTION_THREE = 3;
  const int OPTION_FOUR = 4;
  const int OPTION_FIVE = 5;

  Parcel* apcParcels[25];
  int size = 0;
  int option = 0;
  //int trackId;
  ifstream inFile;

  if (!openFileForRead(inFile, FILE_NAME, apcParcels, size)) {
    
    return EXIT_FAILURE;
  }

    menu(option);

    if (option == OPTION_ONE) {
      printAll(apcParcels, size);
    }

    // error handling with TID

   /* if (option == OPTION_TWO || option == OPTION_THREE ||
      option == OPTION_FOUR) {

      do {
        cout << "TID> ";
        cin >> trackId;

        if (trackId > MAX_SIZE || trackId < MIN_SIZE) {
          menu();
          cout << "TID> ";
          cin >> trackId;
         }

       } while (trackId > MAX_SIZE || trackId < MIN_SIZE);
    } 

    if (option = OPTION_TWO) {
      addInsurance(apcParcels, size); 
    }

    if (option = OPTION_THREE) {
      addRush(apcParcels, size);
    }
    
    if (option = OPTION_FOUR) {
      deliver(apcParcels, size);
    }*/

    if (option == OPTION_FIVE) {
      return EXIT_SUCCESS;
    }

    closeFileForRead(inFile); 

    // delete [] apcParcels; 

  cout << "Reached the end!\n"; 
  return EXIT_SUCCESS;
}

//***************************************************************************
// Function:    drawHeading
//
// Description: Prints heading to the screen
//
// Parameters:  title   - title for assignment
//
// Returned:    none
//***************************************************************************
void drawHeading(string title) {

  cout << title << endl << endl;

}

//***************************************************************************
// Function:    menu
//
// Description: Prints out menu to screen and does some error handling
//
// Parameters:  userInput   - users choice from the menu
//
// Returned:    none
//***************************************************************************
void menu(int &userInput) {
  const int FIVE = 5;
  const int ONE = 1;

  cout << "1. Print All" << endl;
  cout << "2. Add Insurance" << endl;
  cout << "3. Add Rush" << endl;
  cout << "4. Deliver" << endl;
  cout << "5. Quit" << endl << endl;

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
// Description: Prints the data read in from the file
//
// Parameters:  apcParcels    - array of different packages
//
// Returned:    none
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
// Returned:    bVal
//***************************************************************************
bool addInsurance(Parcel* apcParcels[], int size) {
  bool bVal = true;

  

  return bVal;
}
//***************************************************************************
// Function:    addRush
//
// Description: Adds rush delivery to a parcel
//
// Parameters:  apcParcels    - array of Parcels
//
// Returned:    bVal
//***************************************************************************
//bool addRush(Parcel* apcParcels[], int size) {
//  bool bVal = true;
//
//
//
//  return bVal;
//}

//***************************************************************************
// Function:    deliver
//
// Description: Delivery for a parcel
//
// Parameters:  apcParcels    - array of Parcels
//
// Returned:    none
//***************************************************************************
//void deliver(Parcel* apcParcels[], int size) {
//
//}

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
