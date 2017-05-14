// Player.cpp
//
#include <string>
#include "Player.h"

using namespace std;

Player::Player()
{
	_firstName = " ";
	_lastName = " ";
	_number = 0;
}

Player::Player(string firstName, string lastName, int number)
{
	_firstName = firstName;
	_lastName = lastName;
	_number = number;
}

Player::Player(Player* p)
{
	if (p != NULL)
	{
		_firstName = p->getfirstName();
		_lastName = p->getlastName();
		_number = p->getNumber();
	}
}

string Player::getfirstName() const
{
	return _firstName;
}

string Player::getlastName() const
{
	return _lastName;
}

int Player::getNumber() const
{
	return _number;
}