#pragma
#include <string>

using namespace std;

class Ticket
{
public:
	Ticket(int day, int month, int year,string type);
	bool ticket_analysis(int day, int month, int year, string type);
	void set_type(string);
	string get_type();
	int get_number();
	void set_day(int);
	int get_day();
	void set_month(int);
	int get_month();
	void set_year(int);
	int get_year();
	/*~Ticket();*/
private:
	int day, month, year;
	string type;
};