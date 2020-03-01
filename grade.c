#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define DEBUG 0
#define AMOUNT 10
float sum(int grade[]){
    float total=0.0;
    float aver=0.0;
    for(int a=0;a<AMOUNT;a++){
        total+=grade[a];
    }
    aver=total/AMOUNT;
    if(DEBUG>0){
        printf("total:%f aver:%f\n",total,aver);
    }
    return aver;
}
int pass(int grade[]){
    int a=0,pass_people=0;
    for(a=0;a<AMOUNT;a++){
        if(grade[a]>=60){
            pass_people+=1;
        }
    }
    if(DEBUG>0){
        printf("pass_people:%d\n",pass_people);
    }
    return pass_people;
}
/*int change_points(int grade[]){
    for(int a=0;a<AMOUNT;a++){
        double b=sqrt( (double) grade[a] );
        b=b*10.0+10.0;
        grade[a]=(int) b;
    }
}
*/

void test1() {
    int grade[AMOUNT]={60,1,1,1,1,1,1,1,1,1};
    float aver=sum(grade);
    int pass_people=pass(grade);
    printf("average:%.2f\n",aver);
    printf("pass_people_amount:%d\n",pass_people);
}
int main(){
    int grade[AMOUNT];
    int a=0,b=0,c=0,d=0;
    if(DEBUG>0){
        test1();
    }
    while(a<AMOUNT){
        scanf("%d",&grade[a]);
        a+=1;
    }
    if(DEBUG>0){
        while(b<AMOUNT){
            printf("%d ",grade[b]);
            b+=1;
        }
    }
/*    change_points(grade);
    if(DEBUG>0){
        printf("change_points:");
        while(c<AMOUNT){
            printf("%d ",grade[c]);
            c+=1;
        }
        printf("\n");
    }*/
    float aver=sum(grade);
    int pass_people=pass(grade);
   /* printf("change_points:");
    while(d<AMOUNT){
        printf("%d ",grade[d]);
        d+=1;
    }
    printf("\n");*/
    printf("average:%.2f\n",aver);
    printf("pass_people_amount:%d\n",pass_people);
}
