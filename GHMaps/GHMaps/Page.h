#include <iostream>

using namespace std;

class Page {
public:
	string pageName;
	string followers;
	Page(string newPageName, string newFollowers) {
		pageName = newPageName;
		followers = newFollowers;
		cout << "\nPage " << pageName << " created." << endl;
	}

	~Page() {
		cout << "Page " << pageName << " destroyed." << endl;
	}
};
