#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include "Fight_Lib.h"
#include <time.h>
#include <Windows.h>

using namespace std;

int main()
{
	int gamestate = 0, player_hp, enemy_hp, player_attack = 4, enemy_attack = 4, player_crit, enemy_crit, player_dmg[2] = {0, 0}, enemy_dmg[2] = {0, 0}, cheat_hp = 0, cheat_crit = 0;

	srand(time(NULL));
	
	while (gamestate != 2) //gamestate 0 - меню, gamestate 1 - начало игры, gamestate 2 - выход, gamestate 3 - игра, 4 - окончание.
	{
		player_hp = 10;
		enemy_hp = 10;

		if (gamestate == 0)
		{
			graphics(gamestate, healthbar(enemy_hp), healthbar(player_hp), enemy_hp, player_hp, player_attack, enemy_attack, player_dmg, enemy_dmg);
			cin >> gamestate;
			if (gamestate != 1)
				gamestate = 2;
			graphics(gamestate, healthbar(enemy_hp), healthbar(player_hp), enemy_hp, player_hp, player_attack, enemy_attack, player_dmg, enemy_dmg);
			if (gamestate == 2)
				return 0;
		}
		else
			graphics(gamestate, healthbar(enemy_hp), healthbar(player_hp), enemy_hp, player_hp, player_attack, enemy_attack, player_dmg, enemy_dmg);
		while ((player_hp != 0) && (enemy_hp != 0))
		{
			cin >> player_attack;
			enemy_attack = rand() % (4) + 1;
			srand(time(NULL));
			player_crit = rand() % (12 + 1 - 2) + 2;
			if (player_attack == 6)
			{
				cheat_crit = 1;
				system("cls");
				cout << "//////////////////////////////////////////////////////////////////////////////////////////\n";
				cout << "//                                                                                      //\n";
				cout << "//                                                                                      //\n";
				cout << "//                                                                                      //\n";
				cout << "//                                                                                      //\n";
				cout << "//                                                                                      //\n";
				cout << "//                                                                                      //\n";
				cout << "//                                                                                      //\n";
				cout << "//                                                                                      //\n";
				cout << "//                                                                                      //\n";
				cout << "//                         CHEAT ACTIVATED - \"ALWAYS CRIT\"                              //\n";
				cout << "//                                                                                      //\n";
				cout << "//                                                                                      //\n";
				cout << "//                                                                                      //\n";
				cout << "//                                                                                      //\n";
				cout << "//                                                                                      //\n";
				cout << "//                                                                                      //\n";
				cout << "//                                                                                      //\n";
				cout << "//                                                                                      //\n";
				cout << "//                                                                                      //\n";
				cout << "//                                                                                      //\n";
				cout << "//                                                                                      //\n";
				cout << "//                                                                                      //\n";
				cout << "//                                                                                      //\n";
				cout << "//////////////////////////////////////////////////////////////////////////////////////////\n";
				Sleep(1000);
			}
			if (cheat_crit == 1)
				player_crit = 12;
			enemy_crit = rand() % (12 + 1 - 2) + 2;
			player_dmg[0] = damage(player_attack, enemy_attack, player_crit)[0];
			player_dmg[1] = damage(player_attack, enemy_attack, player_crit)[1];
			enemy_dmg[0] = damage(enemy_attack, player_attack, enemy_crit)[0];
			enemy_dmg[1] = damage(enemy_attack, player_attack, enemy_crit)[1];

			player_hp -= enemy_dmg[0];
			enemy_hp -= player_dmg[0];
			if (player_attack == 5)
			{
				cheat_hp = 1;
				system("cls");
				cout << "//////////////////////////////////////////////////////////////////////////////////////////\n";
				cout << "//                                                                                      //\n";
				cout << "//                                                                                      //\n";
				cout << "//                                                                                      //\n";
				cout << "//                                                                                      //\n";
				cout << "//                                                                                      //\n";
				cout << "//                                                                                      //\n";
				cout << "//                                                                                      //\n";
				cout << "//                                                                                      //\n";
				cout << "//                                                                                      //\n";
				cout << "//                         CHEAT ACTIVATED - \"INVINCIBILITY\"                            //\n";
				cout << "//                                                                                      //\n";
				cout << "//                                                                                      //\n";
				cout << "//                                                                                      //\n";
				cout << "//                                                                                      //\n";
				cout << "//                                                                                      //\n";
				cout << "//                                                                                      //\n";
				cout << "//                                                                                      //\n";
				cout << "//                                                                                      //\n";
				cout << "//                                                                                      //\n";
				cout << "//                                                                                      //\n";
				cout << "//                                                                                      //\n";
				cout << "//                                                                                      //\n";
				cout << "//                                                                                      //\n";
				cout << "//////////////////////////////////////////////////////////////////////////////////////////\n";
				Sleep(1000);
			}
			if (cheat_hp == 1)
				player_hp = 10;
			if (enemy_hp < 0)
				enemy_hp = 0;
			if (player_hp < 0)
				player_hp = 0;
			graphics(3, healthbar(enemy_hp), healthbar(player_hp), enemy_hp, player_hp, player_attack, enemy_attack, player_dmg, enemy_dmg);
		}
		Sleep(1500);
		graphics(4, healthbar(enemy_hp), healthbar(player_hp), enemy_hp, player_hp, player_attack, enemy_attack, player_dmg, enemy_dmg);
		cin >> gamestate;
		if (gamestate != 1)
			gamestate = 0;
	}

	return 0;
}