#pragma once
#include "PersonData.h"
class CustomerData : 
	public PersonData
{
	private:
	int customerNumber;
	bool mailingList;

public:
	//Default Constructor
	CustomerData()
	{
		customerNumber = 0;
		mailingList = false;
	}

	//Argument Constructor
	CustomerData(const char* ln,const char* fn, const char* a, const char* c, const char* s, const char* z, const char* p, int cn, bool ml) : PersonData(ln, fn, a, c, s, z, p)
	{
		customerNumber = cn;
		mailingList = ml;
	}

	//Setters
	//----------------------------------------------------------------------
	// PreCondition: cn (integer) must be greater than 0
	// PostCondition: sets the customer number
	void setCustomerNumber(int cn)
	{
		customerNumber = cn;
	}

	// PreCondition: mail (boolean true or false)
	// PostCondition: sets the mailing list status of the customer
	void setMailingList(bool mail)
	{
		mailingList = mail;
	}
	
	//Getters

	// PostCondition: returns the customer number
	int getCustomerNumber() const
	{
		return customerNumber;
	}

	// PostCondition: returns the mailing list status of the customer
	bool getMailingList() const
	{
		return mailingList;
	}
};

