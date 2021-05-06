//
//  BookStore.cpp
//  CodeSamples
//
//  Created by Davoud on 6/5/21.
//

#include "BookStore.hpp"
//insert a new node in front of the list
#include <iostream>
#include <string>
using namespace std;

void BookList::push(Book** head, string book_name, int book_sold)
{
    /* 1. create and allocate node */
    Book* newNode = new Book;
    /* 2. assign data to node */
    newNode->quantity = book_sold;
    newNode->name = book_name;
    /* 3. set next of new node as head */
    newNode->next = (*head);
    /* 4. move the head to point to the new node */
    (*head) = newNode;
}
// -------------------------------------------------------------------
//insert new node after a given node
void BookList::insertAfter(Book* prev_node, string book_name, int book_sold)
{
    /*1. check if the given prev_node is NULL */
    if (prev_node == NULL)
    {
        cout<<"the given previous node is required,cannot be NULL"; return; }
    
    /* 2. create and allocate new node */
    Book* newNode =new Book;
    
    /* 3. assign data to the node */
    newNode->name = book_name;
    newNode->quantity = book_sold;
    
    /* 4. Make next of new node as next of prev_node */
    newNode->next = prev_node->next;
    
    /* 5. move the next of prev_node as new_node */
    prev_node->next = newNode;
}
// -------------------------------------------------------------------
/* insert new node at the end of the linked list */
void BookList::append(Book** head, string book_name, float book_sold)
{
    /* 1. create and allocate node */
    Book* newNode = new Book;
    
    Book* last = *head; /* used in step 5*/
    
    /* 2. assign data to the node */
    newNode->quantity = book_sold;
    newNode->name = book_name;
    /* 3. set next pointer of new node to null as its the last node*/
    newNode->next = NULL;
    
    /* 4. if list is empty, new node becomes first node */
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
    /* 5. Else traverse till the last node */
    while (last->next != NULL)
        last = last->next;
    
    /* 6. Change the next of last node */
    last->next = newNode;
    return;
}
// -------------------------------------------------------------------
// display linked list contents
void BookList::displayList(Book *node)
{
    //traverse the list to display each node
    if(node== NULL)
        cout<<"null";
    else{
        while (node != NULL)
        {
            cout<<node->name +":" << node->quantity<< (node->next != NULL? "-->" : "");
            node = node->next;
        }
    }
    cout <<endl;
}
// -------------------------------------------------------------------
// find the best seller
int BookList::bestSeller(Book* head){
    Book *node = head;
    string maxName = node->name;
    int max= node->quantity;
    node = node -> next;
    while (node != NULL)
    {
        if (node->quantity > max){
            max = node->quantity;
            maxName = node->name;
        }
        node = node->next;
    }
    //cout<<maxName + ": " << max <<endl;
    return max;
}
// -------------------------------------------------------------------
// find the second best seller
void BookList::secondBestSeller(Book* head){
    if (head != NULL){
        int max = bestSeller(head);
        Book *node = head;
        if (node->next != NULL){
            //traverse the list to display each node
            string secondMaxName = node->name;
            int secondMax= node->quantity;
            node = node -> next;
            while (node != NULL)
            {
                if (node->quantity > secondMax && node->quantity < max){
                    secondMax = node->quantity;
                    secondMaxName = node->name;
                }
                node = node->next;
            }
            cout<<secondMaxName + ": " << secondMax <<endl;
        }
        else{
            cout<<node->name + ": " << node->quantity <<endl;
        }
        
    }
}
// -------------------------------------------------------------------
void BookList::secondBestSeller2(Book *head){
    if (head != NULL){
        if (head->next != NULL){
            Book *node = head;
            string maxName = node->name;
            string maxName_2 = node->name;
            int max= node->quantity;
            int max_2= 0;
            while (node != NULL)
            {
                if (node->quantity > max){
                    max_2 = max;
                    maxName_2 = maxName;
                    max = node->quantity;
                    maxName = node->name;
                }
                else if (node->quantity > max_2 && node->quantity <max){
                    max_2 = node->quantity;
                    maxName_2 = node->name;
                }
                node = node->next;
            }
            cout<<maxName_2 + ": " << max_2 << endl;
        }else{
            cout<<head->name + ": " << head->quantity << endl;
        }
    }
}
// -------------------------------------------------------------------
