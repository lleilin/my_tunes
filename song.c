struct song *make_song(char *nn, char *na) {
    struct song *ns = malloc(sizeof(struct song));
    strncpy(ns->name,nn,sizeof(ns->name)-1);
    strncpy(ns->artist,na,sizeof(ns->artist)-1);
    ns->next = NULL;
    
    return ns;
}
