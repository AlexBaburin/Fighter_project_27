#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include "Fight_Lib.h"
#include <locale.h>
#include <time.h>

using namespace std;

void graphics(int game_state, char* enemy_health, char* player_health, int enemy_hp, int player_hp, int player_attack, int enemy_attack, int* player_dmg, int* enemy_dmg)
{
	switch (game_state)
	{
	case 0:
	{
		system("cls");
		cout << "//////////////////////////////////////////////////////////////////////////////////////////\n";
		cout << "//                                                                                      //\n";
		cout << "//              ||||||||||    ||||||||||    ||||||||||    |||    |||                    //\n";
		cout << "//              |||           |||    |||    |||           |||    |||                    //\n";
		cout << "//              |||           |||    |||    |||           |||    |||                    //\n";
		cout << "//              ||||||||||    |||    |||    ||||||||||    |||    |||                    //\n";
		cout << "//              |||    |||    |||    |||    |||           |||    |||                    //\n";
		cout << "//              |||    |||    |||    |||    |||           |||    |||                    //\n";
		cout << "//              ||||||||||    ||||||||||    ||||||||||    ||||||||||||                  //\n";
		cout << "//                                                                  ||                  //\n";
		cout << "//                                                                                      //\n";
		cout << "//                                                                                      //\n";
		cout << "//                                                                                      //\n";
		cout << "//                                                                                      //\n";
		cout << "//                                                                                      //\n";
		cout << "//                                                                                      //\n";
		cout << "//                                                                                      //\n";
		cout << "//              1 - START GAME                        2 - QUIT                          //\n";
		cout << "//                                                                                      //\n";
		cout << "//                                                                                      //\n";
		cout << "//                                                                                      //\n";
		cout << "//                                                                                      //\n";
		cout << "//                                                                                      //\n";
		cout << "//                                                                                      //\n";
		cout << "//////////////////////////////////////////////////////////////////////////////////////////\n";

	}
	break;
	case 1:
	{
		system("cls");
		cout << "//////////////////////////////////////////////////////////////////////////////////////////\n";
		cout << "//                                                                                      //\n";
		cout << "//       ENEMY HEALTH: " << setw(2) << enemy_hp <<"                          PLAYER HEALTH: " << setw(2) << player_hp << "                    //\n";
		cout << "//     ----------------------------------        ----------------------------------     //\n";
		cout << "//     --"<< enemy_health <<          "--        --" << player_health <<        "--     //\n";
		cout << "//     ----------------------------------        ----------------------------------     //\n";
		cout << "//                                                                                      //\n";
		cout << "//////////////////////////////////////////////////////////////////////////////////////////\n";
		cout << "//                                                                                      //\n";
		cout << "//                                                                                      //\n";
		cout << "//                                    GAME START!                                       //\n";
		cout << "//                                                                                      //\n";
		cout << "//                                                                                      //\n";
		cout << "//                                                                                      //\n";
		cout << "//                                                                                      //\n";
		cout << "//                                                                                      //\n";
		cout << "//                                                                                      //\n";
		cout << "//                                                                                      //\n";
		cout << "//////////////////////////////////////////////////////////////////////////////////////////\n";
		cout << "//                                         ATTACK                                       //\n";
		cout << "//     1 - KICK                                       3 - RIGHT PUNCH                   //\n";
		cout << "//                                                                                      //\n";
		cout << "//     2 - LEFT PUNCH                                 4 - BLOCK                         //\n";
		cout << "//                                                                                      //\n";
		cout << "//////////////////////////////////////////////////////////////////////////////////////////\n";
	}
	break;
	case 3:
	{
		system("cls");
		cout << "//////////////////////////////////////////////////////////////////////////////////////////\n";
		cout << "//                                                                                      //\n";
		cout << "//       ENEMY HEALTH: " << setw(2) << enemy_hp << "                          PLAYER HEALTH: " << setw(2) << player_hp << "                    //\n";
		cout << "//     ----------------------------------        ----------------------------------     //\n";
		cout << "//     --" << enemy_health <<         "--        --" << player_health <<        "--     //\n";
		cout << "//     ----------------------------------        ----------------------------------     //\n";
		cout << "//                                                                                      //\n";
		cout << "//////////////////////////////////////////////////////////////////////////////////////////\n";
		cout << "//                                          //                                          //\n";
		cout << "//     ENEMY USED: " << setw(18) << used_attack(enemy_attack) << "       //   YOU USED: " << setw(18) << used_attack(player_attack) << "           //\n";
		cout << "//                                          //                                          //\n";
		cout << "//     " << setw(17) << crit_miss_message(enemy_dmg, player_attack, enemy_attack) << "                    //   " << setw(17) << crit_miss_message(player_dmg, enemy_attack, player_attack) << "                      //\n";
		cout << "//                                          //                                          //\n";
		cout << "//     Enemy deals " << enemy_dmg[0] << " damage                 //   You deal " << player_dmg[0] << " damage                      //\n";
		cout << "//                                          //                                          //\n";
		cout << "//                                          //                                          //\n";
		cout << "//                                          //                                          //\n";
		cout << "//                                          //                                          //\n";
		cout << "//////////////////////////////////////////////////////////////////////////////////////////\n";
		cout << "//                                         ATTACK                                       //\n";
		cout << "//     1 - KICK                                       3 - RIGHT PUNCH                   //\n";
		cout << "//                                                                                      //\n";
		cout << "//     2 - LEFT PUNCH                                 4 - BLOCK                         //\n";
		cout << "//                                                                                      //\n";
		cout << "//////////////////////////////////////////////////////////////////////////////////////////\n";
	}
	break;
	case 4:
	{
		system("cls");
		cout << "//////////////////////////////////////////////////////////////////////////////////////////\n";
		cout << "//                                                                                      //\n";
		cout << "//       ENEMY HEALTH: " << setw(2) << enemy_hp << "                          PLAYER HEALTH: " << setw(2) << player_hp << "                    //\n";
		cout << "//     ----------------------------------        ----------------------------------     //\n";
		cout << "//     --" << enemy_health <<         "--        --" << player_health <<        "--     //\n";
		cout << "//     ----------------------------------        ----------------------------------     //\n";
		cout << "//                                                                                      //\n";
		cout << "//////////////////////////////////////////////////////////////////////////////////////////\n";
		cout << "//                                                                                      //\n";
		cout << "//                                                                                      //\n";
		cout << "//                                    GAME OVER!                                        //\n";
		cout << "//                                                                                      //\n";
		cout << "//                                                                                      //\n";
		cout << "//                                                                                      //\n";
		cout << "//                                                                                      //\n";
		cout << "//                                                                                      //\n";
		cout << "//                                                                                      //\n";
		cout << "//                                                                                      //\n";
		cout << "//////////////////////////////////////////////////////////////////////////////////////////\n";
		cout << "//                                                                                      //\n";
		cout << "//                                                                                      //\n";
		cout << "//              1 - RESTART                             2 - QUIT                        //\n";
		cout << "//                                                                                      //\n";
		cout << "//                                                                                      //\n";
		cout << "//////////////////////////////////////////////////////////////////////////////////////////\n";
	}
	break;
	default:
	{
		system("cls");
		return;
	}
	}
}

