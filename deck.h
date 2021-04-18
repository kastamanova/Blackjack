#ifndef DECK_H
#define DECK_H

class Deck
{
private:
	char series[10];
	Card cards[52];

public:
	void sequence();
	Deck();
	Deck(int k,char serieS[10]); //k-number of cards 
	~Deck();
	void random();
	void draw();
	void swap();
	void suit_cout();
	void rank_count();

};
#endif
 
