#ifndef ACCESS_CARD_H
#define ACCESS_CARD_H

#include <string>
using namespace std;

class AccessCard {
private:
    string cardID;
    int accessLevel;
public:
    AccessCard(string cardID, int accessLevel);

    string getCardID() const;
    int getAccessLevel() const;

    void displayCardInfo() const;
};

#endif