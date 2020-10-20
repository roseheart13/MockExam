
#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
#include <conio.h>
#include <ctime>
#include <random>

int person;
int task;
int move;
int turn = 0;

void menu();
void task1();
void task2();
void task3();
void task4();

char board[3][3] = { { '*', '2', '3' }, { '4','5','6' }, { '7','8','9' } };
char marker = '*';
char answer;

void drawBoard() {
    std::cout << " " << std::endl;
    std::cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << std::endl;

}

void boardMarker(int slot) 
{
   
    int row = slot / 3;
    int col;

    if (slot % 3 == 0) 
    {
        row = row - 1;
        col = 2;
    }
    else col = slot / 3;

    
    
   /* col = (slot % 3) - 1;
   
    if (move == 'w') {
        col = (slot % 3) + 1;
    }
    if (move == 's') {
        col = (slot % 3) - 1;
    }
    if (move == 'a') {
        row = (slot % 3) - 1;
    }
    if (move == 'd') {
        row = (slot % 3) + 1;
    }*/

}

void moving() {
   
    drawBoard();
    
    
    
}

//void login()
//{
//    drawBoard();
//    std::cout << "Welcome! To continue get the pattern correct! You have 3 attempts " << std::endl;
//    std::cout << "You move with wasd " << std::endl;
//    std::cin >> move;
//    do {
//        for (int i = 0; i < 4; i++)
//        {
//
//        }
//        sucssesLogin();
//        turn++;
//    } while (turn != 3);
//        
//}
//
//
//
//char sucssesLogin() 
//{
//     if (board[1][0] == board[1][1] && board[1][1] == board[0][1] && board[0][1] == board[0][2]) return person; {
//            std::cout << "You have loged inn!" << std::endl;
//            menu();
//     }
//       
//   
//    
//}



void menu()
{
    do {
        std::cout << "Welcome! What would you like to look at? " << std::endl;
        std::cout << "1. Task 1 " << std::endl;
        std::cout << "2. Task 2 " << std::endl;
        std::cout << "3. Task 3 " << std::endl;
        std::cout << "4. Task 4 " << std::endl;
        std::cout << "5. Quit " << std::endl;
        std::cin >> task;

        if (task == 1) {
            task1();
        }
        if (task == 2) {
            task2();
        }
        if (task == 3) {
            task3();
        }
        if (task == 4) {
            task4();
        }
        if (task == 5) {
            ;
        }
        else {
            std::cout << "Wrong input... Do you want to try again: (y/n)" << std::endl;
            std::cin >> answer;
        
        }
    } while (answer != 'n' && task != 5);
}

void task1()
{
    std::cout << "Dice trow! " << std::endl;
    std::cout << " " << std::endl;
}

void dice() 
{
    int dice;
    int timesrolled = 2000;
    float num1 = 0;
    float  num2 = 0;
    float  num3 = 0;
    float  num4 = 0;
    float  num5 = 0;
    float  num6 = 0;

    
    for (int i = 0; i < timesrolled; i++)
    {
        dice = rand() % 6 + 1;
        if (dice == 1)
        {
            num1++;
        }

        else if (dice == 2)
        {
            num2++;
        }

        else if (dice == 3)
        {
            num3++;
        }

        else if (dice == 4)
        {
            num4++;
        }

        else if (dice == 5)
        {
            num5++;
        }

        else if (dice == 6)
        {
            num6++;
        }
    }

    /*for (int counter = 0; counter < 2000; counter++)
    {
       
    }
   
    int */
}



void task2()
{
    std::cout << "Value from 1-20 " << std::endl;
    int value[9] = { 17, 8, 3, 14, 1, 7, 18, 5, 10 };
    

}

void task3()
{
    char player = 'E';
    
    std::cout << "Pac-Man witout point " << std::endl;
    std::cout << " " << std::endl;
    char grid[10][10] = {
        {'+','#','#','#','#','#','#','#','#','|'},
        {'|','X',' ',' ',' ',' ',' ',' ',' ','|'},
        {'|','#','#',' ','#','#','#','#','#','|'},
        {'|',' ',' ',' ',' ',' ',' ',' ',' ','|'},
        {'|',' ','|',' ','|','#','#','#','|','|'},
        {'|',' ','|',' ','|',' ',' ',' ','|','|'},
        {'|',' ','|',' ',' ',' ',' ',' ',' ','|'},
        {'|',' ',' ',' ',' ',' ',' ',' ',' ','|'},
        {'|',' ',' ','#','#','#','#','#',' ','|'},
        {'|','_','_','_','_','_','_','_','_','|'},
    };

}

void task4()
{
    std::cout << "Pac-Man with points " << std::endl;
    std::cout << " " << std::endl;
    char grid[10][10] = {
        {'+','#','#','#','#','#','#','#','#','|'},
        {'|','X',' ',' ',' ',' ',' ',' ',' ','|'},
        {'|','#','#',' ','#','#','#','#','#','|'},
        {'|',' ',' ',' ',' ',' ',' ',' ',' ','|'},
        {'|',' ','|',' ','|','#','#','#','|','|'},
        {'|',' ','|',' ','|',' ',' ',' ','|','|'},
        {'|',' ','|',' ',' ',' ',' ',' ',' ','|'},
        {'|',' ',' ',' ',' ',' ',' ',' ',' ','|'},
        {'|',' ',' ','#','#','#','#','#',' ','|'},
        {'|','_','_','_','_','_','_','_','_','|'},
    };
}

int main()
{

    dice();

}

