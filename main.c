#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "song.h"
int main() {
	struct song *songs = NULL;
	songs.insert_front("Song 1", "Lei");
	songs.insert_front("Song 2", "Jeremy");
	return 0;
}
