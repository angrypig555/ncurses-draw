#include <ncurses/ncurses.h>

/*define materials*/
#define NO_MATERIAL         ' '
#define DEFAULT_MATERIAL    '#'
#define BRICK_MATERIAL      '='
#define STAR_MATERIAL       '*'

/*define colours*/
#define BLACK   COLOR_BLACK
#define BLUE    COLOR_BLUE
#define GREEN   COLOR_GREEN
#define RED     COLOR_RED
#define WHITE   COLOR_WHITE

/*define pairs*/
#define BACKGROUND 1

bool running = true;

int cursory;
int cursorx;

int main() {
    initscr();
    start_color();
    init_pair(BACKGROUND, COLOR_BLACK, COLOR_WHITE);
    wbkgd(stdscr, COLOR_PAIR(1));
    printw("Hello, welcome to ncurses-draw!");
    while (running == true); {
        getyx(stdscr, cursory, cursorx);
        wbkgd(stdscr, COLOR_PAIR(1));
        printw("%d, %d", cursory, cursorx);
        refresh();
        getch();
    }
    endwin();

    return 0;
}