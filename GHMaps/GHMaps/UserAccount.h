#include <iostream>
#include <vector>

#include "Page.h"

using namespace std;

class UserAccount {
public:
	string userName;
	vector<shared_ptr<Page>>likedPages;

	UserAccount(string newName) {
		userName = newName;
		cout << "\nAccount " << userName << " created." << endl;
	}

	~UserAccount() {
		cout << "\nAccount " << userName << " destroyed." << endl;
	}

	void followAccount(shared_ptr<Page>);
	void unfollowAccount(shared_ptr<Page>);
	void followedAccounts();
};
