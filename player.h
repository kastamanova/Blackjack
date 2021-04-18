#pragma once


class Player
{
private:
	char* name;
	int age;
	int wins;
	double CW; //cw- coefficient of wins
	int CP; // cp - current points
public:
	Player();
	Player(char* name, int age, int wins, double CW, int CP);
	char* getName() const;
	int getAge();
	double geyCW();
	int CP();


};