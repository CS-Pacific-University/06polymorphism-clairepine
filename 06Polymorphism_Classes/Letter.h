//***************************************************************************
// File name:		Letter.h
// Author:			Claire Pine
// Date:				5/1/2021
// Class:				CS 250
// Assignment:	Polymorphism
// Purpose:			Class for shipping a letter
//***************************************************************************
#pragma once

#include "Parcel.h";
#include <iostream>

using namespace std;

class Letter : public Parcel {
	public:
		Letter();

		virtual int getDeliveryDay() const;

		virtual double setInsured(bool insured);
		virtual double setRush(bool rush);
		
		virtual bool read(istream& rcIn);
	
};
