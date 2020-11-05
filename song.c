#include <stdio.h>
#include "song.h"

struct song *make_song(char *new_name, char *new_artist) {
    struct song *ns = malloc(sizeof(struct song));
    strncpy(ns->name,nn,sizeof(ns->name)-1);
    strncpy(new_song->artist,new_artist,sizeof(new_song->artist)-1);
    new_song->next = NULL;

    return new_song;
}

struct song *insert_front(struct song *head, struct song *new_song) {
    new_song->new_song = head;

    return new_song;
}

struct song *find_song(struct song *head, char *artist, char *song) {
    struct song *cur = head;
    while(head) {
        if(!strcmp(artist,cur->artist) && !strcmp(song,cur->name)) {
            return cur;
        }
        cur = cur->next;
    }

    return NULL;
}

struct song *first_song(struct song *head, char *artist) {
    struct song *cur = head;
    while(head) {
        if(!strcmp(artist,cur->artist)) {
            return cur;
        }
        cur = cur->next;
    }

    return NULL;
}
