#include<stdio.h>
int main(){

    int getFirstDayofTheYear(int year){

    int day=(year*365+((year-1)/4)-((year-1)/100)+((year-1)/400))%7;

    return day;
    }
     char *month[] ={"January", "Febrauary", "March", "April", "May", "June", "JUly", "August", "September", "October", "November", "December"};
     //*month - string er array ,work like array string
     int daysInmonth[]= {31,28,31,30,31,30,31,31,30,31,30,31};



     int i,j,totaldays,weekday, spacecounter =0,year;

     printf("Enter your favourite year :\n");
     scanf("%d",&year);
     printf("\n\n************* WELCOME TO %d*************\n\n",year);

    //check if it a leap year or not.,,

    if((year % 4==0 && year%100 !=0) ||(year%400 ==0)){

        daysInmonth[1]=29;
    }


   //get the first day of the year;

     weekday=getFirstDayofTheYear(year);
     for(i=0; i<12; i++){
        printf("\t\n\n--------------%s---------------\n",month[i]);
        printf("\n    Sun  Mon  Tue  Wed Thu  Fri Sat\n");


         for(spacecounter=1; spacecounter<=weekday; spacecounter++){

            printf("     ");
         }
        totaldays=daysInmonth[i];
        for(j=1; j<=totaldays; j++){
            printf("%5d",j);
            weekday++;

            if(weekday>6){

                weekday=0;
                printf("\n");
            }
        }
     }

    return 0;

}
