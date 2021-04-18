#include "card.h"
#include <iostream>

Card::Card()
{

}

Card::Card(Suit suit, Value value, char serialNumber)
{
	this->suit = suit;
	this->value = value;
	this->serialNumber = serialNumber;
}

void Card::displayCard(const Card&)
{

}
