#pragma once

class Deck
{
private:
	char series[10];

public:
	void sequence();
	Deck();
	Deck(int k,char serieS[10]); //k-number of cards 
	void draw();
	void swap();
	void suit_cout();
	void rank_count();

};


 