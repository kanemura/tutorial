#include "../include/sub.h"

const char *hd[] = {"","グー","チョキ","パー"};
const char *hr[] = {"","はい","いいえ"};

void initialize(void)
{
  win_no = 0;
  lose_no = 0;
  draw_no = 0;

  srand(time(NULL));
}


void jyanken(void)
{     
  int i;
  ship = rand() % 6;   
  comp = rand()% 4 + 1;
       
  switch(ship){
  case 0 : printf("\n\nしれーかん！じゃんけんしましょ！\n");  break;                                           //雷
  case 1 : printf("\n\nじゃんけんするっぽい～♪\n");         break;                                           //夕立
  case 2 : printf("\n\nHEY、提督ぅー！じゃんけんするネー！\n");  break;                                      //金剛
  case 3 : printf("\n\n...む、何？じゃんけんがしたい？しょうがない、少々貴様に付き合ってやるか\f"); break;    //那智
  case 4 : printf("\n\n...何か用？じゃんけん？...いいけれど。\n"); break;                                //加賀
  case 5 : printf("\n\nああ〜！提督ぅ、お疲れさんっ♪ 野球拳しよー！！え、ダメ？ちぇー、なら普通のじゃんけんでいーよ\n"); //隼鷹
  }
	
        
  do{
       
    switch(ship){
    case 0 : printf("\nいっくわよ～！さいしょはグー！じゃんけんポン！・・・");                                                         break;
    case 1 : printf("\nいくっぽい～！さいしょはグー！じゃんけんっぽい～♪・・・");                                                     break;
    case 2 : printf("\nLet’s begin！Rock,Scissors,Paper 1,2,3!・・・");                                                              break; 
    case 3 : printf("\nいくぞ、じゃんけん・・・");                                                                                    break ; 
    case 4 : printf("\nはじめましょうか。掛け声が欲しいの？しょうがないわね、らしくないけれど。\nなんて言ったらいいの？...そう。\nさいしょはグー、じゃんけん・・・");    break;
    case 5 : printf("\nさいしょはグー！じゃんけんホイ！・・・");                              break;
    }
    for(i = 1; i < 4; i++)
      printf("(%d)%s", i, hd[i]);
    printf(":");
	    
    scanf("%s",c);
    human = atoi(c);

    if(human == 1|| human == 2 || human == 3) 
      {}else{
      printf("変なキーを押すのはやめるクマ～！"); 
    }
      
  }while(human < 1 || human > 3);
 
 
}

/*----勝ち負け、引き分け回数更新-----*/

void count_no(int result)
{
  switch(result){
  case 0 : draw_no++;  break;
  case 1 : lose_no++;  break;
  case 2 : win_no++;   break;

  }

}	

/*------判定結果（一時の）----------*/

void disp_result(int result)
{
      
  switch(result){
	  
  case 0 :  if(ship == 0){
      printf("引き分けよ！\n");
    }else if(ship == 1){
      printf("引き分けっぽい～。おなじ手を出すなんて、てーとくさん、夕立と気が合うっぽい。\n");
    }else if(ship == 2){
      printf("引き分けネー！Wow!提督と同じこと考えてたネー！私達LoveのPowerで結ばれてるネ！\n");
    }else if(ship == 3){
      printf("引き分けだ\n");
    }else if(ship == 4){
      printf("引き分けよ\n");     
    }else if(ship == 5){
      printf("引き分けかぁ〜！\n");
    }                                break;
  case 1 :  if(ship == 0){
      printf("しれーかん負けちゃったわね...しょげないでしれーかん！じゃんけんに負けても、私がいるじゃない！\n");
    }else if(ship == 1){
      printf("てーとくさんの負けっぽい！火力だけじゃなくて、夕立は運も強いっぽい！\n");        
    }else if(ship == 2){
      printf("提督の負けネー！HEY!提督ぅ〜、なんかおごってヨ〜！\n");
    }else if(ship == 3){
      printf("貴様の負けだな。もちろん負けたほうが酒を奢るのだろう？\nそうだな...今日はなんだか達磨が飮みたい気分だな。\n");
    }else if(ship == 4){
      printf("あなたの負けね。一航戦として当然の結果ね。\n");
    }else if(ship == 5){
      printf("提督の負けぇ〜！罰ゲームな！熱燗持って来てよ！熱燗！\n");
    }                               break;
  case 2 : if(ship == 0){
      printf("しれーかんの勝ちね！さすがはしれーかん！運が強いのね！\n");
    }else if(ship == 1){
      printf("てーとくさんの勝ちっぽい！うぅ〜悔しいっぽい〜\n");        
    }else if(ship == 2){
      printf("提督の勝ちデース！うぅ〜、次こそは私の実力見せてあげるネー！\n");
    }else if(ship == 3 ){
      printf("貴様の勝ちか、なんだその顔は...たかだかじゃんけんに勝ったぐらいでいい気になるなよ。\n今晩の飲み比べでメッタメタに負かしてやるからな！\n");
    }else if(ship == 4){
      printf("あなたの勝ちよ。たかだかじゃんけんだけれど、負ければそれなりに悔しいものね\n");
    }else if(ship == 5){
      printf("提督が勝っちゃったかぁ〜。ちぇー。提督が負けてたらお酒奢って貰おうと思ったのになぁ〜\nしょうがない、飛鷹にたかるかぁ〜。おーい！飛鷹〜、酒ちょーだい♪\n");
    }                               break;                                     
  }	
}


/*------コンティニュー？----------*/
int confirm_retry(void)
{
  int x;
 
  switch(ship){
  case 0 : printf("しれーかん！もう一回するわよね？ね？・・・");    break;
  case 1 : printf("もう一回しましょ！・・・");                     break;
  case 2 : printf("これでFinish？なわけないでしょ！・・・");       break;
  case 3 : printf("なんだ、まだ続けるのか？・・・");               break;
  case 4 : printf("もう一度するの？");                 break;
  case 5 : printf("もう一回しよーぜー！");                         break;
  } 
  for(x = 1; x <  3 ; x++)
    printf("(%d)%s", x, hr[x]);
  printf(":");
           
  scanf("%s",c);	
  x = atoi(c);
  if(x == 1 || x == 2)
    {}else{
    printf("…わざとやってるクマ？\n");
  }
	  
  
  return(x);
 
}


int jm(void)
{
  int judge;
  int retry;

  initialize();

  do{

    jyanken();

           switch(ship){
	   case 0 : printf("雷は%sで、しれーかんは%sよ！\n", hd[comp], hd[human]);               break;
	   case 1 : printf("夕立は%sで、てーとくさんは%sだったっぽい～\n", hd[comp], hd[human]);  break;
	   case 2 : printf("私は%sで、提督は%sデース！\n", hd[comp], hd[human]);                 break;
	   case 3 : printf("私は%sで、貴様は%sだな\n", hd[comp], hd[human]);                     break; 
	   case 4 : printf("私は%sで、あなたは%sね\n", hd[comp], hd[human]);                     break;
	   case 5 : printf("あたしが%sで、提督は%sだな！\n", hd[comp], hd[human]);               break;
     }   

	
	judge = (human - comp + 3)% 3;

	count_no(judge);

	disp_result(judge);
  
	do{ retry = confirm_retry();
	}while(retry < 1 || retry > 2);
       
  }while(retry == 1);

  printf("\n\nクマー。審判役の球磨クマ。総合結果をお知らせするクマ。\n%d勝%d敗%d分けだったクま。\n",win_no,lose_no,draw_no); 
       return(0);
       
}
