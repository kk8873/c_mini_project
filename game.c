// Clap - 4 Mini  C language project [KARAN SINGH  - RA2111003011002]


/* So in this project there are three Character Snake , Gun and Water;
 --If  Snake  and Water  come then Snake win  = It will Drink Water.
 --If  Snake and  Gun  Come then Gun win       = It will Hit Snake.
 --If Gun and Water come then Water win         = It will destroy gun System
*/

// So For applying above given condition We use If else Statments.




#include<stdio.h>
#include<stdlib.h>
#include<time.h>



int snakeWaterGun(char you, char comp){
   
    if(you == comp){
        return 0;
    }

    

    if(you=='s' && comp=='g'){
        return -1;
    }
    else if(you=='g' && comp=='s'){
        return 1;
    }

    if(you=='s' && comp=='w'){
        return 1;
    }
    else if(you=='w' && comp=='s'){
        return -1;
    }

    if(you=='g' && comp=='w'){
        return -1;
    }
    else if(you=='w' && comp=='g'){
        return 1;
    }

}
int main(){
    char you, comp;
    srand(time(0));
    int number = rand()%100 + 1;

    if(number<33){
        comp = 's';
    }
    else if(number>33 && number<66){
        comp='w';
    }
    else{
        comp='g';
    }
    int c=1;
    char str[50];
    printf("Enter your name : ");
    scanf("%s",str);
    int d=0,w=0,l=0;
    while(c!=10)
    {
        printf("Enter 's' for snake, 'w' for water and 'g' for gun\n");
        scanf("%c", &you);
        int result = snakeWaterGun(you, comp);
        if(result ==0){
            printf("Game draw!\n");
            printf("You chose %c and computer chose %c. ", you, comp);
            printf("\n");
            d++;
        }
        else if(result==1){
            printf("%s win!\n",str);
            printf("You chose %c and computer chose %c. ", you, comp);
            printf("\n");
            w++;
        }
        else if(result==-1){
            printf("%s Lose!\n",str);
            printf("You chose %c and computer chose %c. ", you, comp);
            printf("\n");
            l++;
        }
        c++;
        
    }
    printf("Computer won %d matches\n",l);
    printf("%s won %d matches\n",str,w);
    printf("%d matches was a draw\n",d);
    printf("\n");
    
    return 0;
}