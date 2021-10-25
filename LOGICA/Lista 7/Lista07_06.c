#include <stdio.h>

int main (){
    int i, j = 7, val;

    for(i = 0; i <= 15; i++){
        if(i < 3){
            val = 1;
            printf("I=%i J=%i\n", val, j);
            j--;
        } else if(i > 3 && i <= 6){
            val = 3;
            if(i == 4){
            j = 7;
            }
            printf("I=%i J=%i\n", val, j);
            j--;
        } else if(i > 6 && i <= 9){
            val = 5;
            if(i == 7){
            j = 7;
            }
            printf("I=%i J=%i\n", val, j);
            j--;
        } else if(i > 9 && i <= 12){
            val = 7;
            if(i == 10){
            j = 7;
            }
            printf("I=%i J=%i\n", val, j);
            j--;
        } else if(i > 12 && i <= 15){
            val = 9;
            if(i == 13){
            j = 7;
            }
            printf("I=%i J=%i\n", val, j);
            j--;
        }
    }
    return 0;
}