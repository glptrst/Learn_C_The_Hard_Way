#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;

    

    // let's make our own array of strings
    char *states[] = {
        "California", "Oregon",
        NULL,
        "Washington", "Texas"
    };
    int num_states = 5;

    /* extra: assigning an element of argv to the states array
    states[4] = argv[0];
    */

    for (i = 0; i < num_states; i++) {
        printf("state %d: %s\n", i, states[i]);
    }
    
    /* extra: assigning an element of states to the argv array
    argv[0] = states[0];
    */

    

    // go through each string in argv
    // why am I skipping argv[0]?
    for (i = 0; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[i]); 
    }    
    return 0;
}
