#pragma
#include <string>

using namespace std;

class Turnstile
{
public:
	Turnstile(int number, bool state);
	void set_number(int);
	int get_number();
	void set_state(bool);
	bool get_state();
	bool state_of_turnstyle(bool);
	/*~Turnstile();*/
private:
	int number;
	bool state;
};