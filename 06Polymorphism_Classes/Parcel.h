//***************************************************************************
// File name:		Parcel.h
// Author:			Claire Pine
// Date:				5/1/2021
// Class:				CS 250
// Assignment:	Polymorphism
// Purpose:			The parent class for letter, postcard and overnight
//***************************************************************************
#pragma once

#include <iostream>

using namespace std;

class Parcel {
	public:
		Parcel(); 
		Parcel (int trackingId, string to, string from, int weight, int distance,
						double cost);
		int getWeight() const;
		int getDistance() const;
		bool getInsured() const;
		bool getRush() const;
		bool isMatch(int) const; 
		int getTid() const;

		void setCost(double cost);

		virtual bool read(istream& rcIn);
		virtual void print(ostream& rcOut) const;

		virtual double getCost() const;
		virtual double setInsured(bool insured); 
		virtual double setRush(bool rush); 
		virtual int getDeliveryDay() const;

	private:
		int mTrackingId;
		string mTo, mFrom;

		int mWeight;
		int mDistance;

		double mCost;

	protected:
		bool mbInsured;
		bool mbRush;
		bool mbDelivered;
};
