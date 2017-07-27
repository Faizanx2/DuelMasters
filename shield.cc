#include <stddef.h>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<string>
#include<iostream>
#include<fstream>

#include <algorithm>
#include <random>
#include <sstream>

#include "shield.h"
#include <string>

	Shield::Shield()
	{

	};
	Shield::~Shield()
	{

	};
	Card Shield::breakShield()
{	
	shieldCount -1;
	int x=shields.size();
	Card a = shields[x-1];
	shields.pop_back();

	return a;
}
	void Shield::addShield(Card _card)
	{
		shields.push_back(_card);
	};
	int Shield::getShieldCount()
	{
		return shieldCount;
	}