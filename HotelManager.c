/*******************************************************
 * Hotel Manager
 *
 * CS210 
 * Lab 5
 *
 * README:
 *        There are 2 goals for this assignment. 
 *        Write the code for printGuestsOnFloor() and 
 *        addGuest().
 ****************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Hard coded values for hotel simulator
#define NUM_ROOMS 5
#define NUM_FLOORS 3
#define MAX_CHAR 100

/**********************************
 * printMenu
 *
 * prints the main menu
 *********************************/ 
void printMenu()
{
    printf("\n\nHotel Manager v0.1\n");
    printf("===============================\n");
    printf("Commands (number):\n");
    printf("1) Prints this menu\n");
    printf("2) Prints all guests\n");
    printf("3) Prints guest names on floor\n");
    printf("4) Adds new guest to hotel\n");
    printf("5) Quits program\n\n");
    printf("\n");
}

/**********************************
 * printAllGuests
 *
 * prints the names for all 
 * of the guests in hotel
 *********************************/ 
void printAllGuests(char hotelDB[NUM_FLOORS][NUM_ROOMS][MAX_CHAR])
{
    int i, j, k;
    
    for(i=0;i<NUM_FLOORS;i++)
    {
	printf("Floor %d:\n", i);
	for(j=0;j<NUM_ROOMS;j++)
	{
	    printf("\tRoom #%d, Guest name: %s\n", j, hotelDB[i][j]);
	}
	printf("\n");
    }
    printf("\n");
}

/**********************************
 * printGuestsOnFloor
 *
 * prints guest names for a 
 * particular floor
 *
 * E.g. correct output:
 * Enter floor number (0 - 2): 0
 * Room #4, John von Neumann
 * Room #3, Teddy Roosevelt
 * Room #2, Beatrice Bleu
 * Room #1, 
 * Room #0, Kazuhira Moeller
 *********************************/ 
void printGuestsOnFloor(char hotelDB[NUM_FLOORS][NUM_ROOMS][MAX_CHAR])
{
    printf("printGuestsOnFloor not implemented\n");
}

/**********************************
 * addGuest
 *
 * Adds a new guest to a specific room and floor
 *
 * E.g. correct output:
 * Enter floor number (0 - 2): 0
 * Enter room number (0 - 3): 1
 * Enter name: Ash
 *
 * Hint: To copy a name to hotelDB
 *       try to use strcpy(dest, src);
 *********************************/ 
void addGuest(char hotelDB[NUM_FLOORS][NUM_ROOMS][MAX_CHAR])
{
    printf("addGuest not implemented\n");
}

int main()
{
    // data structure for hotel, each row (0 - 2) specifies a particular floor
    // while each column (0 - 4) specifies a specific room
    // '\0' specifies an empty room
    char hotelDB[NUM_FLOORS][NUM_ROOMS][MAX_CHAR] = {
	{"Kazuhira", "\0", "Beatrice_Bleu", "Teddy", "John"},
	{"Fortune_Jackson", "\0", "Andrey", "\0", "Robert_Oppenheimer"},
	{"Alan_Turing", "\0", "Adamska_Shalakov", "George_Washington", "\0"}
    };

    int command;
    int bool = 1;

    //prints the menu
    printMenu();
    
    //while loop that gets user input
    while(bool)
    {
	command = 0;
	printf("Please enter command: ");
	scanf("%d", &command);
	
	//depending on user input, calls a particular function
	switch(command)
	{
	case 1:
	    printMenu();
	    break;
	case 2:
	    printAllGuests(hotelDB);
	    break;
	case 3:
	printGuestsOnFloor(hotelDB);
	    break;
	case 4:
	    addGuest(hotelDB);
	    break;
	case 5:
	    bool = 0;
	    return 0;
	default:
	    printf("Error: Unknown command\n");
	    //bool = 0;
	}
    }
    
    return 0;
}
