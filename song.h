#ifndef SONG_H
#define SONG_H

struct song{
  char name[128];
  char artist[128];
  struct song *next;
};

struct song *make_song(char *new_name, char *new_artist);
struct song *insert_front(struct song *head, struct song *new_song);
struct song *insert_order(struct song *head, struct song *new_song); 
struct song *insert_alpha(struct song *head, struct song *new_song);
void print_list(struct song *head);
struct song *find_song(struct song *head, char *artist, char *song);
struct song *first_song(struct song *head, char *artist);
struct song *random_song(struct song *head);
struct song *remove_song(struct song *head, struct song *song);
struct song *free_songs(struct song *head);

#endif
