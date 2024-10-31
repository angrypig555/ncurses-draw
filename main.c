#include <ncurses/ncurses.h>

/*define materials*/
#define NO_MATERIAL         ' '
#define DEFAULT_MATERIAL    '#'
#define BRICK_MATERIAL      '='
#define STAR_MATERIAL       '*'

/*define colours*/
#define BLACK   0
#define BLUE    1
#define GREEN   2
#define RED     4
#define WHITE   7

int main() {
    initscr();
    start_color();
    init_pair(BLUE, GREEN, WHITE);
    printw("Hello World");
    refresh();
    getch();
    endwin();

    return 0;
}