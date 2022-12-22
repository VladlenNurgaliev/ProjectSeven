#include <iostream>
#include "pugixml.hpp"
using namespace std;



int main()
{
	pugi::xml_document			doc;
	pugi::xml_parse_result		result = doc.load_file("C:\\Users\\User\\source\\repos\\Lesson_Continie_3\\Leeson_continie_4\\File C++.xml");
	
	if (result.status == pugi::status_file_not_found)
	{
		cerr << "ERROR" << endl;
		exit(1);
	}

	string element1 = doc.child("root").child("one").text().as_string();
	string element2 = doc.child("root").child("two").text().as_string();
	string element3 = doc.child("root").child("three").text().as_string();

	cout << element1 << endl;
	cout << element2 << endl;
	cout << element3 << endl;
	


	return 0;
}