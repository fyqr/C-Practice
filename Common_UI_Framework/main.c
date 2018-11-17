#include <stdio.h>
#include <stdlib.h>
#include "Common.h"
#include "function1.h"
#include "function2.h"

int main(void) {
	
	int input = 0;
	
	welcome();
	PauseAndTip();
	system("cls");
	show_menu();

	while(1) {
		printf("Please select a choice:   ");
	    input = get_a_int();
	    
	    if( input < 0 || input > 2)
	    {
	    	puts("Please input a number from 0 ~ 2");
	    	continue;
		}
	    
	    if( 0 == input)
	    {
	    	break;
		}
		
		switch(input)
		{
			case 1:
				system("cls");
				function1();
				PauseAndTip();
				system("cls");
				show_menu();
				break;
			case 2:
				system("cls");
				function2();
				PauseAndTip();
				system("cls");
				show_menu();
				break;
			default:
				break;

		}
	}
	
    puts("Good Bye!");
    system("pause");
    
	return 0;
}
