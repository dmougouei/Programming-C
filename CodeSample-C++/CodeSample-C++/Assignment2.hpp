//
//  Assignment2.hpp
//  CodeSample-C++
//
//  Created by Davoud on 6/5/21.
//

#ifndef Assignment2_hpp
#define Assignment2_hpp

#endif /* Assignment2_hpp */

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;


class Page {
public:
    int page_number = 0;
    int visit_frequency = 0;
    string page_content = "";
    Page* next = NULL;
    Page* prev = NULL;// previous
};
class PageList{
public:
    Page* head; // point to the first page
    void append(int page_number, string content, double visit_frequency);
    void push(int page_number, string content);
    /* Given a node as next_node, insert a new node before the
     * given node */
    void insertBefore(Page* next_node, int page_number, string content);
    // This function prints contents of linked list starting
    // from the given node in forward or backward direction.
    void printList(Page* node, bool forward);
    double average_vist(); // compute the average visit_frequency of teh pages in the list
    void delete_less_visited_pages(); // delete the pages whose visit_frequency is less than the average visit_frequency of all pages in the list
    PageList(int pages) noexcept;
};
