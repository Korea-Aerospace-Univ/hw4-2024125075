#include <stdio.h>   
int main(void){
    int answer, guess;
    int count;
    
    do {
        scanf("%d",&guess);
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
    
    printf("%d->시도횟수는 %d회", guess,count);
}



