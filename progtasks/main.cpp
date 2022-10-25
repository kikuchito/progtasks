#include <iostream>
#include "ticket.h"
#include <time.h>
#include <string>
#include "turnstile.h"
using namespace std;
int main() {
	int number, month, year,day;
	string type;
	srand(time(0));
	number = rand() % 999 + 1;
	day = rand() % 30 + 1;
	month = rand() % 12 + 1;
	year = 22;
	switch (int odd_type = rand() % 4 + 1) 
	{
	case 1: type = "One-time"; break;
	case 2: type = "Travel card"; break;
	case 3: type = "Social card"; break;
	case 4: type = "Transport card"; break;
	};
	Ticket *ticket = new Ticket(day, month, year,type);
	ticket->ticket_analysis(day, month, year, type);
	bool state=false;
	state=ticket->ticket_analysis(day, month, year, type);
	Turnstile *turnstyle = new Turnstile(number, state);
	turnstyle->state_of_turnstyle(state);
	cout << "Type of ticket: " << ticket->get_type() << "\t" << "\n";
	cout << "Ticket validity period: " << ticket->get_day()<< "." << ticket->get_month() << "." << ticket->get_year() << "\t" << "\n" << endl;
	cout << "Ticket expiration date:" <<"\t" <<  ticket->ticket_analysis(day, month, year, type) << "\t" << "\n";
	cout << "Turnstyle state:" <<"\t" << turnstyle->state_of_turnstyle(state) << "\t" << "\n";
	delete ticket;
	delete turnstyle;
	return 0;
}