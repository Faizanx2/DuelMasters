#include<cstdio>
#include<iostream>
#include<string>

#include "card.h"
#include <stddef.h>

Card::Card()
{
	
}

Card::~Card()
{

}
	void Card::setCard(std::string _name,std::string _race,std::string _civilization,int _mana,int _power,std::string _isCreature,std::string _condition)
	{
		mana = _mana;
		power = _power;
		isCreature	 = _isCreature;
		civilization = _civilization;
		race = _race;
		name = _name;
		condition = _condition;

	};
	int Card::getMana()
	{
		return mana;
	};
	int Card::getPower()
	{
		return power;
	};
	std::string Card::getCreature()
	{
		return isCreature;
	};
	std::string Card::getCivilization()
	{
		return civilization;
	};
	std::string Card::getRace()
	{
		return race;
	};
	std::string Card::getName()
	{
		return name;
	};
