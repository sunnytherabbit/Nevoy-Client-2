// MANUAL
#include "AccountInformation.h"

#include "../../Utils/Logger.h"

AccountInformation::AccountInformation(std::string authTok, unsigned int serial) : isGuest(false), authToken(authTok), serialNum(serial){};
AccountInformation::AccountInformation() : isGuest(true), authToken("none"){};

bool AccountInformation::verify() {
	if (isGuest)
		return true;
	if (authToken.size() < 10)
		return false;
	if (didVerify)
		return isValid;
	didVerify = true;

	// Oderso does not use Horion's online auth; skip the network verification.
	logF("Account verification stubbed (guest=%d)", isGuest);
	isValid = true;
	return true;
};

AccountInformation AccountInformation::fromToken(std::string authToken, unsigned int serial) {
	auto acc = AccountInformation(authToken, serial);
	return acc;
}

AccountInformation AccountInformation::asGuest() {
	return AccountInformation();
}
