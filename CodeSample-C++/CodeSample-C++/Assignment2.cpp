//
//  Assignment2.cpp
//  CodeSample-C++
//
//  Created by Davoud on 6/5/21.
//

#include "Assignment2.hpp"
#include <iostream>
#include <string>
using namespace std;
#include <stdio.h>
#include <stdlib.h>

// A linked list node

/* Given a reference (pointer to pointer) to the head of a
 list and an int, inserts a new node on the front of the
 list. */
void PageList::append(int page_numnber, string page_content, double frequency)
{
    Page* new_node = new Page;
    new_node->page_number = page_numnber;
    new_node->page_content = page_content;
    new_node->next = NULL;
    new_node->visit_frequency = frequency;
    Page* node = head;
    Page* last = NULL;
    
    if(node == NULL){
        head = new_node;
        new_node->next = NULL;
        new_node->prev = NULL;
    }
    else{
        while (node->next != NULL) {
            last = node;
            node = node->next;
        }
        node->next = new_node;
        new_node->prev = node;
    }
}

void PageList::push(int page_numnber, string page_content)
{
    Page* new_node = new Page;
    new_node->page_number = page_numnber;
    new_node->page_content = page_content;
    new_node->next = head;
    new_node->prev = NULL;
    if (head != NULL) head->prev = new_node;
    head = new_node;
}

/* Given a node as next_node, insert a new node before the
 * given node */
void PageList::insertBefore(Page* next_node, int page_numnber, string page_content)
{
    /*1. check if the given next_node is NULL */
    if (next_node == NULL) {
        printf("the given next node cannot be NULL");
        return;
    }
    
    /* 2. allocate new node */
    Page* new_node = new Page;
    
    /* 3. put in the data */
    new_node->page_number = page_numnber;
    new_node->page_content = page_content;
    
    /* 4. Make prev of new node as prev of next_node */
    new_node->prev = next_node->prev;
    
    /* 5. Make the prev of next_node as new_node */
    next_node->prev = new_node;
    
    /* 6. Make next_node as next of new_node */
    new_node->next = next_node;
    
    /* 7. Change next of new_node's previous node */
    if (new_node->prev != NULL)
        new_node->prev->next = new_node;
    /* 8. If the prev of new_node is NULL, it will be
     the new head node */
    else
        head = new_node;
}

// This function prints contents of linked list starting
// from the given node
void PageList::printList(Page* node, bool forward)
{
    Page* last = NULL;
    
    if (forward){
        while (node != NULL) {
            cout << "(" << node->page_content <<":"<< node->visit_frequency<< ")->";
            last = node;
            node = node->next;
        }
    }
    else{
        while (last != NULL) {
            cout<< "(" << last->page_content <<":"<< last->visit_frequency<< ")->";
            last = last->prev;
        }
    }
    cout<< endl;
}
double PageList::average_vist()
{
    Page* node = head;
    double sum=0;
    double count =0;
    while (node != NULL) {
        count++ ;
        sum += node->visit_frequency;
        node = node->next;
    }
    return (sum/count);
}

void PageList::delete_less_visited_pages()
{
    double average = average_vist();
    Page* node = head;
    if(node->visit_frequency < average){// delte the head
        Page* temp = node;
        (node->next)->prev = NULL;
        head=node->next;
        delete temp;
    }
    node = node->next;
    while (node != NULL) {
        if (node->visit_frequency < average){
            Page* temp = node;
            if(node->prev != NULL) {
                (node->prev)->next = node->next;
            }
            if(node->next != NULL) {
                (node->next)->prev = node->prev;
            }
            delete temp;
            node = node->next;
        }
        else{
            node = node->next;
        }
    }
}

/* Driver program to test above functions*/
PageList::PageList(int pages) noexcept
{
    /* Start with the empty list */
    head = NULL;
    for (int i=1;i<=pages;i++){
        append(i, "page" + to_string(i),rand() % 100);
    }
    //insertBefore(&head, head->next, 8);
    
    cout<< "Created NavigationList is: ";
    printList(head,true);
    delete_less_visited_pages();
    printList(head,true);
}

