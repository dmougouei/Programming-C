//
//  BookStore.hpp
//  CodeSamples
//
//  Created by Davoud on 6/5/21.
//

#ifndef BookStore_hpp
#define BookStore_hpp

#include <stdio.h>

#endif /* BookStore_hpp */
#include <iostream>
#include <string>
using namespace std;

// A linked list node
class Book
{
public:
    int quantity;
    string name;
    Book *next;
};
class BookList{
public:
    Book* head = NULL;
    void push(Book** head, string book_name, int book_sold);
    void insertAfter(Book* prev_node, string book_name, int book_sold);
    void append(Book** head, string book_name, float book_sold);
    void displayList(Book *node);
    int bestSeller(Book* head);
    void secondBestSeller(Book* head);
    void secondBestSeller2(Book* head);

};
