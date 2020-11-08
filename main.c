#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "song.h"
#include "library.h"

int main() {
    printf("TESTING SONG STRUCT:\n\n");
    printf("TESTING INSERT SONG\n");
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
    printf("TESTING REMOVE SONG\n");
	songs = remove_song(songs, "Yulin", "James");
	songs = remove_song(songs, "Jeremy", "Cherry");
	songs = remove_song(songs, "Yulin", "Bond");
	print_all(songs);

    printf("TESTING FIND SONG\n");
	printf("Finding Song & Artist (Yulin, Bond): \n");
	print_song(find_song(songs, "Lei", "Banana"));

	printf("Finding Artist (Jeremy): \n");
	print_song(first_song(songs, "Jeremy"));

    printf("TESTING FREE ALL (you aren't supposed to see anything)\n");
    song1 = free_all(song1);
    song2 = free_all(song2);

    songs = free_all(songs);

    printf("\nTESTING LIBRARY STRUCT:\n\n");

    printf("TESTING ADD LIB SONG\n");
	struct library *playlist = make_playlist();

	playlist = add_lib_song(playlist, "AArtist", "BSong");
	playlist = add_lib_song(playlist, "BArtist", "BSong");
	playlist = add_lib_song(playlist, "BArtist", "CCSong");
	playlist = add_lib_song(playlist, "BBArtist", "ASong");
	playlist = add_lib_song(playlist, "Alfred", "Banana");
	playlist = add_lib_song(playlist, "Adam", "Cherry");
	playlist = add_lib_song(playlist, "Alfred", "Watermelon");
	playlist = add_lib_song(playlist, "Adam", "Apple");
	playlist = add_lib_song(playlist, "Lei", "Marker");
	playlist = add_lib_song(playlist, "Larry", "Eraser");
	playlist = add_lib_song(playlist, "Larry", "Quill");
	playlist = add_lib_song(playlist, "Jeremy", "Eyes");
	playlist = add_lib_song(playlist, "Johnson", "Ear");
	playlist = add_lib_song(playlist, "Yulin", "Monitor");
	playlist = add_lib_song(playlist, "Jeremy", "Mouth");
	playlist = add_lib_song(playlist, "Lei", "Pencil");
	playlist = add_lib_song(playlist, "Johnson", "Neck");
	playlist = add_lib_song(playlist, "Yukon", "Headset");
	playlist = add_lib_song(playlist, "Yulin", "Keyboard");
	playlist = add_lib_song(playlist, "Yukon", "Mouse");
	playlist = add_lib_song(playlist, "Zed", "Sweater");
	playlist = add_lib_song(playlist, "Zed", "T-Shirt");
	playlist = add_lib_song(playlist, "Zack", "Jacket");
    playlist = add_lib_song(playlist, "Zack", "Suit");

	print_library(playlist);

    printf("TESTING FIND LIB SONG\n");
    print_song(find_lib_song(playlist,"Johnson","Ear"));

    printf("TESTING FIND ARTIST\n");
    print_song(find_artist(playlist,"Larry"));

    printf("TESTING PRINT RANDOM\n");
    print_random(playlist);

    printf("TESTING PRINT SHUFFLE\n");
    print_shuffle(playlist,5);

	free_library(playlist);
	return 0;
}
