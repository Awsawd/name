#define _CRT_SECURE_NO_WARNINGS//
#include <iostream>
#include <windows.h>
#include <time.h>
#include <iomanip>

using namespace std;

class Clock
{
public:
	Clock()
	{
		time_t t = time(NULL);
		struct tm ti = *localtime(&t);

		hour = ti.tm_hour;
		min = ti.tm_min;
		sec = ti.tm_sec;
	}
		
	void run()
	{
		while (1)
		{
			show();
			tick();
		}
	}

private:
	int hour;
	int min;
	int sec;
	
	void show()
	{
		system("cls");
		cout << setw(2) << setfill('0') << hour << ":" ;
		cout << setw(2) << setfill('0') << min << ":"  ;
		cout << setw(2) << setfill('0') << sec << endl;
	}
	void tick()
	{
		Sleep(1000);
		if (++sec == 60)
		{
			sec = 0;
			min += 1;
			if (++min==60)
			{
				min = 0;
				hour += 1;
				if (++hour==24)
				{
					hour = 0;
				}
			}
		}
	}

};

int main()
{
	Clock c;
	c.run();
	return 0;
}
