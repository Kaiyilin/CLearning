#include <stdio.h>

int main(){
    int scores[3];

    for (int i = 0; i < 3 ; i++){
        scores[i] = i * 45 +32;
        }
    printf("Scores Array %i", scores[1]);
    return 0;
}