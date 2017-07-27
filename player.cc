#include<cstdio>
#include<iostream>
#include "player.h"
	
	Player::Player()
	{
		shield = new Shield();
		deck   = new Deck();
		hand   = new Hand();
		name = "Player0";
	};
	
	Player::Player(std::string _name)
	{
		shield = new Shield();
		deck   = new Deck();
		hand   = new Hand();
		name = _name;
	};
	Player::~Player()
	{

	};
	void Player::Summon()
	{

	}
	std::vector<Card> Player::getBattleZone()
	{

	}
	Shield* Player::getShield()
	{
		return shield;
	}

	std::string Player::getName()
	{
		return name;
	}
	int Player::getManaCount()
	{
		return mana;
	}
	void Player::addMana()
	{
		mana+1;
	}
	Hand* Player::getHand()
	{
		return hand;
	}
	void Player::printBattleZone()
	{
		std::vector<Card> v= hand->getHand();
			for (std::vector<Card>::iterator i = v.begin(); i != v.end(); ++i)
			{
				std::string name=i->getCreature();
				int mana=i->getMana();
				int power=i->getPower();
				std::cout<<" ("<<name<<" ,"<<mana<<" ,"<<power<<") ";
			}
			std::cout<<std::endl;
	}