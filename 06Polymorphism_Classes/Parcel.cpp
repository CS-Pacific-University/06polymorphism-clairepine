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
// Description:	Default constructor
//
// Parameters:	none
//
// Returned:		none
//***************************************************************************
Parcel::Parcel() {
	const int ZERO = 0;

	mTrackingId = ZERO;
	mTo = "";
	mFrom = "";

	mWeight = ZERO;
	mDistance = ZERO;

	mCost = ZERO;

	mbInsured = false;
	mbRush = false;
	mbDelivered = false;

}

//***************************************************************************
// Constructor:	Parcel
//
// Description:	Initialize the name with the parameter string
//
// Parameters:	trackingId		-tracking int
//							to						-inital address
//							from					-final address
//							weight				-weight of package
//							distance			-distance the package is traveling
//							cost					-cost of shipment 
//
// Returned:		none
//***************************************************************************
Parcel::Parcel(int trackingId, std::string to, std::string from,
							int weight, int distance, double cost) {

	mTrackingId = trackingId;
	mTo = to;
	mFrom = from;

	mWeight = weight;
	mDistance = distance;

	mCost = cost;

	mbInsured = false;
	mbRush = false;
	mbDelivered = false;

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

	return mDistance;
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

	return mbInsured;
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

	return mbRush;
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

	return mTrackingId; 
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

	mCost = cost;
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
	bool bVal = true;

	rcIn >> mTrackingId;
	rcIn >> mTo;
	rcIn >> mFrom;

	rcIn >> mWeight;
	rcIn >> mDistance;

	rcIn >> mCost;

	return bVal;
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

	rcOut << "TID: " << mTrackingId << "\t" << "From: " << mFrom << "\t"
		<< "To: " << mTo;
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

	return mCost;
}

//***************************************************************************
// Function:		getDeliveryDay
//
// Description:	Returns the number of days for delivery
//
// Parameters:	none
//
// Returned:		0
//***************************************************************************
int Parcel::getDeliveryDay() const {

	return 0;
}
