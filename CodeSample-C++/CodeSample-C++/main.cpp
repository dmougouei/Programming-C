//insert a new node in front of the list
#include <iostream>
#include <string>
#include "BookStore.hpp"
using namespace std;

// -------------------------------------------------------------------
int main()
{
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
    return 0;
}
