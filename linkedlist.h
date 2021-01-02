#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include"player.h"

node_t *Initialize(player *pl);
void FreeList(node_t **head);
void InsertLastList(node_t **head,player *pl);

#endif