#pragma once

#include <stdio.h>
#include <time.h>

class stopwatch
{

private:

    clock_t time_slices[2]; // can be expanded to record mean time

public:

    void start()
    {
        time_slices[0] = clock();
    }

    void stop()
    {
        time_slices[1] = clock();
    }

    // return duration in seconds
    double duration()
    {
        double duration = (double)(time_slices[1] - time_slices[0]);
        duration = duration / CLOCKS_PER_SEC;
        return duration;
    }

};