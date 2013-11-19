// File:     Person.cpp
//
// Author:   Giles Fernandes
// SID:      51092096
// UserID:   u7q7
// Lab:      L1A
// Modified: 2013 November 19
//
//


#include "Person.h"

#include <string>
#include <vector>

using namespace std;

Person::Person()
//POST: Add person with a default name
{

	//name_ = DEFAULT_NAME;
}

Person::Person(string name)
//
{
	name_ = name;
}

///**************Accessors************************
const string Person::getName()
//POST: Returns name
{
	return name_;
}

const char Person::getCharGender()

{
	if( gender_)
		return 'M';
	else
		return 'F';

}

const string Person::getReligiousViews()
//POST: Returns religious views
{
	return religious_views_;
}

const string Person::getPoliticalViews()
//POST: Returns Political Views string
{
	return political_views_;
}

const string getOccupation( string job);
//POST: Returns occupation
	
const string getCompany( string company);
//POST: Returns company name

const string getRelationshipStatus( string status);
//POST: Returns relationship status

const string getActivity( string activity);
//POST: Returns activity to the vector of activities

const string getHighschool( string school);
//POST: Returns highschool string

const int geths_gradyear_( int year);
//POST: Returns hs_gradyear

const string getuniversity( string university);
//POST: Returns university string

const string gettown( string town);
//POST: Returns town string

const string getcountry_origin(string country);
//POST: Returns country_origin string