char* healthbar(int hp)
{
	const char* health_10 = "||||||||||||||||||||||||||||||";
	const char* health_9 = "|||||||||||||||||||||||||||   ";
	const char* health_8 = "||||||||||||||||||||||||      ";
	const char* health_7 = "|||||||||||||||||||||         ";
	const char* health_6 = "||||||||||||||||||            ";
	const char* health_5 = "|||||||||||||||               ";
	const char* health_4 = "||||||||||||                  ";
	const char* health_3 = "|||||||||                     ";
	const char* health_2 = "||||||                        ";
	const char* health_1 = "|||                           ";
	const char* health_0 = "                              ";
	char* health;
	switch (hp)
	{
	case 10:
	{
		health = (char*)health_10;
		return health;
	}
	case 9:
	{
		health = (char*)health_9;
		return health;
	}
	case 8:
	{
		health = (char*)health_8;
		return health;
	}
	case 7:
	{
		health = (char*)health_7;
		return health;
	}
	case 6:
	{
		health = (char*)health_6;
		return health;
	}
	case 5:
	{
		health = (char*)health_5;
		return health;
	}
	case 4:
	{
		health = (char*)health_4;
		return health;
	}
	case 3:
	{
		health = (char*)health_3;
		return health;
	}
	case 2:
	{
		health = (char*)health_2;
		return health;
	}
	case 1:
	{
		health = (char*)health_1;
		return health;
	}
	default:
	{
		health = (char*)health_0;
		return health;
	}
	}
}

int* damage(int player_attack, int enemy_attack, int crit)
{
	int dmg[2] = {0, 0};

	if (enemy_attack == 4)
	{
		switch (player_attack)
		{
		case 1:
		{
			dmg[0] = 3 * crit / 12;
			dmg[1] = crit / 12;
		}
		break;
		case 2:
		{
			dmg[0] = crit / 12;
			dmg[1] = crit / 12;
		}
		break;
		case 3:
		{
			dmg[0] = 2 * crit / 12;
			dmg[1] = crit / 12;
		}
		break;
		default:
		{
			dmg[0] = 0;
			dmg[1] = 0;
		}
		}
		return dmg;
	}
	switch (player_attack)
	{
	case 1:
	{
		dmg[0] = 3 * (crit / 9) + (crit / 12);
		dmg[1] = crit / 12;
	}
	break;
	case 2:
	{
		if (crit < 5)
			dmg[0] = 0;
		else
			dmg[0] = 1 + (crit / 12);
		dmg[1] = crit / 12;
	}
	break;
	case 3:
	{
		if (crit < 5)
			dmg[0] = 0;
		else
			dmg[0] = 2 + (crit / 12);
		dmg[1] = crit / 12;
	}
	break;
	default:
	{
		dmg[0] = 0;
		dmg[1] = 0;
	}
	}

	return dmg;
}

char* crit_miss_message(int* dmg, int enemy_attack, int player_attack)
{
	char* message;
	const char* message_1 = "CRITICAL HIT!";
	const char* message_2 = "MISSED!";
	const char* message_3 = "";
	if (dmg[1] == 1)
	{
		message = (char*)message_1;
		return message;
	}
	if ((dmg[0] == 0) && (enemy_attack != 4) && (player_attack != 4) && (player_attack != 5) && (player_attack != 6))
	{
		message = (char*)message_2;
		return message;
	}
	message = (char*)message_3;
	return message;
}

char* used_attack(int attack)
{
	char* att;
	const char* att_1 = "Kick";
	const char* att_2 = "Left punch";
	const char* att_3 = "Right punch";
	const char* att_4 = "Block";
	switch (attack)
	{
	case 1:
	{
		att = (char*)att_1;
		return att;
	}
	case 2:
	{
		att = (char*)att_2;
		return att;
	}
	case 3:
	{
		att = (char*)att_3;
		return att;
	}
	default:
	{
		att = (char*)att_4;
		return att;
	}
	}
}