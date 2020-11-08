#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "song.h"

struct song *make_song(char *new_artist, char *new_name) {
    struct song *new_song = malloc(sizeof(struct song));
    strncpy(new_song->name,new_name,sizeof(new_song->name)-1);
    strncpy(new_song->artist,new_artist,sizeof(new_song->artist)-1);
    new_song->next = NULL;

    return new_song;
}

struct song *insert_front(struct song *head, char *artist, char *name) {
    struct song *new_song = make_song(artist, name);
    new_song->next = head;
    return new_song;
}

//compares node alphabetically
//as we assume no two nodes are the same so we an assert songcmp != 0 unless passed two NULLs
//NULL is considered to be the largest thing
int songcmp(struct song *a, struct song *b) {
    if(a == NULL && b == NULL) {
        return 0;
    }
    if(a == NULL) {
        return 1;
    }
    if(b == NULL) {
        return -1;
    }

    int t1 = strcmp(a->artist,b->artist);

    if(t1 == 0) {
        return strcmp(a->name,b->name);
    }

    return t1;
}

struct song *insert_order(struct song *head, char *artist, char *name) {
    //case is first node
    struct song *new_song = make_song(artist, name);
    if(songcmp(head,new_song) > 0) {
        new_song->next = head;
        return new_song;
    }

    //other case
    struct song *cur = head;
    while(cur) {
        if(songcmp(cur->next,new_song) > 0) {
            new_song->next = cur->next;
            cur->next = new_song;
            return head;
        }
        cur = cur->next;
    }
    //should never get here
    return NULL;
}

struct song *find_song(struct song *head, char *artist, char *song) {
    struct song *cur = head;
    while(cur) {
        if(!strcmp(artist,cur->artist) && !strcmp(song,cur->name)) {
            return cur;
        }
        cur = cur->next;
    }
    return NULL;
}

struct song *first_song(struct song *head, char *artist) {
    struct song *cur = head;
    while(cur) {
        if(!strcmp(artist,cur->artist)) {
            return cur;
        }
        cur = cur->next;
    }
    return NULL;
}

struct song *random_song(struct song *head) {
    struct song *current = head;
    srand(time(NULL));
    int num = rand() % list_length(head);
    int count = 0;
    while(count < num) {
      count++;
      current = current->next;
    }
    return current;
}

struct song *free_song(struct song *old_song) {
    free(old_song);
    return NULL;
}

struct song *remove_song(struct song *head, char *artist, char *name) {
    struct song *old_song = find_song(head, artist, name);

    if(!songcmp(old_song,head)) {
        struct song *out = head->next;
        head = free_song(head);

        return out;
    }

    struct song *temp = head;
    struct song *last = head;

    while (head) {
      if (!songcmp(head, old_song)) {
        last->next = head->next;
        head = free_song(head);
      } else {
        last = head;
        head = head->next;
      }
    }
    return temp;
}

int list_length(struct song *head) {
  int count = 0;
    struct song *current = head;
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}

struct song *free_all(struct song *head) {
    while (head) {
      struct song *nextsong = head->next;
      head = free_song(head);
      head = nextsong;
    }
    return NULL;
}

void print_song(struct song *current) {
  if (current) {
    printf("%s\t\t%s\n", current->name, current->artist);
  } else {
    printf("DOES NOT EXIST\n");
  }
}

void print_all(struct song *head) {
    while(head) {
        print_song(head);
        head = head->next;
    }
}
