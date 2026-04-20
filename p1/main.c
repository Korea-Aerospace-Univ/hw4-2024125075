#include <stdio.h>   
int main(void){
    int answer, guess; //내가 입력할 정답값(answer)과 맞출 값(guess)를 정수로 변수선언을 한다.
    int count = 0; // 몇 번째에 정답을 맞췄는지 세야하기때문에 그 값을 담을 변수 count를 초기화시킨다. 0부터 카운트를 해야 몇 번째에 정답을 맞췄는지 카운트가 제대로 되기때문.

    scanf("%d",&answer); //scanf로 정답을 먼저 입력을 한다.
    
    do { //do-while을 사용하여 do블록 안의 내용은 false라도 무조건 1번은 시행하게 한다.
        
        scanf("%d", &guess); //scanf로 내가 맞추는 정수를 입력을 한다.
        count++; // 그리고 입력할 때 1씩 카운트한다.
            
        if(answer > guess){ //만약 입력한 ansewer이 입력한 guess값보다 크다면
          printf("%d<?",guess); // guess값으로 입력한 정수에 <?를 붙여 출력한다.
        }
        else if(answer < guess){ //if 조건문이 false고 만약 guess값이 answer값보다 클 때는
            printf("%d>?", guess); // guess 값을 불러와 >?와 함께 출력한다.
        }
        else { // 위 두개의 조건식이 모두 아닐 때는
            printf("%d==?",guess); //guess값을 정수로 ==? 와 함께 출력한다.
        } //do 블록은 여기서 종료된다.
    } while(guess != answer); //do를 다 실행하고 난 뒤에는 while을 실행하는데 내가 맞추려고 입력한 값이 정답이 아니면 do로 다시 돌아가 반복한다.
    
    printf("%d->", count);  // 여태까지 입력했던 수를 센 count를 불러와 출력을 한다.
    
    return 0;
}
