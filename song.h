#ifndef SONG_H
#define SONG_H

struct song{
  char name[128];
  char artist[128];
  struct song *next;
};

struct song *make_song(char *new_artist, char *new_name);
struct song *insert_front(struct song *head, char *artist, char *name);
struct song *insert_order(struct song *head, char *artist, char *name);
void print_list(struct song *head);
struct song *find_song(struct song *head, char *artist, char *song);
struct song *first_song(struct song *head, char *artist);
struct song *random_song(struct song *head);
struct song *remove_song(struct song *head, struct song *old_song);
struct song *free_all(struct song *head);

void print_song(struct song *current);
void print_all(struct song *head);

int list_length(struct song *head);

#endif
