
// File:     Person.h
//
// Author:   Giles Fernandes
// Modified: 2013 November 19
//
//



#ifndef _Person_
#define _Person_

#include <string>
#include <vector>

//#define DEFAULT_NAME = Kitty;

using namespace std;

class Person{

public:

Person();

~Person();

///**************Constructors************************

Person(string name);

///**************Accessors************************
const string getName();
	
const char getCharGender();

//const Date getbirthday();

const string getReligiousViews();
//POST: Returns religious views

const string getPoliticalViews();
//POST: Returns Political Views string

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

const string getcountry_residence(string country);
//POST: Returns country_residence string


///**************Mutators************************
void addName(string name);
	
void addGender(char g);
//POST: Stores gender as a bool

void addGender(bool g);
//POST: Stores gender as a bool

void addReligiousViews( string views);
//POST: Updates religious views

void addPoliticalViews( string views);
//POST: Updates Political Views string

void addOccupation( string job);
//POST: Updates occupation
	
void addCompany( string company);
//POST: Updates company name

void addRelationshipStatus( string status);
//POST: Updates relationship status

void addActivity( string activity);
//POST: Adds activity to the vector of activities

void addHighschool( string school);
//POST: Updates highschool string

void addhs_gradyear_( int year);
//POST: Update hs_gradyear

void adduniversity( string university);
//POST: Updates university string

void addtown( string town);
//POST: Updates town string

void addcountry_origin(string country);
//POST: Updates country_origin string

void addcountry_residence(string country);
//POST: Updates country_residence string

private:

	//Private helper functions
	//Include date checking functions here


	string name_;
	bool gender_;
	//Date birthday;
	string religious_views_;
	string political_views_;
	string occupation_;
	string company_;
	string relationship_status_;
	vector<string> activities_;
	string highschool_;
	int hs_gradyear_;
	string university_;
	string town_;
	string country_origin_;
	string country_residence_;

};
#endif
