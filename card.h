#pragma once


enum class Suit { spade, diamnod, heart, club};
enum class Value { 2, 3, 4, 5, 6, 7, 8, 9, 10, J, Q, K, A };


class Card 
{
private:
	Suit suit;
	Value value;
	char serialNumber[15];
public:
	Card();
	Card ( Suit suit , Value value , char serialNumber)
};
#endif