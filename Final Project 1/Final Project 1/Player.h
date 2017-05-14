// Player.h - declarations for Player.h
//
#ifndef PLAYER_H_
#define PLAYER_H_

#include <string>

using namespace std;

class Player
{
private:
	string _firstName;
	string _lastName;
	int _number;

public:
	// default Player
	Player();
	// allow the caller to set up the player.  
	Player(string firstName, string lastName, int number);

	Player(Player* p);

	string getfirstName() const;  // return the song title
	string getlastName() const; // return the artist who performed the song
	int getNumber() const;  // return the genre of the song
};

#endif // PLAYER_H_