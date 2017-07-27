#include<cstdio>
#include<iostream>

#include "Hand.h"
/*class Hand
*/
	Hand::Hand()
	{
	}

	Hand::~Hand()
	{

	}
	
	void Hand::removeCard(int x)
	{
		
	}
	std::vector<Card> Hand::getHand()
	{
		return hand;
	}
	void Hand::addToHand(Card c)
	{
		hand.push_back(c);
	}