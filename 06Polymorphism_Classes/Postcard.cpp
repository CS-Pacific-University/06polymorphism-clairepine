//***************************************************************************
// File name:		Postcard.cpp
// Author:			Claire Pine
// Date:				5/1/2021
// Class:				CS 250
// Assignment:	Polymorphism
// Purpose:			Class for shipping a postcard
//***************************************************************************
#include "Postcard.h"
#include <iostream>

//***************************************************************************
// Constructor:	Postcard
//
// Description:	Call the Parcel default constructor, initialize the variables 
//							with parameters
//
// Parameters:	none
//
// Returned:		none
//***************************************************************************
Postcard::Postcard() : Parcel (), mMessage(0) {

}

//***************************************************************************
// Function:		getDeliveryDate
//
// Description:	Gets the expected delivery date for the postcard
//
// Parameters:	none
//
// Returned:		deliveryDay
//***************************************************************************
int Postcard::getDeliveryDate() const {
	const int MILES = 10;
	const int TWO = 2;
	const int ONE = 1;

	int deliveryDay = 0;
	int distance = getDistance();
	bool bRush = getRush();

	deliveryDay = distance / MILES;

	if (distance % MILES != 0) {
		deliveryDay++;
	}

	if (bRush == true) {
		deliveryDay -= TWO;
	}

	if (deliveryDay < ONE) {
		deliveryDay = ONE;
	}

	return deliveryDay;
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
double Postcard::getCost() const {
	return 0.0;
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
double Postcard::setInsured(bool insured) {
	return 0.0;
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
double Postcard::setRush(bool rush) {
	return 0.0;
}

//***************************************************************************
// Function:		read
//
// Description:	Input from the stream and calling read function
//
// Parameters:	rcIn		- the stream to read in from
//
// Returned:		bVal		- true or false
//***************************************************************************
bool Postcard::read(istream& rcIn) {
	bool bVal = true;

	Parcel::read(rcIn);

	rcIn >> mMessage;

	return bVal;
}

//***************************************************************************
// Function:		print
//
// Description:	Print Postcard to ostream
//
// Parameters:	rcOut		- the stream to print to
//
// Returned:	none
//***************************************************************************
void Postcard::print(ostream& rcOut) const {
	
	Parcel::print(rcOut); 

	rcOut << "\t" << mMessage; 
}
