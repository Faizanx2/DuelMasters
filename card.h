#ifndef CARD_H_
#define CARD_H_

#include <string>
#include <vector>

class Card
{
private:
	int mana;
	int power;
	std::string isCreature;
	std::string civilization;
	std::string race;
	std::string name;
	std::string condition;
	
public:
	Card();
	~Card();
	void setCard(std::string _name,std::string _race,std::string _civilization,int _mana,int _power,std::string _isCreature,std::string _condition);

	int getMana();

	int getPower();

	std::string getCreature();

	std::string getCivilization();

	std::string getRace();

	std::string getName();

};

#endif //CARD_H_