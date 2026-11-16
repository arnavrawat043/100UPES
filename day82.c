#include <stdio.h>

// Define enumeration
enum TrafficLight
{
    RED,
    YELLOW,
    GREEN
};

int main()
{
    enum TrafficLight signal;

    // Assign traffic light value
    signal = RED;

    // Check traffic light signal
    switch (signal)
    {
        case RED:
            printf("Stop\n");
            break;

        case YELLOW:
            printf("Wait\n");
            break;

        case GREEN:
            printf("Go\n");
            break;

        default:
            printf("Invalid Signal\n");
    }

    return 0;
}