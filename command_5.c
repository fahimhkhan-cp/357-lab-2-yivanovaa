#include <stdio.h>

int main(int argc, char *argv[]) { //in-class presentation for refeence
    for (int i = 1; i < argc; i++) { //itterate through the array (I had issues with the nums in the array so I used google resources to find out why the num needs to be 1 instead of 0)
        if (argv[i][0] == '-') { //check if the string begins with "-"
            printf("%s\n", argv[i]); //print
        }
    }
    return 0; 
}
