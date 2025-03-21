//Read from command line arguments all and add them with tests
//Created by Relenk on 20.03.25.

#include <stdio.h>

const char x = 10;

int main(const int argc, const char * argv[]) {
    
    //if (argc > 2) gia na doume an ta chars einai pano apo dio gt?!
    //atoi(argv[2]); tha eprepe na xrisimopoiiso auto
    
    int x, y, z;
    printf("type the 2 numbers:");
    scanf("%d %d", &x, &y);
    //scanf("%d", &y);
    z = x + y;
    return z;
}
