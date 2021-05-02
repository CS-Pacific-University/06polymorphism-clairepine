//***************************************************************************
// File name:		Postcard.cpp
// Author:			Claire Pine
// Date:				5/1/2021
// Class:				CS 250
// Assignment:	Polymorphism
// Purpose:			Class for overnight shipping
//***************************************************************************
#include "Overnight.h"
#include <iostream>

//***************************************************************************
// Constructor:	Overnight
//
// Description:	Call the Parcel default constructor, initialize the variables 
//							with parameters
//
// Parameters:	none
//
// Returned:		none
//***************************************************************************
Overnight::Overnight() : Parcel (), mVolume (0) {

}

//***************************************************************************
// Function:		getDeliveryDay
//
// Description:	Gets expected delivery day for overnight shipping
//
// Parameters:	none
//
// Returned:		deliveryDay
//***************************************************************************
int Overnight::getDeliveryDay() const {
	const int MILES = 1000;
	const int ONE = 1;
	const int TWO = 2;

	int deliveryDay = 0;
	int distance = getDistance();
	bool bRush = getRush();

	if (distance <= MILES) {
		deliveryDay = ONE;
	}

	if (distance > MILES) {
		deliveryDay = TWO;
	}

	if (bRush == true) {
		deliveryDay = ONE;
	}

	return deliveryDay;
}

//***************************************************************************
// Function:		setInsured
//
// Description:	
//
// Parameters:
//
// Returned:
//***************************************************************************
double Overnight::setInsured(bool insured) {
	return 0.0;
}

//***************************************************************************
// Function:		setRush
//
// Description:
//
// Parameters:
//
// Returned:
//***************************************************************************
double Overnight::setRush(bool rush) {
	return 0.0;
}

//***************************************************************************
// Function:		read
//
// Description:	Input from the stream and calling read function
//
// Parameters:	rcIn		- the stream to read in from
//
// Returned:		bVal		- true or false (valid input)
//***************************************************************************
bool Overnight::read(istream& rcIn) {
	bool bVal = true;

	Parcel::read(rcIn);

	rcIn >> mVolume;

	return bVal;
}

//***************************************************************************
// Function:		print
//
// Description:	Calls the print function and prints overnight information
//							to the stream
//
// Parameters:	rcOut		- the stream to print to
//
// Returned:		none
//***************************************************************************
void Overnight::print(ostream& rcOut) const {

	Parcel::print(rcOut); 

	rcOut << "\t" << "OVERNIGHT!";

}
