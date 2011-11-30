#pragma once

#include "linked_list.h"

namespace linked_list
{

namespace cycle
{

    // create random linked list with cycle, based on list size and an element
    // where the cycle will start
    element* create_linked_list_with_cycle( int list_size, int cycle_on );

    // delete any linked list with cycle
    void delete_linked_list_with_cycle( element* list );

    // Answer using Floyd's algorithm:
    // does this linked list cycle?
    element* algorithm_floyd_is_cycle( element* list );
    // where does the cycle start?
    element* algorithm_floyd_find_cycle( element* list );

    // Answer using naive implementation:
    // does this linked list cycle? where does the cycle start?
    element* algorithm_naive_find_cycle( element* list );

    // Answer using Brent's algorithm:
    // does this linked list cycle?
    element* algorithm_brent_is_cycle( element* list );
    // where does the cycle start?
    element* algorithm_brent_find_cycle( element* list );

}

}