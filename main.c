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

int main() {
    initscr();
    start_color();
    init_pair(BACKGROUND, GREEN, WHITE);
    wbkgd(stdscr, BACKGROUND);
    printw("Hello World");
    refresh();
    getch();
    endwin();

    return 0;
}