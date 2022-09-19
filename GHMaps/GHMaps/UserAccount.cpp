#include <iostream>
#include <algorithm>

#include "UserAccount.h"

using namespace std;

void UserAccount::followAccount(Page* page) {
	likedPages.push_back(page);
}

void UserAccount::unfollowAccount(Page* page) {
	likedPages.erase(std::remove(likedPages.begin(), likedPages.end(), page), likedPages.end());
}

void UserAccount::followedAccounts() {
	cout << userName << " followed accounts: ";
	for (int i = 0; i < likedPages.size(); i++) {
		if (i != 0) {
			cout << ", ";
		}
		cout << likedPages[i]->pageName;
	}
}