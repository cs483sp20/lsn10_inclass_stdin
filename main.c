#include <stdio.h>

int main(void) {

    int values[100000];
    int i = 0;
    int ret = 1; // return value from fscanf

    // read values until a non number is input.
    // the word end would work nicely to
    // terminate input.
    ret = fscanf(stdin,"%d", &values[i]);
    do {
        printf("value %d: %d\n",i,values[i]);
        i++;
        ret = fscanf(stdin,"%d", &values[i]);
    } while (ret != 0);

    return 0;
}
