#include <stdio.h>

struct Time
{
    int sec;
    int min;
    int hrs;
};

int main()
{
    struct Time startTime, endTime, differTime;
    int startseconds, endseconds;

   printf("Enter the start time. \n");
   printf("Enter hours:\n minutes:\n seconds:\n ");
   scanf("%d %d %d", &startTime.hrs, &startTime.min,&startTime.sec);

   printf("Enter the stop time. \n");
   printf("Enter hours:\n minutes:\n  seconds:\n ");
   scanf("%d %d %d", &endTime.hrs,&endTime.min,&endTime.sec);
   
            if (startTime.sec > endTime.sec)
            {
                endTime.sec = endTime.sec + 60;
                --endTime.min;
            }

            if (startTime.min > endTime.min)
            {
                endTime.min = endTime.min + 60;
                --endTime.hrs;
            }

            differTime.hrs = endTime.hrs - startTime.hrs;
            differTime.min = endTime.min - startTime.min;
            differTime.sec = endTime.sec - startTime.sec;

           startseconds = (startTime.hrs * 60*60) + (startTime.min * 60) + (startTime.sec);
            endseconds = (endTime.hrs * 60*60) + (endTime.min * 60) + (endTime.sec); 

            printf("\n");
            printf("Time difference :\n");
            printf("%d:%d:%d\n", startTime.hrs, startTime.min, startTime.sec);
            printf("%d:%d:%d\n", endTime.hrs, endTime.min, endTime.sec);
            printf("is (in seconds):\n");
            printf("%d-%d=%d seconds\n", endseconds, startseconds, endseconds - startseconds);
            printf("is (in hours):\n");
            printf("%d:%d:%d hours", differTime.hrs, differTime.min, differTime.sec);

 return 0;
}
