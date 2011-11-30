#include "linked_list_cycle.h"

linked_list::element* linked_list::cycle::create_linked_list_with_cycle( int list_size, int cycle_on )
{
    if( list_size < 1 ) return 0;
    element* result = 0; // will be finished linked list with cycle
    element* cycle = 0; // element where the cycle will start
    element* cursor = 0; // current index
    // start conditions
    int size = 1;
    result = new element();
    result->val = 0; // for debugging purposes, for easy following the list
    cursor = result;
    // exception: if the first item shows to itself we found the cycle el. already
    if( cycle_on == 0 ) cycle = result;
    // loop
    while( size < list_size )
    {
        cursor->next = new element();
        cursor->next->val = cursor->val + 1; // set next index number
        cursor = cursor->next;
        ++size;
        // if this was set to cycle
        if( cycle_on > -1 )
        {
            if( cycle_on == size-1 ) // -1 to comply to zero based "index" of an element
            {
                cycle = cursor;
            }
            //if last, create cycle, then finish
            if( size == list_size && cycle != 0 )
            {
                cursor->next = cycle;
                ++size;
            }
        }
    }
    return result;
}

void linked_list::cycle::delete_linked_list_with_cycle( linked_list::element* list )
{
    // we must prevent the delete to cycle too
    element* cycle = linked_list::cycle::algorithm_floyd_find_cycle( list );
    element* temp = list;
    bool pass = true;
    while( list != 0 )
    {
        temp = list->next;
        delete list;
        list = temp;
        // let delete enter the loop
        if( temp == cycle )
        {
            // but only once pass this element
            if( pass ) pass = false;
            // the second time exit the loop
            else break;
        }
    }
}

linked_list::element* linked_list::cycle::algorithm_floyd_is_cycle( element* list )
{
    if( list == 0 )
        return 0;
    element* cycle = 0; //no cycle;
    element* tortoise = list;
    element* hare = list->next;
    while( tortoise != hare && hare != 0 && hare->next != 0 )
    {
        tortoise = tortoise->next;
        hare = hare->next->next;
    }
    if( tortoise == hare )
        cycle = hare;
    return cycle;
}

linked_list::element* linked_list::cycle::algorithm_floyd_find_cycle( element* list )
{
    int index = -1;
    element* cycle = algorithm_floyd_is_cycle( list );
    element* hare = cycle;
    element* tortoise = list;
    if( cycle != 0 )
    {
        index = 0;
        while( hare != tortoise )
        {
            if( index > 0 )
               tortoise = tortoise->next;
            hare = hare->next;
            ++index;
        }
    }
    return hare; /* same as tortoise */
}

linked_list::element* linked_list::cycle::algorithm_naive_find_cycle( element* list )
{
    element* p1 = list; int i1 = 0;
    element* result = 0;
    while( p1 != 0 )
    {
        p1 = p1->next;
        ++i1;
        element* p2 = list; int i2 = 0;
        while( p2 != p1 && i2 < i1 )
        {
            p2 = p2->next;
            ++i2;
        }
        if( p2 == p1 && i2 < i1 )
        {
            result = p1; /* same as p2 */
            break;
        }
    }
    return result;
}

linked_list::element* linked_list::cycle::algorithm_brent_is_cycle( element* list )
{
    if( list == 0 )
        return 0;
    int steps_taken = 0;
    int step_limit = 1;
    element* cycle = 0; //no cycle;
    element* tortoise = 0;
    element* hare = list;
    while( tortoise != hare && hare != 0 )
    {
        if( steps_taken == 0 || steps_taken == step_limit )
        {
            steps_taken = 0;
            step_limit *= 2;
            tortoise = hare;
        }
        hare = hare->next;
        ++steps_taken;
    }
    if( tortoise == hare )
        cycle = hare; // cycle
    return cycle; // this value tells nothing more that bool
}

linked_list::element* linked_list::cycle::algorithm_brent_find_cycle( element* list )
{
    // brent's algorithm copied, to get lambda value
    if( list == 0 )
        return 0;
    int index = 0;
    int steps_taken = 0;
    int step_limit = 1;
    element* tortoise = 0;
    element* hare = list;
    while( tortoise != hare && hare != 0 )
    {
        if( steps_taken == 0 || steps_taken == step_limit )
        {
            steps_taken = 0;
            step_limit *= 2;
            tortoise = hare;
        }
        hare = hare->next;
        ++steps_taken;
    }
    if( tortoise == hare )
    {
        index = 0;
        hare = list;
        tortoise = list;
        // forward the hare to how many steps from start has the match been found
        for( int i=0; i<steps_taken; i++)
        {
            hare = hare->next;
        }
        while( tortoise != hare )
        {
            tortoise = tortoise->next;
            hare = hare->next;
            ++index;
        }
    }
    return hare;
}
