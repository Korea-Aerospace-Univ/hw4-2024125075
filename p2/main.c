#include <stdio.h>

int main() {
    int N; // 입력될 문자의 개수
    scanf("%d", &N); // 입력될 문자의 개수(정수)를 입력받음.

    int min_cnt = 0 ;//현재 연속해서 나오고 있는 소문자길이 변수
    int digit_cnt = 0; // 현재 연속해서 나오고 있는 숫자의 개수를 실시간으로 세는 카운터
    int max_alpha = 0; //지금까지 나온 소문자 연속 길이 중 가장 큰 값(최댓값)
    int max_digit = 0; //지금까지 나온 숫자 연속 길이 중 가장 큰 값(최댓값) 

    char ch; //입력된 문자를 하나 담아두는 변수

    for (int i = 0; i < N; i++) {  // 초기, 조건(i가 입력될 문자개수보다 작으면, 문자개수 증가시킨다)
        scanf(" %c", &ch);  //문자를 입력받는다.

        
        if (ch >= 'a' && ch <= 'z') { //만약 문자(ch)값이 소문자이면
            min_cnt++;   // 소문자입력 수 카운트함
            digit_cnt = 0; // 숫자를 입력받으면 길막 당해서 현재 세던 카운트 다시 0으로 초기화
        }
        
        else {
            digit_cnt++; //아니라면 카운트 증가
            min_cnt = 0; //그리고 최소 소문자길이수는 0으로 초기화
        }

        if (min_cnt > max_alpha) //지금 늘어난 소문자 카운트(min_cnt)가 내가 예전에 기록했던 최고 기록(max_lower)보다 크니?" 크다면 최고 기록을 갈아치웁니다.
            max_alpha = min_cnt; //현재 길이의 수를 최대 문자길이의 수로 바꾼다.
            
        if (digit_cnt > max_digit) //입력된문자길이 
            max_digit = digit_cnt; //
    }

    printf("%d\n", max_alpha);
    printf("%d\n", max_digit);

    return 0;
}
