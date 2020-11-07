#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "song.h"
#include "library.h"

int main() {
	struct library *lib = make_library();
	lib = add_lib_song(lib, "Alfred", "Banana");
	lib = add_lib_song(lib, "Adam", "Cherry");
	lib = add_lib_song(lib, "Alfred", "Watermelon");
	lib = add_lib_song(lib, "Adam", "Apple");
	lib = add_lib_song(lib, "Lei", "Pencil");
	lib = add_lib_song(lib, "Larry", "Eraser");
	lib = add_lib_song(lib, "Larry", "Quill");
	lib = add_lib_song(lib, "Lei", "Marker");
	lib = add_lib_song(lib, "Jeremy", "Eyes");
	lib = add_lib_song(lib, "Jeremy", "Mouth");
	lib = add_lib_song(lib, "Johnson", "Neck");
	lib = add_lib_song(lib, "Johnson", "Ear");
	lib = add_lib_song(lib, "Yulin", "Monitor");
	lib = add_lib_song(lib, "Yukon", "Headset");
	lib = add_lib_song(lib, "Yulin", "Keyboard");
	lib = add_lib_song(lib, "Yukon", "Mouse");
	lib = add_lib_song(lib, "Zed", "Sweater");
	lib = add_lib_song(lib, "Zed", "T-Shirt");
	lib = add_lib_song(lib, "Zack", "Jacket");
	lib = add_lib_song(lib, "Zack", "Suit");

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
	return 0;
}
