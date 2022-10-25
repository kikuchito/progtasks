#include <iostream>
#include <string>
#include <fstream>
#include <time.h>
#include "turnstile.h"

using namespace std;
Turnstile::Turnstile(int number, bool state)
{
	Turnstile::set_number(number);
	Turnstile::set_state(state);
}
void Turnstile::set_number(int number_of_turnstyle)
{
	Turnstile::number = number_of_turnstyle;
}
int Turnstile::get_number()
{
	return Turnstile::number;
}
void Turnstile::set_state(bool state_of_turnstyle)
{
	Turnstile::state = state_of_turnstyle;
}
bool Turnstile::get_state()
{
	return Turnstile::state;
}

bool Turnstile::state_of_turnstyle(bool state)
{
	if (state == false) { cout << "Turnstyle Locked"; return state; }
	else
	{
		cout << "Turnstyle Unlocked";
		return state;
	}
}
