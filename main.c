#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "song.h"
#include "library.h"

int main() {
	printf("\nTesting the Song Linked List:\n");
	printf("=====================================================\n\n");
    printf("TESTING SONG STRUCT (make_song):\n\n");
    printf("TESTING insert_order\n");
	struct song *songs = NULL;

	songs = insert_order(songs, "Lei", "Banana");
	songs = insert_order(songs, "Jeremy", "Cherry");
	songs = insert_order(songs, "Yulin", "James");
	songs = insert_order(songs, "Lei", "Apple");
	songs = insert_order(songs, "Jeremy", "Pie");
	songs = insert_order(songs, "Yulin", "Bond");
	printf("TESTING print_list\n\n");
	print_all(songs);
    printf("\nTESTING remove_song\n\n");
	songs = remove_song(songs, "Yulin", "James");
	songs = remove_song(songs, "Jeremy", "Cherry");
	songs = remove_song(songs, "Yulin", "Bond");
	print_all(songs);

    printf("\nTESTING find_song\n");
    printf("\nTESTING print_song (aka printing the node)\n");
	printf("Finding Song & Artist (Yulin, Bond): \n");
	print_song(find_song(songs, "Lei", "Banana"));
	printf("Finding Song & Artist [A Song That Doesn't Exist]: \n");
	print_song(find_song(songs, "An Artist That Doesn't Exist", "A Song That Doesn't Exist"));

	printf("\nFinding First Song Of Artist (first_song): \n");
	printf("Finding Artist Jeremy: \n");
	print_song(first_song(songs, "Jeremy"));
	printf("Finding Artist Nonexistent: \n");
	print_song(first_song(songs, "Nonexistent"));

	printf("\nTESTING random_song: \n");
	print_song(random_song(songs));

	printf("\nTESTING insert_front\n");
	songs = insert_front(songs, "Yulin", "Enter Sandman");
	print_all(songs);

	printf("\nTESTING list_length\n");
	printf("Length of Song List: %d\n", list_length(songs));

	struct song *song1 = make_song("Lei", "Banana");
	struct song *song2 = make_song("Jeremy", "Pie");

	printf("\nComparing Two Songs\n");
	print_song(song1);
	print_song(song2);
	printf("Should be a positive number: %d\n", songcmp(song1, song2));

    printf("\nTESTING free_all (you aren't supposed to see anything)\n\n\n");
    song1 = free_all(song1);
    song2 = free_all(song2);

    songs = free_all(songs);


    printf("=====================================================\n");
	printf("Testing the Playlist (Library Struct)\n");
    printf("=====================================================\n");

    printf("\nTESTING LIBRARY STRUCT and make_playlist:\n\n");
    printf("TESTING add_lib_song\n");
    printf("TESTING print_library\n");
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

	printf("\nTESTING Returning List Given Artist find_lib_alpha:\n");
	print_all(find_lib_alpha(playlist, "Jeremy"));

	printf("\nTESTING Printing List Given Letter (print_alpha):\n");
	print_alpha(playlist, 'Z');

	printf("\nTESTING REMOVING A SONG FROM LIBRARY remove_lib_song");
	playlist = remove_lib_song(playlist, "Yukon", "Headset");
	playlist = remove_lib_song(playlist, "AArtist", "BSong");
	playlist = remove_lib_song(playlist, "Zack", "Suit");
	print_library(playlist);
	
    printf("\nTESTING FIND SONG Ear by Johnson (find_lib_song)\n");
    print_song(find_lib_song(playlist,"Johnson","Ear"));
    
    printf("\nTESTING FINDING FIRST SONG BY ARTIST Larry (find_artist)\n");
    print_song(find_artist(playlist,"Larry"));

    printf("\nTESTING PRINTING SONGS BY ARTIST Alfred (print_artist)\n");
    print_artist(playlist,"Alfred");

    printf("\nTESTING PRINT RANDOM (print_random)\n");
    print_random(playlist);
    
    printf("\nTESTING PRINTING FIVE SONGS SHUFFLED (print_shuffle)\n");
    print_shuffle(playlist,5);
	
	printf("\nTESTING free_library (you aren't supposed to see anything)\n");
	free_library(playlist);
	
	return 0;
}
