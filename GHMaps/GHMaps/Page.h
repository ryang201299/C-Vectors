#include <iostream>

using namespace std;

class Page {
public:
	string pageName;
	double followers;
	Page(string newPageName, double newFollowers) {
		pageName = newPageName;
		followers = newFollowers;
	}
};
