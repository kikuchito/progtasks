#include "ticket.h"
#include <iostream>
#include <string>
#include <fstream>
#include <time.h>

using namespace std;

Ticket::Ticket(int day, int month, int year,string type)
{
	Ticket::set_day(day);
	Ticket::set_month(month);
	Ticket::set_year(year);
	Ticket::set_type(type);
}
bool Ticket::ticket_analysis(int day, int month, int year, string type)
{
	if ((day < 25) && (month < 10)) // Проверка срока годности (на момент 25.10.22)
	{
		cout << "Unusable";
		return false; 
	}
	else
	{
		cout << "Usable";
		return true; 
	}
}

void Ticket::set_type(string type_of_ticket)
{
	Ticket::type = type_of_ticket;
}
string Ticket::get_type()
{
	return Ticket::type;
}
void Ticket::set_day(int ticket_day)
{
	Ticket::day = ticket_day;
}
int Ticket::get_day()
{
	return Ticket::day;
}

void Ticket::set_month(int ticket_month)
{
	Ticket::month = ticket_month;
}
int Ticket::get_month()
{
	return Ticket::month;
}

void Ticket::set_year(int ticket_year)
{
	Ticket::year = ticket_year;
}
int Ticket::get_year()
{
	return Ticket::year;
}
