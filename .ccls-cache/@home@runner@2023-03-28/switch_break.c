#include <stdio.h>
main(){    
  int a;
  printf("당신이 좋아하는 디저트는 무엇인가요? 아래의 번호를 선택해주세요.\n");
  printf("휘낭시에=1, 레몬파운드케잌=2, 마카롱=3,초코마들렌=4, 바스크치즈케이크=5, 모두 좋아하지 않는다=0\n");

  printf("선택한 번호를 입력해주세요: ");
  scanf("%d", &a);
  
 switch(a){
   case 1:
     printf("휘낭시에를 좋아하는군요!\n");
      break;
    case 2:
    printf("레몬파운드케잌을 좋아하는군요!!\n");
      break;
     case 3:
    printf("마카롱을 좋아하는군요!\n");
      break;

     case 4:
    printf("초코마들렌을 좋아하시는군요!\n");
      break;

     case 5:
    printf("바스크치즈케이크를 좋아하시는군요!\n");
      break;

   default:
    printf ("당신은 아마도 디저트를 좋아하지 않는 것 같군요ㅠㅠ...\n");
        break;

  printf("좋아하는 디저트 조사 끝!");      
}}