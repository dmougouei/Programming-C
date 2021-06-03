//insert a new node in front of the list
#include <iostream>
#include <string>
#include "Exercise4.hpp"
#include "Exercise5.hpp"
#include "Assignment2.hpp"

using namespace std;

// -------------------------------------------------------------------
int main()
{
    // Run Exercise 4
    
    BookList books;
    books.head = NULL;
    books.append(&books.head,"Book1", 10);
    books.push(&books.head, "Book2", 20);
    books.push(&books.head, "Book3", 30);
    books.append(&books.head, "Book4", 40);
    books.insertAfter(books.head->next, "Book5",50);
    books.append(&books.head, "Book6", 45);
    books.append(&books.head, "Book7", 45);
    books.append(&books.head, "Book8", 65);
    books.displayList(books.head);
    books.secondBestSeller(books.head);
    books.secondBestSeller2(books.head);
    // Run Assignment 2
    PageList list(100);
    // Run Exercise 5
    HanoiTower ht;
    ht.tower(3, 'A', 'B', 'C');
    ht.tower(5, 'A', 'B', 'C');
    ht.tower(-3, 'A', 'B', 'C');
    ht.tower(0, 'A', 'B', 'C');
    return 0;
}
