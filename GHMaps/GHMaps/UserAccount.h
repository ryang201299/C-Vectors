#include <iostream>
#include <vector>

#include "Page.h"

using namespace std;

class UserAccount {
public:
	string userName;
	vector<Page> likedPages;

	UserAccount(string newName) {
		userName = newName;
	}

	void followAccount(Page*);
	void unfollowAccount(Page*);
	void followedAccounts();
};
