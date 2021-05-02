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
Postcard::Postcard() : Parcel (), mMessage("") {

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
// Function:		getCost
//
// Description:	Determines the cost of shipping a postcard
//
// Parameters:	none
//
// Returned:		cost
//***************************************************************************
double Postcard::getCost() const {

	return Parcel::getCost(); 
}

//***************************************************************************
// Function:		setInsured
//
// Description:	Sets the insurance price for a postcard
//
// Parameters:	insured		- if it's insured or not
//
// Returned:		postcardInsurance
//***************************************************************************
double Postcard::setInsured(bool insured) {
	const double POSTCARD_INSURANCE = 0.15;
	const int ZERO = 0;

	double postcardInsurance = 0.0;

	if (insured) {
		postcardInsurance = ZERO;
	}

	if (!insured) {
		postcardInsurance = POSTCARD_INSURANCE;
		mbInsured = true;
	}

	setCost(Parcel::getCost() + postcardInsurance);

	return postcardInsurance;
}

//***************************************************************************
// Function:		setRush
//
// Description:	Sets the rush price for a postcard
//
// Parameters:	rush		- if it has rush delivery or not
//
// Returned:		rushPrice
//***************************************************************************
double Postcard::setRush(bool rush) {
	const double RUSH_PRICE = 0.25;
	const int ZERO = 0;

	double cost = getCost();
	double rushPrice;

	if (rush) {
		rushPrice = ZERO;
	}

	if (!rush) {
		rushPrice = RUSH_PRICE;
		cost += rushPrice;
		setCost(cost);
		mbRush = true;
	}

	setCost(Parcel::getCost() + rushPrice);

	return rushPrice;
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
