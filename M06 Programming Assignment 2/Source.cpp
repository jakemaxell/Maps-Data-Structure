// M06 States
// Author: Jacob Maxwell
// Date last updated: 03/01/2019
// Purpose: To use the concepts of maps to organize and retrieve state information
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {

	string choice, yesno = "y";

	map<string, string> states;
	map<string, string>::iterator statesIT;

	states["AL"] = "Alabama, Gov. Kay Ivey";
	states["AK"] = "Alaska, Gov. Mike Dunleavy";
	states["AZ"] = "Arizona, Gov. Doug Ducey";
	states["AR"] = "Arkansas, Gov. Asa Hutchinson";
	states["CA"] = "California, Gov. Gavin Newsom";
	states["CO"] = "Colorado, Gov. Jared Polis";
	states["CT"] = "Connecticut, Gov. Ned Lamont";
	states["DE"] = "Delaware, Gov. John Carney";
	states["FL"] = "Florida, Gov. Ron DeSantis";
	states["GA"] = "Georgia, Gov. Brian Kemp";
	states["HI"] = "Hawaii, Gov. David Ige";
	states["ID"] = "Idaho, Gov. Brad Little";
	states["IL"] = "Illinois, Gov. JB Pritzker";
	states["IN"] = "Indiana, Gov. Eric Holcomb";
	states["IA"] = "Iowa, Gov. Kim Reynolds";
	states["KS"] = "Kansas, Gov. Laura Kelly";
	states["KY"] = "Kentucky, Gov. Matt Bevin";
	states["LA"] = "Louisiana, Gov. John Bel Edwards";
	states["ME"] = "Maine, Gov. Janet Mills";
	states["MD"] = "Maryland, Gov. Larry Hogan";
	states["MA"] = "Massachusetts, Gov. Charlie Baker";
	states["MI"] = "Michigan, Gov. Gretchen Whitmer";
	states["MN"] = "Minnesota, Gov. Tim Walz";
	states["MS"] = "Mississippi, Gov. Phil Bryant";
	states["MO"] = "Missouri, Gov. Mike Parson";
	states["MT"] = "Montana, Gov. Steve Bullock";
	states["NE"] = "Nebraska, Gov. Pete Ricketts";
	states["NV"] = "Nevada, Gov. Steve Sisolak";
	states["NH"] = "New Hampshire, Gov. Chris Sununu";
	states["NJ"] = "New Jersey, Gov. Phil Murphy";
	states["NM"] = "New Mexico, Gov. Michelle Lujan Grisham";
	states["NY"] = "New York, Gov. Andrew Cuomo";
	states["NC"] = "North Carolina, Gov. Roy Cooper";
	states["ND"] = "North Dakota, Gov. Doug Burgum";
	states["OH"] = "Ohio, Gov. Mike DeWine";
	states["OK"] = "Oklahoma, Gov. Kevin Stitt";
	states["OR"] = "Oregon, Gov. Kate Brown";
	states["PA"] = "Pennsylvania, Gov. Tom Wolf";
	states["RI"] = "Rhode Island, Gov. Gina Raimondo";
	states["SC"] = "South Carolina, Gov. Henry McMaster";
	states["SD"] = "South Dakota, Gov. Kristi Noem";
	states["TN"] = "Tennessee, Gov. Bill Lee";
	states["TX"] = "Texas, Gov. Greg Abbott";
	states["UT"] = "Utah, Gov. Gary Herbert";
	states["VT"] = "Vermont, Gov. Phil Scott";
	states["VA"] = "Virginia, Gov. Ralph Northam";
	states["WA"] = "Washington, Gov. Jay Inslee";
	states["WV"] = "West Virginia, Gov. Jim Justice";
	states["WI"] = "Wisconsin, Gov. Tony Evers";
	states["WY"] = "Wyoming, Gov. Mark Gordon";

	do {
		system("cls");

		cout << "Please refer to states by their capital abbreviations" << endl;
		cout << "What state would you like to look up?: ";
		cin >> choice;

		for (statesIT = states.begin(); statesIT != states.end(); ++statesIT) {
			if (choice == (*statesIT).first) {
				cout << (*statesIT).first << ": " << (*statesIT).second << endl;
			}
		}

		cout << "Would you like to look up another state? (y or n): ";
		cin >> yesno;

	} while (yesno == "Y" || yesno == "y");

	system("pause");
	return 0;
}