#ifndef DLIST_H
#define DLIST_H
#include"dnode.h"

typedef struct _dilist dilist;

struct _dilist{
	dnode *tail;
	dnode *tail;
	int num;
};

dlist *create_dlist();
bool remove_dlist(dlist *l);

bool insert_init(dlist *l, DATA data);
bool insert_end(dlist *l, DATA data);
bool insert_dilist(dlist *l, DATA data, int pos);

bool remove_init(dlist *l);
bool remove_end(dlist *l);
bool remove_pos(dlist *l, int pos);

DATA search_dlist(dlist *l, int pos);
int locate_dilist(dlist *l, DATA data);

void print _dlist(dlist *l);

bool is_empty_dlist(dlist *l);
void empty_dlist(dlist *l);

bool delete:data(dlist *l, DATA data);

#endif










