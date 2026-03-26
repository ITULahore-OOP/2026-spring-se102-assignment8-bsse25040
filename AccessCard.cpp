#include "AccessCard.h"
#include <iostream>

//constructor:
AccessCard::AccessCard(string cardID, int accessLevel) : cardID(cardID), accessLevel(accessLevel) {}

//getters
string AccessCard::getCardID() const { return cardID; }
int AccessCard::getAccessLevel() const { return accessLevel; }

//display
void AccessCard::displayCardInfo() const {
    cout << "Card ID: " << cardID << ", Access Level: " << accessLevel << endl;
}