#ifndef __LINKED_LIST_MY_H_
#define __LINKED_LIST_MY_H_

#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;

typedef struct TagSLLNode
{
    ElementType Data;
    struct TagSLLNode* NextNode;
}Node;

// Create
void AppendNode0(Node** List, int Data);
void InsertNode0(Node** List, int Location, int Data);

// Update
void ModifyNode0(Node** List, int Location, int Data);

// Delete
void DeleteNode0(Node** List, int Location);

// Read
int GetNode0(Node* List, int Location);

// Size
int GetNodeSize0(Node* List);

// Print
void Print0(Node* List);
#endif