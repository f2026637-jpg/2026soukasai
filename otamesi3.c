#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int GetRandom(int arg_min,int arg_max);

int main(void){

    int ran;
    int n,i;
	int ar[5],ag[5],ab[5],qr[5],qg[5],qb[5];
    char irokae[100] = {"\","x","1","b","[","4","8",";","2",";","%","d",";","%","d",";","%","d","m"};

    srand((unsigned int)time(NULL));
    ran = GetRandom(10,10);

    if(ran == 10){
        n = 2;
        qr[0] = 64;
        qg[0] = 38;
        qb[0] = 15;
        qr[1] = 73;
        qg[1] = 50;
        qb[1] = 29;
    }

    printf("%s　　　　　　\x1b[m", irokae);

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
