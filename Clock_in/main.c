#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <windows.h>
int write_in(int res_a,int res_b);//write into a text or db.
int ping_result();
int whether_on();
int main()
{

    whether_on();

    return 0;
}
/*Judge whether he is on.*/
int whether_on()
{
    int a=0,b=0;
    //Judge on
    do
    {
        if(ping_result())//First Judge.
           {
               a=1;
        Sleep(1800000);//Pause time on ms unit.
        if(ping_result())//Second Judge.
        {
            write_in(a,b);
        }
           }
        else
        {
            a=0;
            Sleep(600000);
            continue;
        }

    }
    while(b>0);
    return a;
}


/*Judge the ping_result and return */
int ping_result()
{

    FILE *fp2;
    int i=0,str_size;
    char buff[100];

    //ping the IP of someone.
    system("ping 192.168.1.1>1.txt");

    if((fp2=fopen("1.txt","r"))==NULL)
       {
           printf("\nFailed to open \'Ping.txt\'!");
           exit(1);
       }
     else
     {
         for(i=0;i<9;i++)
         {
             fgets(buff,99,fp2);
        }
     }

     fclose(fp2);

     //Judge the result based on the string's size.
    if((strlen(buff))==57)
        return 1;
    else
        return 0;


}

int write_in(int res_a,int res_b) //There is a potential problem about writing in.
{
    FILE *fp1;
    time_t on_time,off_time; //The off_time is still not completed.
    struct tm *ptr;
    char buf1[80],buf2[80];
    time(&on_time);
    ptr=localtime(&on_time);


    if((fp1=fopen("CLOCK_IN.xls","a+"))==NULL)
        {
            printf("\nFailed to open the \'CLOCK_IN\' file!\n");
            exit(1);
        }
    if(res_a)
    {
        strftime(buf1,80,"%Y-%m-%d's on_time is %X",ptr);//Why the %F format can't be print?
        fprintf(fp1,"%s\n",buf1);
        puts(buf1);
    }
    if(res_b)
    {
        strftime(buf2,80,"\t%Y-%m-%d's off_time is %X",ptr);//Why the %F format can't be print?
        fprintf(fp2,"%s\n",buf2);
        puts(buf2);
    }
    fclose(fp1);
    return 0;
}
