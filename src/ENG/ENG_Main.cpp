/*
 * NAME: ENG_Main.cpp
 *
 * COMMENTS: Main function for point of entry
 */

#include "ENG_MainGameLoop.h"

int main(int argc, char *argv[]) {
    ENG_MainGameLoop *game = new ENG_MainGameLoop;
    game->init();
    game->run();
    game->cleanup();
}
