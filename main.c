#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "song.h"
#include "library.h"

int main() {
    /*
	struct song *songs = NULL;
	struct song *song1 = make_song("Lei", "Banana");
	struct song *song2 = make_song("Jeremy", "Pie");

	songs = insert_order(songs, "Lei", "Banana");
	songs = insert_order(songs, "Jeremy", "Cherry");
	songs = insert_order(songs, "Yulin", "James");
	songs = insert_order(songs, "Lei", "Apple");
	songs = insert_order(songs, "Jeremy", "Pie");
	songs = insert_order(songs, "Yulin", "Bond");

	print_all(songs);
	songs = remove_song(songs, "Yulin", "James");
	songs = remove_song(songs, "Jeremy", "Cherry");
	print_all(songs);
	songs = remove_song(songs, "Yulin", "Bond");
	print_all(songs);

	printf("Finding Song & Artist (Lei, Song 1): \n");
	print_song(find_song(songs, "Yulin", "1"));

	printf("Finding Artist (Jeremy): \n");
	print_song(first_song(songs, "1"));

    song1 = free_all(song1);
    song2 = free_all(song2);

    songs = free_all(songs);
    */

    struct library *lib = make_library();
	return 0;
}
