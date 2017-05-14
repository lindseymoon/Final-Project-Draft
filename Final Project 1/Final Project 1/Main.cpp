// main.cpp
//
// // compile with: c++ main.cpp Player.cpp Team.cpp
//
#include <string>
#include <iostream>

#include "Player.h"
#include "Team.h"

using namespace std;

int main()
{
	Team* newTeam = new Team("Team1");

	if (newTeam->size() == 0) {
		Player* player1 = new Player("Lindsey", "Moon", 13);
		newTeam->addPlayer(player1);
		delete player1;

		Player* player2 = new Player("Kelsey", "Segren", 7);
		newTeam->addPlayer(player2);
		delete player2;

		Player* player3 = new Player("Clint", "Dempsey", 2);
		newTeam->addPlayer(player3);
		delete player3;

		Player* player4 = new Player("Brad", "Evans", 3);
		newTeam->addPlayer(player4);
		delete player4;

		Player* player5 = new Player("Stefan", "Frei", 24);
		newTeam->addPlayer(player5);
		delete player5;

		Player* player6 = new Player("Nicolas", "Lodeiro", 10);
		newTeam->addPlayer(player6);
		delete player6;

		Player* player7 = new Player("Nouhou", "Tolo", 5);
		newTeam->addPlayer(player7);
		delete player7;

		Player* player8 = new Player("Roman", "Torres", 29);
		newTeam->addPlayer(player8);
		delete player8;

		Player* player9 = new Player("Henry", "Wingo", 23);
		newTeam->addPlayer(player9);
		delete player9;

		Player* player10 = new Player("David", "Ross", 9);
		newTeam->addPlayer(player10);
		delete player10;

		Player* player11 = new Player("Conor", "Dwyer", 19);
		newTeam->addPlayer(player11);
		delete player11;
	}
	else {
		// change the name of a player
		Player* p = newTeam->getPlayerByName("Lindsey");
	}
	delete newTeam;
}