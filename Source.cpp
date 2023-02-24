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
		cout << "//                           ÂÂÅÄÈÒÅ ×ÈÑËÎ È ÍÀÆÌÈÒÅ ENTER                              //\n";
		cout << "//                                                                                      //\n";
		cout << "//                                                                                      //\n";
		cout << "//                                                                                      //\n";
		cout << "//                                                                                      //\n";
		cout << "//              1 - ÍÀ×ÀÒÜ ÈÃÐÓ                        2 - ÂÛÕÎÄ                        //\n";
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
		cout << "//       ÇÄÎÐÎÂÜÅ ÂÐÀÃÀ: " << setw(2) << enemy_hp <<"                        ÇÄÎÐÎÂÜÅ ÈÃÐÎÊÀ: " << setw(2) << player_hp << "                  //\n";
		cout << "//     ----------------------------------        ----------------------------------     //\n";
		cout << "//     --"<< enemy_health <<          "--        --" << player_health <<        "--     //\n";
		cout << "//     ----------------------------------        ----------------------------------     //\n";
		cout << "//                                                                                      //\n";
		cout << "//////////////////////////////////////////////////////////////////////////////////////////\n";
		cout << "//                                                                                      //\n";
		cout << "//                                                                                      //\n";
		cout << "//                                    ÈÃÐÀ ÍÀ×ÀËÀÑÜ!                                    //\n";
		cout << "//                                                                                      //\n";
		cout << "//                                                                                      //\n";
		cout << "//                                                                                      //\n";
		cout << "//                                                                                      //\n";
		cout << "//                                                                                      //\n";
		cout << "//                                                                                      //\n";
		cout << "//                                                                                      //\n";
		cout << "//////////////////////////////////////////////////////////////////////////////////////////\n";
		cout << "//                                         ÀÒÀÊÈ                                        //\n";
		cout << "//     1 - ÀÒÀÊÀ ÍÎÃÎÉ                                       3 - ÀÒÀÊÀ ÏÐÀÂÎÉ ÐÓÊÎÉ     //\n";
		cout << "//                                                                                      //\n";
		cout << "//     2 - ÀÒÀÊÀ ËÅÂÎÉ ÐÓÊÎÉ                                 4 - ÁËÎÊ                   //\n";
		cout << "//                                                                                      //\n";
		cout << "//////////////////////////////////////////////////////////////////////////////////////////\n";
	}
	break;
	case 3:
	{
		system("cls");
		cout << "//////////////////////////////////////////////////////////////////////////////////////////\n";
		cout << "//                                                                                      //\n";
		cout << "//       ÇÄÎÐÎÂÜÅ ÂÐÀÃÀ: " << setw(2) << enemy_hp << "                        ÇÄÎÐÎÂÜÅ ÈÃÐÎÊÀ: " << setw(2) << player_hp << "                  //\n";
		cout << "//     ----------------------------------        ----------------------------------     //\n";
		cout << "//     --" << enemy_health <<         "--        --" << player_health <<        "--     //\n";
		cout << "//     ----------------------------------        ----------------------------------     //\n";
		cout << "//                                                                                      //\n";
		cout << "//////////////////////////////////////////////////////////////////////////////////////////\n";
		cout << "//                                          //                                          //\n";
		cout << "//     Âðàã èñïîëüçîâàë: " << setw(18) << used_attack(enemy_attack) << " //   Âû èñïîëüçîâàëè : " << setw(18) << used_attack(player_attack) << "   //\n";
		cout << "//                                          //                                          //\n";
		cout << "//     " << setw(17) << crit_miss_message(enemy_dmg, player_attack, enemy_attack) << "                    //   " << setw(17) << crit_miss_message(player_dmg, enemy_attack, player_attack) << "                      //\n";
		cout << "//                                          //                                          //\n";
		cout << "//     Âðàã íàíåñ " << enemy_dmg[0] << " óðîíà                   //   Âû íàíåñëè " << player_dmg[0] << " óðîíà                     //\n";
		cout << "//                                          //                                          //\n";
		cout << "//                                          //                                          //\n";
		cout << "//                                          //                                          //\n";
		cout << "//                                          //                                          //\n";
		cout << "//////////////////////////////////////////////////////////////////////////////////////////\n";
		cout << "//                                         ÀÒÀÊÈ                                        //\n";
		cout << "//     1 - ÀÒÀÊÀ ÍÎÃÎÉ                                       3 - ÀÒÀÊÀ ÏÐÀÂÎÉ ÐÓÊÎÉ     //\n";
		cout << "//                                                                                      //\n";
		cout << "//     2 - ÀÒÀÊÀ ËÅÂÎÉ ÐÓÊÎÉ                                 4 - ÁËÎÊ                   //\n";
		cout << "//                                                                                      //\n";
		cout << "//////////////////////////////////////////////////////////////////////////////////////////\n";
	}
	break;
	case 4:
	{
		system("cls");
		cout << "//////////////////////////////////////////////////////////////////////////////////////////\n";
		cout << "//                                                                                      //\n";
		cout << "//       ÇÄÎÐÎÂÜÅ ÂÐÀÃÀ: " << setw(2) << enemy_hp << "                        ÇÄÎÐÎÂÜÅ ÈÃÐÎÊÀ: " << setw(2) << player_hp << "                  //\n";
		cout << "//     ----------------------------------        ----------------------------------     //\n";
		cout << "//     --" << enemy_health <<         "--        --" << player_health <<        "--     //\n";
		cout << "//     ----------------------------------        ----------------------------------     //\n";
		cout << "//                                                                                      //\n";
		cout << "//////////////////////////////////////////////////////////////////////////////////////////\n";
		cout << "//                                                                                      //\n";
		cout << "//                                                                                      //\n";
		cout << "//                                    ÈÃÐÀ ÎÊÎÍ×ÅÍÀ!                                    //\n";
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
		cout << "//              1 - ÐÅÂÀÍØ                             2 - ÂÛÕÎÄ                        //\n";
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

int* damage(int player_attack, int enemy_attack, int crit) // 1 - íîãîé = 3 óðîíà. 2 - ëåâîé = 1 óðîíà. 3 - ïðàâîé = 2 óðîíà. 4 - áëîê.
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
	const char* message_1 = "Êðèòè÷åñêèé óäàð!";
	const char* message_2 = "Ïðîìàõ!";
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
	const char* att_1 = "óäàð íîãîé";
	const char* att_2 = "óäàð ëåâîé ðóêîé";
	const char* att_3 = "óäàð ïðàâîé ðóêîé";
	const char* att_4 = "áëîê";
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