#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "song.h"
int main() {
	struct song *songs = NULL;
	songs.insert_front(songs, "Song 1", "Lei");
	songs.insert_front(songs, "Song 2", "Jeremy");
	songs.insert_front(songs, "Song 3", "Yulin");
	songs.insert_front(songs, "Song 4", "Lei");
	songs.insert_front(songs, "Song 5", "Jeremy");
	songs.insert_front(songs, "Song 6", "Yulin");
	print_all(songs);
	
	return 0;
}
