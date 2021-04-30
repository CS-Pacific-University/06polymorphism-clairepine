//*****************************************************************************
// File name:		Postcard.h
// Author:			Claire Pine
// Date:				5/1/2021
// Class:				CS 250
// Assignment:	Parcel
// Purpose:			Class for shipping a postcard
//*****************************************************************************
#pragma once

#include "Parcel.h"
#include <iostream>

using namespace std;

class Postcard : public Parcel {
	public:
		Postcard();

		virtual int getDeliveryDate() const;
		virtual double getCost() const;

		virtual double setInsured(bool insured);
		virtual double setRush(bool rush);

		virtual bool read(istream& rcIn);
		virtual void print(ostream& rcOut) const; 

	private:
		string mMessage;

};