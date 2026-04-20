#include <stdio.h>   
int main(void){
    int answer, guess;
    int count = 0;

    scanf("%d",&guess);
    
    do {
        
        scanf("%d", &guess);
        count++;
            
        if(answer > guess){
          printf("%d<?",guess);
        }
        else if(answer < guess){
            printf("%d>?", gues);
        }
        else {
            printf("%d==?",guess);
        }
    } while(guess != answer);
    
    printf("%d->", count);
    return 0;
}
