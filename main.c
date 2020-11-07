#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "song.h"
int main() {
	struct song *songs = NULL;
	songs = insert_order(songs, "Lei", "Banana");
	songs = insert_order(songs, "Jeremy", "Cherry");
	songs = insert_order(songs, "Yulin", "James");
	songs = insert_order(songs, "Lei", "Apple");
	songs = insert_order(songs, "Jeremy", "Pie");
	songs = insert_order(songs, "Yulin", "Bond");
	printf("Finding all songs:\n");
	print_all(songs);

	printf("Finding Song & Artist (Lei, Song 1): \n");
	print_song(find_song(songs, "Lei", "Song 1"));

	printf("Finding Artist (Jeremy): \n");
	print_song(first_song(songs, "Jeremy"));

    free_all(songs);
	return 0;
}
