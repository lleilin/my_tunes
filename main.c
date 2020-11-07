#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "song.h"
#include "library.h"

int main() {
	struct library *lib = make_library();
	struct song *A_Songs = NULL;
	A_Songs = insert_order(A_Songs, "Alfred", "Banana");
	A_Songs = insert_order(A_Songs, "Adam", "Cherry");
	A_Songs = insert_order(A_Songs, "Alfred", "Watermelon");
	A_Songs = insert_order(A_Songs, "Adam", "Apple");
	struct song *L_Songs = NULL;
	L_Songs = insert_order(L_Songs, "Lei", "Pencil");
	L_Songs = insert_order(L_Songs, "Larry", "Eraser");
	L_Songs = insert_order(L_Songs, "Larry", "Quill");
	L_Songs = insert_order(L_Songs, "Lei", "Marker");
	struct song *J_Songs = NULL;
	J_Songs = insert_order(J_Songs, "Jeremy", "Eyes");
	J_Songs = insert_order(J_Songs, "Jeremy", "Mouth");
	J_Songs = insert_order(J_Songs, "Johnson", "Neck");
	J_Songs = insert_order(J_Songs, "Johnson", "Ear");
	struct song *Y_Songs = NULL;
	Y_Songs = insert_order(Y_Songs, "Yulin", "Monitor");
	Y_Songs = insert_order(Y_Songs, "Yukon", "Headset");
	Y_Songs = insert_order(Y_Songs, "Yulin", "Keyboard");
	Y_Songs = insert_order(Y_Songs, "Yukon", "Mouse");
	struct song *Z_Songs = NULL;
	Z_Songs = insert_order(Z_Songs, "Zed", "Sweater");
	Z_Songs = insert_order(Z_Songs, "Zed", "T-Shirt");
	Z_Songs = insert_order(Z_Songs, "Zack", "Jacket");
	Z_Songs = insert_order(Z_Songs, "Zack", "Suit");
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
