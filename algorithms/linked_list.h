#pragma once

namespace linked_list
{
    struct element
    {
        element() : val(0), next(0) {}
        int val; // sample of stored data
        element* next;
    };

    element* find_element( int index, element* in_list );
    int find_element( element* this_element, element* in_list );
}