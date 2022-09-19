#include <iostream>
#include "UserAccount.h"

using namespace std;

int main() {
	Page* F1 = new Page("F1", "5M");
	Page* Golf = new Page("Golf", "2.5M");
	Page* Modelling = new Page("Modelling", "10M");

	UserAccount* RyanG = new UserAccount("Ryan Gorman");
	UserAccount* AlexB = new UserAccount("Alex Bond");

	RyanG->followAccount(Golf);
	RyanG->followAccount(F1);

	AlexB->followAccount(Modelling);

	RyanG->followedAccounts();
}