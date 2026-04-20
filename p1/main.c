#include <stdio.h>   
int main(void){
    int answer, guess;
    int count = 0;

    scanf("%d",&guess);
    
    do {
        count++;
        
        if(answer > guess){
          printf("%d<?",guess,guess);
        }
        else if(answer < guess){
            printf("%d>?", guess, guess);
        }
        else {
            printf("%d==?",guess, guess);
        }
    } while(guess != answer);
    
    printf("%d->", guess,count);
    return 0;
}
