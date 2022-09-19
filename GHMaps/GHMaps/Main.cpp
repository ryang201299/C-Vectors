#include <iostream>
#include "UserAccount.h"

using namespace std;

int main() {
	// shared pointers used over unique pointers, as storing values in a vector, requires making copies, and copies cannot be made of a unique pointer.

	shared_ptr<Page> F1 = make_unique<Page>("F1", "5M");
	shared_ptr<Page> Golf = make_unique<Page>("Golf", "2.gM");
	shared_ptr<Page> Modelling = make_unique<Page>("Modelling", "10M");

	shared_ptr<UserAccount> RyanG = make_unique<UserAccount>("Ryan Gorman");
	shared_ptr<UserAccount> AlexB = make_unique<UserAccount>("Alex Bond");

	RyanG->followAccount(Golf);
	RyanG->followAccount(F1);

	AlexB->followAccount(Modelling);

	RyanG->followedAccounts();

	AlexB->followedAccounts();
}