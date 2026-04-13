#pragma once
#include <cstring>
#include <string>
class PersonData
{
private:
	char lastName[31];
	char firstName[31];
	char address[31];
	char city[31];
	char state[31];
	char zip[11];
	char phone[13];

public:
	//Default Constructor
	PersonData()
	{
		lastName[0] = '\0';
		firstName[0] = '\0'; 
		address[0] = '\0';
		city[0] = '\0';
		state[0] = '\0';
		zip[0] = '\0';
		phone[0] = '\0';
	}
	//Argument Constructor
	PersonData(const char* ln, const char* fn, const char* a, const char* c, const char* s, const char* z, const char* p)
	{
		strcpy_s(lastName, sizeof(lastName), ln);
		strcpy_s(firstName, sizeof(firstName), fn);	
		strcpy_s(address, sizeof(address), a);
		strcpy_s(city, sizeof(city), c);
		strcpy_s(state, sizeof(state), s);
		strcpy_s(zip, sizeof(zip), z);
		strcpy_s(phone, sizeof(phone), p);
	}

	// Setters
	//-----------------------------------------------------------------------
	// PreCondition: n (string) must be less than or equal to 30 characters
	// PostCondition: sets the last name of the person
	void setLastName(const char* n)
	{
		strcpy_s(lastName, sizeof(lastName), n);
	}

	// PreCondition: n (string) must be less than or equal to 30 characters
	// PostCondition: sets the first name of the person
	void setFirstName(const char* n)
	{
		strcpy_s(firstName, sizeof(firstName), n);
	}

	// PreCondition: a (string) must be less than or equal to 30 characters
	// PostCondition: sets the address of the person
	void setAddress(const char* a)
	{
		strcpy_s(address, sizeof(address), a);
	}

	// PreCondition: c (string) must be less than or equal to 30 characters
	// PostCondition: sets the city of the person
	void setCity(const char* c)
	{
		strcpy_s(city, sizeof(city), c);
	}

	// PreCondition: s (string) must be less than or equal to 30 characters
	// PostCondition: sets the state of the person
	void setState(const char* s)
	{
		strcpy_s(state, sizeof(state), s);
	}

	// PreCondition: z (string) must be less than or equal to 10 characters
	// PostCondition: sets the zip code of the person
	void setZip(const char* z)
	{
		strcpy_s(zip, sizeof(zip), z);
	}

	// PreCondition: p (string) must be less than or equal to 12 characters
	// PostCondition: sets the phone number of the person
	void setPhone(const char* p)
	{
		strcpy_s(phone, sizeof(phone), p);
	}
	//----------------------------------------------------------------------

	// Getters
	// --------------------------------------------------------------------
	// PostCondition: returns the last name of the person
	const char* getLastName()
	{
		return lastName;
	}

	// PostCondition: returns the first name of the person
	const char* getFirstName()
	{
		return firstName;
	}

	// PostCondition: returns the address of the person
	const char* getAddress()
	{
		return address;
	}

	// PostCondition: returns the city of the person
	const char* getCity()
	{
		return city;
	}

	// PostCondition: returns the state of the person	
	const char* getState()
	{
		return state;
	}

	// PostCondition: returns the zip code of the person
	const char* getZip()
	{
		return zip;
	}

	// PostCondition: returns the phone number of the person
	const char* getPhone()
	{
		return phone;
	}
};
// --------------------------------------------------------------------
