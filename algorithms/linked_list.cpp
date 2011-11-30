#include "linked_list.h"

    linked_list::element* linked_list::find_element( int index, linked_list::element* in_list )
    {
        linked_list::element* result = in_list;
        for( int i=0; i < index && result != 0; i++ )
        {
            result = result->next;
        }
        return result;
    }

    int linked_list::find_element( linked_list::element* this_element, linked_list::element* in_list )
    {
        if( this_element == 0 || in_list == 0 )
            return -1;
        linked_list::element* current = in_list;
        int resultIndex = 0;
        while( current != 0 && this_element != current )
        {
            current = current->next;
            ++resultIndex;
        }
        // exceptions
        if( this_element != current ) // the list rolled out to the end without finding element
            resultIndex = -1; // that was not true result
        return resultIndex;
    }