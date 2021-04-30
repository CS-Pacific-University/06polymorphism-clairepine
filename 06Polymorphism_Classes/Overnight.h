//***************************************************************************
// File name:		Postcard.h
// Author:			Claire Pine
// Date:				5/1/2021
// Class:				CS 250
// Assignment:	Polymorphism
// Purpose:			Class for overnight shipping
//***************************************************************************
#pragma once

#include "Parcel.h"
#include <iostream>

using namespace std;

class Overnight : public Parcel {
	public:
		Overnight();

		virtual int getDeliveryDay() const;

		virtual double setInsured(bool insured);
		virtual double setRush(bool rush);

		virtual bool read(istream& rcIn);
		virtual void print(ostream& rcOut) const;

	private:
		int mVolume;
};