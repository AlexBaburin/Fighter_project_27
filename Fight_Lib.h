#pragma once

void graphics(int game_state, char* enemy_health, char* player_health, int enemy_hp, int player_hp, int player_attack, int enemy_attack, int* player_dmg, int* enemy_dmg);
char* healthbar(int hp);
int* damage(int player_attack, int enemy_attack, int crit);
char* crit_miss_message(int* dmg, int enemy_attack, int player_attack);
char* used_attack(int attack);