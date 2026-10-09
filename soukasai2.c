#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int GetRandom(int arg_min,int arg_max);

int main(void){

    int ran;
    int n,i;
	int ar[5],ag[5],ab[5],qr[5],qg[5],qb[5];

    srand((unsigned int)time(NULL));
    ran = GetRandom(1,10);

    if(ran == 1){
        n = 1;
        qr[0] = 100;
        qg[0] = 0;
        qb[0] = 0;
    } else if(ran == 2){
        n = 1;
        qr[0] = 0;
        qg[0] = 100;
        qb[0] = 0;
    } else if(ran == 3){
        n = 1;
        qr[0] = 0;
        qg[0] = 0;
        qb[0] = 100;
    } else if(ran == 4){
          n = 3;
        qr[0] = 90;
        qg[0] = 81;
        qb[0] = 32;
        qr[1] = 100;
        qg[1] = 91;
        qb[1] = 32;
        qr[2] = 92;
        qg[2] = 83;
        qb[2] = 67;

        qr[0] = qr[0] * 2.55;
        qg[0] = qg[0] * 2.55;
        qb[0] = qb[0] * 2.55;
        qr[1] = qr[1] * 2.55;
        qg[1] = qg[1] * 2.55;
        qb[1] = qb[1] * 2.55;
        qr[2] = qr[2] * 2.55;
        qg[2] = qg[2] * 2.55;
        qb[2] = qb[2] * 2.55;

        printf("/n");
        printf("　　　　\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　\x1b[m\n",qr[1],qg[1],qb[1],qr[0],qg[0],qb[0],qr[1],qg[1],qb[1],qr[0],qg[0],qb[0]);
        printf("　　\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　\x1b[m\n",qr[1],qg[1],qb[1],qr[0],qg[0],qb[0],qr[1],qg[1],qb[1],qr[0],qg[0],qb[0],qr[1],qg[1],qb[1],qr[0],qg[0],qb[0]);
        printf("\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　\x1b[m\n",qr[1],qg[1],qb[1],qr[0],qg[0],qb[0],qr[1],qg[1],qb[1],qr[0],qg[0],qb[0],qr[1],qg[1],qb[1],qr[0],qg[0],qb[0],qr[1],qg[1],qb[1],qr[0],qg[0],qb[0]);
        printf("\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　\x1b[m\n",qr[0],qg[0],qb[0],qr[1],qg[1],qb[1],qr[0],qg[0],qb[0],qr[1],qg[1],qb[1],qr[0],qg[0],qb[0],qr[1],qg[1],qb[1],qr[0],qg[0],qb[0],qr[1],qg[1],qb[1]);
        printf("\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　　　\x1b[m\n",qr[1],qg[1],qb[1],qr[0],qg[0],qb[0],qr[1],qg[1],qb[1],qr[0],qg[0],qb[0],qr[1],qg[1],qb[1],qr[0],qg[0],qb[0],qr[1],qg[1],qb[1]);
        printf("\x1b[48;2;%d;%d;%dm　　　　　　　　　　　　\x1b[48;2;%d;%d;%dm　　　　\x1b[m\n",qr[1],qg[1],qb[1],qr[2],qg[2],qb[2]);
        printf("　　\x1b[48;2;%d;%d;%dm　　　　　　　　　　　　\x1b[m\n",qr[2],qg[2],qb[2]);
         printf("/n");

        qr[0] = qr[0] / 2.55;
        qg[0] = qg[0] / 2.55;
        qb[0] = qb[0] / 2.55;
        qr[1] = qr[1] / 2.55;
        qg[1] = qg[1] / 2.55;
        qb[1] = qb[1] / 2.55;
        qr[2] = qr[2] / 2.55;
        qg[2] = qg[2] / 2.55;
        qb[2] = qb[2] / 2.55;

    } else if(ran == 5){
        n = 1;
        qr[0] = 100;
        qg[0] = 0;
        qb[0] = 100;
    } else if(ran == 6){
        n = 3;
        qr[0] = 73;
        qg[0] = 50;
        qb[0] = 29;
        qr[1] = 92;
        qg[1] = 83;
        qb[1] = 67;
        qr[2] = 100;
        qg[2] = 0;
        qb[2] = 27;

        qr[0] = qr[0] * 2.55;
        qg[0] = qg[0] * 2.55;
        qb[0] = qb[0] * 2.55;
        qr[1] = qr[1] * 2.55;
        qg[1] = qg[1] * 2.55;
        qb[1] = qb[1] * 2.55;
        qr[2] = qr[2] * 2.55;
        qg[2] = qg[2] * 2.55;
        qb[2] = qb[2] * 2.55;

        printf("　　　　\x1b[48;2;%d;%d;%dm　　　　　　　　\x1b[m\n",qr[0],qg[0],qb[0]);
       printf("　　\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　　　　　　　\x1b[48;2;%d;%d;%dm　　\x1b[m\n",qr[0],qg[0],qb[0],qr[1],qg[1],qb[1],qr[0],qg[0],qb[0]);
       printf("\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　　　\x1b[48;2;%d;%d;%dm　　　　　　\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　\x1b[m\n",qr[0],qg[0],qb[0],qr[1],qg[1],qb[1],qr[2],qg[2],qb[2],qr[1],qg[1],qb[1],qr[0],qg[0],qb[0]);
       printf("\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　　　　　　　\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　\x1b[m\n",qr[0],qg[0],qb[0],qr[1],qg[1],qb[1],qr[2],qg[2],qb[2],qr[1],qg[1],qb[1],qr[0],qg[0],qb[0]);
       printf("　　\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　　　　　\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　\x1b[m\n",qr[0],qg[0],qb[0],qr[2],qg[2],qb[2],qr[1],qg[1],qb[1],qr[0],qg[0],qb[0]);
       printf("　　\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　　　\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　\x1b[m\n",qr[0],qg[0],qb[0],qr[1],qg[1],qb[1],qr[2],qg[2],qb[2],qr[1],qg[1],qb[1],qr[0],qg[0],qb[0]);
       printf("　　\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　　　　　　　\x1b[48;2;%d;%d;%dm　　\x1b[m\n",qr[0],qg[0],qb[0],qr[1],qg[1],qb[1],qr[0],qg[0],qb[0]);
       printf("　　\x1b[48;2;%d;%d;%dm　　　　　　　　　　　　\x1b[m\n\n",qr[0],qg[0],qb[0]);

       qr[0] = qr[0] / 2.55;
        qg[0] = qg[0] / 2.55;
        qb[0] = qb[0] / 2.55;
        qr[1] = qr[1] / 2.55;
        qg[1] = qg[1] / 2.55;
        qb[1] = qb[1] / 2.55;
        qr[2] = qr[2] / 2.55;
        qg[2] = qg[2] / 2.55;
        qb[2] = qb[2] / 2.55;

    } else if(ran == 7){
       n = 4;
        qr[0] = 73;
        qg[0] = 50;
        qb[0] = 29;
        qr[1] = 92;
        qg[1] = 83;
        qb[1] = 67;
        qr[2] = 46;
        qg[2] = 0;
        qb[2] = 54;
        qr[3] = 37;
        qg[3] = 0;
        qb[3] = 40;

        qr[0] = qr[0] * 2.55;
        qg[0] = qg[0] * 2.55;
        qb[0] = qb[0] * 2.55;
        qr[1] = qr[1] * 2.55;
        qg[1] = qg[1] * 2.55;
        qb[1] = qb[1] * 2.55;
        qr[2] = qr[2] * 2.55;
        qg[2] = qg[2] * 2.55;
        qb[2] = qb[2] * 2.55;
        qr[3] = qr[3] * 2.55;
        qg[3] = qg[3] * 2.55;
        qb[3] = qb[3] * 2.55;

        printf("　　　　\x1b[48;2;%d;%d;%dm　　　　　　　　\x1b[m\n",qr[0],qg[0],qb[0]);
       printf("　　\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　　　　　　　\x1b[48;2;%d;%d;%dm　　\x1b[m\n",qr[0],qg[0],qb[0],qr[1],qg[1],qb[1],qr[0],qg[0],qb[0]);
       printf("\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　　　\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　　　\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　\x1b[m\n",qr[0],qg[0],qb[0],qr[1],qg[1],qb[1],qr[3],qg[3],qb[3],qr[2],qg[2],qb[2],qr[1],qg[1],qb[1],qr[0],qg[0],qb[0]);
       printf("\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　　　　　\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　\x1b[m\n",qr[0],qg[0],qb[0],qr[1],qg[1],qb[1],qr[2],qg[2],qb[2],qr[3],qg[3],qb[3],qr[1],qg[1],qb[1],qr[0],qg[0],qb[0]);
       printf("　　\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　[48;2;%d;%d;%dm　　\x1b[m\n",qr[0],qg[0],qb[0],qr[2],qg[2],qb[2],qr[3],qg[3],qb[3],qr[2],qg[2],qb[2],qr[1],qg[1],qb[1],qr[0],qg[0],qb[0]);
       printf("　　\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　　　\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　\x1b[m\n",qr[0],qg[0],qb[0],qr[1],qg[1],qb[1],qr[2],qg[2],qb[2],qr[1],qg[1],qb[1],qr[0],qg[0],qb[0]);
       printf("　　\x1b[48;2;%d;%d;%dm　　\x1b[48;2;%d;%d;%dm　　　　　　　　\x1b[48;2;%d;%d;%dm　　\x1b[m\n",qr[0],qg[0],qb[0],qr[1],qg[1],qb[1],qr[0],qg[0],qb[0]);
       printf("　　\x1b[48;2;%d;%d;%dm　　　　　　　　　　　　\x1b[m\n\n",qr[0],qg[0],qb[0]);

       qr[0] = qr[0] / 2.55;
        qg[0] = qg[0] / 2.55;
        qb[0] = qb[0] / 2.55;
        qr[1] = qr[1] / 2.55;
        qg[1] = qg[1] / 2.55;
        qb[1] = qb[1] / 2.55;
        qr[2] = qr[2] / 2.55;
        qg[2] = qg[2] / 2.55;
        qb[2] = qb[2] / 2.55; 
        qr[3] = qr[3] / 2.55;
        qg[3] = qg[3] / 2.55;
        qb[3] = qb[3] / 2.55; 

    } else if(ran == 8){
        n = 1;
        qr[0] = 0;
        qg[0] = 0;
        qb[0] = 0;
    } else if(ran == 9){
        n = 2;
        qr[0] = 64;
        qg[0] = 38;
        qb[0] = 15;
        qr[1] = 89;
        qg[1] = 65;
        qb[1] = 45;
    } else if(ran == 10){
        n = 2;
        qr[0] = 64;
        qg[0] = 38;
        qb[0] = 15;
        qr[1] = 73;
        qg[1] = 50;
        qb[1] = 29;
    }

    for( i=0 ; i<n ; i++ ){
        qr[i] = qr[i] * 2.55;
        qg[i] = qg[i] * 2.55;
        qb[i] = qb[i] * 2.55;

        printf("\x1b[mこの色を作ろう! : ");
        printf("\x1b[48;2;%d;%d;%dm　　　　　　\x1b[m\n",qr[i],qg[i],qb[i]);

        printf("赤の輝度値を入力--> ");
	    scanf("%d",&ar[i]);
	    printf("緑の輝度値を入力--> ");
	    scanf("%d",&ag[i]);
	    printf("青の輝度値を入力--> ");
	    scanf("%d",&ab[i]);

        ar[i] = ar[i] * 2.55;
        ag[i] = ag[i] * 2.55;
        ab[i] = ab[i] * 2.55;

        printf("\n");
    }

    for( i=0 ; i<n ; i++ ){
        printf("君の入力した色 %d : ", i+1);
        printf("\x1b[49m\x1b[48;2;%d;%d;%dm　　　　　　\x1b[m\n",ar[i],ag[i],ab[i]);
    }
    
	return(0);
 
}

int GetRandom(
    int arg_min,
    int arg_max
){
    return arg_min + (int)(rand()*(arg_max - arg_min + 1.0 ) / ( 1.0 + RAND_MAX) );
}
