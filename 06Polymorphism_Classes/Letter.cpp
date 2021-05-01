//***************************************************************************
// File name:		Letter.cpp
// Author:			Claire Pine
// Date:				5/1/2021
// Class:				CS 250
// Assignment:	Polymorphism
// Purpose:			Class for shipping a letter
//***************************************************************************

#include "Letter.h"

//***************************************************************************
// Constructor:	Letter
//
// Description:	Call the Parcel default constructor, initialize the variables
//							with parameters
//
// Parameters:	none
//
// Returned:		none
//***************************************************************************
Letter::Letter() : Parcel() {

}

//***************************************************************************
// Function:		getDeliveryDay
//
// Description:	Gets the expected delivery date for the letter.
//
// Parameters:	none
//
// Returned:		deliveryDay
//***************************************************************************
int Letter::getDeliveryDay() const {
	const int MILES = 100;
	const int ONE = 1;

	int deliveryDay = 0;
	int distance = getDistance(); 
	bool bRush = getRush(); 
	
	deliveryDay = distance / MILES;

	if (distance % MILES != 0) {
		deliveryDay++;
	}

	if (bRush == true) {
		deliveryDay -= ONE; 
	}

	if (deliveryDay < ONE) {
		deliveryDay = ONE; 
	}

	return deliveryDay;
}

//***************************************************************************
// Function:		setInsured
//
// Description:	Sets the amount for having the letter insured
//
// Parameters:	insured		-if insured or not
//
// Returned:		
//***************************************************************************
double Letter::setInsured(bool insured) {
	return 0.0;
}

//***************************************************************************
// Function:		setRush
//
// Description:	Sets the amount for having a rush for delivery day
//
// Parameters:	rush		-if it has rush delivery or not
//
// Returned:
//***************************************************************************
double Letter::setRush(bool rush) {
	return 0.0;
}

//***************************************************************************
// Function:		read
//
// Description:	Calls read from Parcel
//
// Parameters:	rcIn		- the stream to read in from
//
// Returned:		bVal		- true or false
//***************************************************************************
bool Letter::read(istream& rcIn) {
	bool bVal = true;

	Parcel::read(rcIn);

	return bVal;
}
