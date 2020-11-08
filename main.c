#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "song.h"
#include "library.h"

int main() {
	struct library *playlist = make_playlist();

	playlist = add_lib_song(playlist, "AArtist", "BSong");
	playlist = add_lib_song(playlist, "BArtist", "BSong");
	playlist = add_lib_song(playlist, "BArtist", "CCSong");
	playlist = add_lib_song(playlist, "BBArtist", "ASong");

	print_library(playlist);
	free_library(playlist);


	// playlist = free_library(playlist);
	// playlist = add_lib_song(playlist, "Alfred", "Banana");
	// playlist = add_lib_song(playlist, "Adam", "Cherry");
	// playlist = add_lib_song(playlist, "Alfred", "Watermelon");
	// playlist = add_lib_song(playlist, "Adam", "Apple");
	// playlist = add_lib_song(playlist, "Lei", "Marker");
	// playlist = add_lib_song(playlist, "Larry", "Eraser");
	// playlist = add_lib_song(playlist, "Larry", "Quill");
	// playlist = add_lib_song(playlist, "Jeremy", "Eyes");
	// playlist = add_lib_song(playlist, "Johnson", "Ear");
	// playlist = add_lib_song(playlist, "Yulin", "Monitor");
	// playlist = add_lib_song(playlist, "Jeremy", "Mouth");
	// playlist = add_lib_song(playlist, "Lei", "Pencil");
	// playlist = add_lib_song(playlist, "Johnson", "Neck");
	// playlist = add_lib_song(playlist, "Yukon", "Headset");
	// playlist = add_lib_song(playlist, "Yulin", "Keyboard");
	// playlist = add_lib_song(playlist, "Yukon", "Mouse");
	// playlist = add_lib_song(playlist, "Zed", "Sweater");
	// playlist = add_lib_song(playlist, "Zed", "T-Shirt");
	// playlist = add_lib_song(playlist, "Zack", "Jacket");
	// playlist = add_lib_song(playlist, "Zack", "Suit");

	// print_library(playlist);

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
