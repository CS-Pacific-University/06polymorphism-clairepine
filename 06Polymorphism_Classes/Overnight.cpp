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
// Description:	Sets the price for overnight insurance
//
// Parameters:	insured		- if insured or not
//
// Returned:		overnightInsurance
//***************************************************************************
double Overnight::setInsured(bool insured) {
	const double OVERNIGHT_INSURANCE = 0.25;
	const int ZERO = 0;

	double cost = getCost(); 
	double overnightInsurance = 0.0;

	if (insured) {
		overnightInsurance = ZERO;
	}

	if (!insured) {
		overnightInsurance = cost * OVERNIGHT_INSURANCE;
		mbInsured = true;
	}

	setCost(Parcel::getCost() + overnightInsurance);

	return overnightInsurance;
}

//***************************************************************************
// Function:		setRush
//
// Description:	Sets the price for an overnight rush
//
// Parameters:	rush		- if the package is rushed or not
//
// Returned:		rushPrice
//***************************************************************************
double Overnight::setRush(bool rush) {
	const double RUSH_PRICE = 0.75;
	const int ZERO = 0;

	double cost = getCost();
	double rushPrice;

	if (rush) {
		rushPrice = ZERO;
	}

	if (!rush) {
		rushPrice = cost * RUSH_PRICE;
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
