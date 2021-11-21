#include <iostream>
#include <ncurses.h>
#include <windows.h>
using namespace std;

int main(){
	initscr();
	const char*kucing[5]={"cymo","cami","cama","mica","maca"};
	start_color();
	init_pair(1,COLOR_RED,COLOR_WHITE);
	attron(COLOR_PAIR(1));
	for(int i=0;i<=4;i++){
		for(int j=0;j<=4;j++){
			mvprintw(i,j,kucing[j]);
			refresh();
			Sleep(500);
			clear();
		}
	}for(int k=0;k<5;k++){
		mvprintw(k,2,kucing[k]);
		refresh();
		Sleep(200);
	}
	getch();
	endwin();
}

