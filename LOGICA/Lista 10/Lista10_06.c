#include <stdio.h>

int main (){
    char str1[100], str2[100];
    int i, score1 = -2, score2 = -2, scoreSum = 1, j = 0;
    
    for(i = 0; i < sizeof(str1); i++){
        str1[i] = '$';
        str2[i] = '$';
    }

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    for(i = 0; i < 100; i++){
        if(str1[i] != '$'){
            score1++;
        }
        if(str2[i] != '$'){
            score2++;
        }
    }

    scoreSum += score1 + score2;
    char str3[scoreSum];

    for(i = 0; i <= scoreSum; i++){
        if(i < score1){
            str3[i] = str1[i];
        } else if(i == score1){
            str3[i] = ' ';
        } else if(i > score1 && i < scoreSum){
            str3[i] = str2[j];
            j++;
        }
    }

    puts(str3);
    
    printf("Tamanhos: %d %d %d\n", score1, score2, scoreSum);

    return 0;
}