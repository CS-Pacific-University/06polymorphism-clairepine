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
// Returned:		letterInsurance
//***************************************************************************
double Letter::setInsured(bool insured) {
	const double LETTER_INSURANCE = 0.45;
	const int ZERO = 0;

	double letterInsurance = 0.0; 

	if (insured) {
		letterInsurance = ZERO; 
	}

	if (!insured) {
		letterInsurance = LETTER_INSURANCE;
		mbInsured = true;
	}

	return letterInsurance;
}

//***************************************************************************
// Function:		setRush
//
// Description:	Sets the amount for having a rush for delivery day
//
// Parameters:	rush		-if it has rush delivery or not
//
// Returned:		rushPrice
//***************************************************************************
double Letter::setRush(bool rush) {
	const int TEN_PERCENT = 10;
	const int ZERO = 0;

	double cost = getCost();  
	double rushPrice = 0.0;

	if (rush) {
		rushPrice = ZERO;
	}

	if (!rush) {
		rushPrice = cost / TEN_PERCENT; 
		cost += rushPrice;
		setCost(cost);
		mbRush = true; 
	}

	return rushPrice;
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
