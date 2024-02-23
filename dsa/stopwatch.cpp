#include <iostream>
#include <iomanip>
#include <conio.h>
#include <windows.h> //for windows
//#include <linux.h> //for linux
//#include <dos.h> //for turboC/Dos
using namespace std;
class stopwatch {
	private:
		short hour;
		short minute;
		short second;
		short milisecond;
	protected:
		void resetPauseLap() {
			if(kbhit()) {
				char btn=getch();
				if(btn==' ') {
					cout<<endl;
				} else if(btn=='p' || btn=='P') {
					getch();
				} else if(btn=='r' || btn=='R') {
					reset();
				}
			}
		}
		void display() {
			cout<<'\r'<<setfill('0')
			    <<setw(2)<<hour<<" : "
			    <<setw(2)<<minute<<" : "
			    <<setw(2)<<second<<" : "
			    <<setw(2)<<milisecond;
		}
		void delay() {
			static short delay=12;
			if(delay>5) {
				Sleep(1);
			} else if(delay==0) {
				delay=12;
			}
			delay--;
		}
	public:
		void start() {
			cout<<"Press any key to start"<<endl
			    <<"Press R to reset, Press P to pause"<<endl
			    <<"Press space to record laps"<<endl
			    <<"------------------------------------"<<endl;
			reset();
			while(true) {
				milisecond++;
				if(milisecond==100) {
					milisecond=0;
					second++;
					if(second==60) {
						second=0;
						minute++;
						if(minute==60) {
							minute=0;
							hour++;
							if(hour==60) {
								hour=0;
							}
						}
					}
				}
				delay();
				display();
				resetPauseLap();
			}
		}
		void reset() {
			hour=minute=second=milisecond=0;
			display();
			getch();
		}
		
};
int main() {
	stopwatch timer;
	cout<<"Size of stopwatch : "<<sizeof(timer)<<"\nPress any key to continue...";
	getch();
	system("cls");
	timer.start();
}