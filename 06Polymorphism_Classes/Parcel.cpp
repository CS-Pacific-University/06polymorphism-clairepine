//***************************************************************************
// File name:		Parcel.cpp
// Author:			Claire Pine
// Date:				5/1/2021
// Class:				CS 250
// Assignment:	Polymorphism
// Purpose:			Parent class for letter, postcard, overnight.
//***************************************************************************

#include "Parcel.h"
#include <iostream>

//***************************************************************************
// Constructor:	Parcel
//
// Description:	Initialize the name with the parameter string
//
// Parameters:
//
// Returned:		none
//***************************************************************************
Parcel::Parcel() {

}

//***************************************************************************
// Function:		getWeight
//
// Description:	Returns the weight of the package
//
// Parameters:	none
//
// Returned:		mWeight
//***************************************************************************
int Parcel::getWeight() const {

	return mWeight;
}

//***************************************************************************
// Function:		getDistance
//
// Description:	Returns the distance between the To and From address
//
// Parameters:	none
//
// Returned:		mDistance
//***************************************************************************
int Parcel::getDistance() const {
	return 0;
}

//***************************************************************************
// Function:		getInsured
//
// Description:	Determines whether or not the package is insured
//
// Parameters:	none
//
// Returned:		mbInsured
//***************************************************************************
bool Parcel::getInsured() const {
	return false;
}

//***************************************************************************
// Function:		getRush
//
// Description:	Determines whether or not the parcel has a rush delivery
//
// Parameters:	none
//
// Returned:		mbRush
//***************************************************************************
bool Parcel::getRush() const {
	return false;
}

//***************************************************************************
// Function:		getTid
//
// Description:	Gets the tracking id for the parcel
//
// Parameters:	none
//
// Returned:		mTrackingId
//***************************************************************************
int Parcel::getTid() const {
	return 0;
}

//***************************************************************************
// Function:		setCost
//
// Description:	Cost of the parcel to ship
//
// Parameters:	cost			-cost of package
//
// Returned:		none
//***************************************************************************
void Parcel::setCost(double cost) {
}

//***************************************************************************
// Function:		read
//
// Description:	Input from the stream to Parcel
//
// Parameters:	rcIn		-the stream to read in from
//
// Returned:		bVal		-if the data is correct or not
//***************************************************************************
bool Parcel::read(istream& rcIn) {
	return false;
}

//***************************************************************************
// Function:		print
//
// Description:	Output the Parcel to the stream
//
// Parameters:	rcOut		-the stream to output to
//
// Returned:		none
//***************************************************************************
void Parcel::print(ostream& rcOut) const {
}

//***************************************************************************
// Function:		getCost
//
// Description:	Returns the cost of the Package
//
// Parameters:	none
//
// Returned:		mCost
//***************************************************************************
double Parcel::getCost() const {
	return 0.0;
}

//***************************************************************************
// Function:		getDeliveryDay
//
// Description:	Returns the date for expected delivery
//
// Parameters:	none
//
// Returned:		date
//***************************************************************************
int Parcel::getDeliveryDay() const {
	return 0;
}
