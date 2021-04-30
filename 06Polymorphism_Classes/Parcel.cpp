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
// Function:
//
// Description:
//
// Parameters:
//
// Returned:
//***************************************************************************
int Parcel::getWeight() const {
	return 0;
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
int Parcel::getDistance() const {
	return 0;
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
bool Parcel::getInsured() const {
	return false;
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
bool Parcel::getRush() const {
	return false;
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
int Parcel::getTid() const {
	return 0;
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
void Parcel::setCost(double cost) {
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
bool Parcel::read(istream& rcIn) {
	return false;
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
void Parcel::print(ostream& rcOut) const {
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
double Parcel::getCost() const {
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
int Parcel::getDeliveryDay() const {
	return 0;
}
