#include<stdio.h> // for printf() & scanf() library functions
#include<conio.h> // for getch() & getche() librery functions

void main_menu(); //function prototype for main_menu
void hangman(int a,int b); //function prototype for hangman

int main() //main program
{
    main_menu(); // calling user defined function

    return 0;
}

void main_menu() // user defined function (no input argument,no return value)
{
    // declared 6 strings for 3 levels.
    char word1[8]="achieved"; // to store main word
    char w1[8]= { 'a','_','h','_','e','_','_','d' }; // to store incomplete word
    char word2[8]="document";
    char w2[8]= { '_','o','_','u','_','e','_','_' };
    char word3[8]="exposure";
    char w3[8]= { '_','_','p','_','_','u','_','_' };

    int a=0,b=0; // declared a for display hangman.
    /* declare b.If 5 chances are used up while playing the 2nd or 3rd level,
       the 2nd or 3rd level will give you another chance to play by b.*/

    for(int i=1; i<4; i++)// loop for 3 level (1 to 3).
    {
        printf("\n\n Level %d ! Guess the letter (A letter can only be used once)",i);

        if(i==1)// for level 1.
        {
            for( int j=0; j<4; j++)/* loop for input character verification and
                                      fill up gaps by correct letter.*/
            {
                int enter=0; // to display guess letter is correct.
                printf("\n\n %c %c %c %c %c %c %c %c ",w1[0],w1[1],w1[2],w1[3],w1[4],w1[5],w1[6],w1[7]);
                printf("\n\n Enter the Letter : \t");
                char letter=getche(); // to input guess letter

                if(letter>=65 && letter<=90) // to convert upper to lower case letter.
                    letter+=32;

                if(word1[1]==letter) // condition
                {
                    enter=1;
                    w1[1]=letter;
                }

                if(word1[3]==letter)
                {
                    enter=1;
                    w1[3]=letter;
                }

                if(word1[5]==letter)
                {
                    enter=1;
                    w1[5]=letter;
                }

                if(word1[6]==letter)
                {
                    enter=1;
                    w1[6]=letter;
                }

                if(enter==1)
                {
                    printf("\n\n Good! Your assumption is correct! Next....");
                    hangman(a,b);// calling user defined function to display hangman
                }
                else
                {
                    printf("\n\n Try again please!");
                    a++; //for a, if guess wrong letter, then to display body part of hangman.
                    j--; //for j, if guess wrong letter, then to run the loop one more time.
                    b=i; /*for b, after taking 5 wrong character inputs to give that level that
                            level chance to play again or not.*/

                    hangman(a,b);/*calling user defined function to display hangman and
                                   chance to play again or not.*/

                }
            }
            printf("\n\n %c %c %c %c %c %c %c %c \n\n",w1[0],w1[1],w1[2],w1[3],w1[4],w1[5],w1[6],w1[7]);
        }

        if(i==2) // for level 2.
        {
            for( int j=0; j<5; j++)/* loop for input character verification and
                                      fill up gaps by correct letter.*/
            {
                int enter=0;// to display guess letter is correct.
                printf("\n\n %c %c %c %c %c %c %c %c ",w2[0],w2[1],w2[2],w2[3],w2[4],w2[5],w2[6],w2[7]);
                printf("\n\n Enter the letter : \t");
                char letter=getche(); // to input guess letter


                if(letter>=65 && letter<=90)// to convert upper to lower case letter.
                    letter+=32;

                if(word2[0]==letter)// condition
                {
                    enter=1;
                    w2[0]=letter;
                }

                if(word2[2]==letter)
                {
                    enter=1;
                    w2[2]=letter;
                }

                if(word2[4]==letter)
                {
                    enter=1;
                    w2[4]=letter;
                }

                if(word2[6]==letter)
                {
                    enter=1;
                    w2[6]=letter;
                }

                if(word2[7]==letter)
                {
                    enter=1;
                    w2[7]=letter;
                }

                if(enter==1)
                {
                    printf("\n\n Good! Your assumption is correct! Next....");
                    hangman(a,b); // calling user defined function to display hangman
                }

                else
                {
                    printf("\n\n Try again please!");
                    a++;
                    j--;
                    b=i;
                    hangman(a,b);/*calling user defined function to display hangman and
                                   chance to play again or not.*/
                }
            }
            printf("\n\n %c %c %c %c %c %c %c %c \n\n",w2[0],w2[1],w2[2],w2[3],w2[4],w2[5],w2[6],w2[7]);
        }

        if(i==3)// for level 3.
        {
            for( int j=0; j<5; j++)/* loop for input character verification and
                                      fill up gaps by correct letter.*/
            {
                int enter=0;// to display guess letter is correct.
                printf("\n\n %c %c %c %c %c %c %c %c ",w3[0],w3[1],w3[2],w3[3],w3[4],w3[5],w3[6],w3[7]);
                printf("\n\n Enter the letter : \t");
                char letter=getche();// to input guess letter


                if(letter>=65 && letter<=90)// to convert upper to lower case letter.
                    letter+=32;

                if(word3[0]==letter)// condition
                {
                    enter=1;
                    w3[0]=letter;

                }

                if(word3[1]==letter)
                {
                    enter=1;
                    w3[1]=letter;
                }

                if(word3[3]==letter)
                {
                    enter=1;
                    w3[3]=letter;
                }

                if(word3[4]==letter)
                {
                    enter=1;
                    w3[4]=letter;
                }

                if(word3[6]==letter)
                {
                    enter=1;
                    w3[6]=letter;
                }

                if(word3[7]==letter)
                {
                    enter=1;
                    w3[7]=letter;
                }

                if(enter==1)
                {
                    printf("\n\n Good! Your assumption is correct! Next....");
                    hangman(a,b);// calling user defined function to display hangman
                }

                else
                {
                    printf("\n\n Try again please!");
                    a++;
                    j--;
                    b=i;
                    hangman(a,b);/*calling user defined function to display hangman and
                                   chance to play again or not.*/
                }
            }
            printf("\n\n %c %c %c %c %c %c %c %c \n\n",w3[0],w3[1],w3[2],w3[3],w3[4],w3[5],w3[6],w3[7]);
            printf("\n\n\t Congratulations! You have completed level %d. You win this game. \n\n\n",i);
        }
    }
}




void hangman(int a,int b) // user defined function (input argument present,no return value)
{
    switch (a) //for defining hangman
    {

    case 0:
        printf("\n\t\t\t\n\n");
        printf("  _______\n");
        printf("\n\t\t\t\t Chances left=5");
        break;
    case 1 :
        printf("\n\t\t\t\n\n");
        printf("  _______\n");
        printf("  |\n");
        printf("  |\n");
        printf("  |\n");
        printf("  |\n");
        printf("  |\n");
        printf("__|_________\n\n");
        printf("\n\t\t\t\t Chances left=%d",5-a);
        break;

    case 2 :
        printf("\n\t\t\t\n\n");
        printf("  _______\n");
        printf("  |    | \n");
        printf("  |    O \n");
        printf("  |\n");
        printf("  |\n");
        printf("  |\n");
        printf("__|_________\n\n");
        printf("\n\t\t\t\t Chances left=%d",5-a);
        break;

    case 3 :
        printf("\n\t\t\t\n\n");
        printf("  _______\n");
        printf("  |    | \n");
        printf("  |    O \n");
        printf("  |    |\n");
        printf("  |    |\n");
        printf("  |\n");
        printf("__|_________\n\n");
        printf("\n\t\t\t\t Chances left=%d",5-a);
        break;

    case 4 :
        printf("\n\t\t\t\n\n");
        printf("  _______\n");
        printf("  |    | \n");
        printf("  |    O \n");
        printf("  |   \\|/\n");
        printf("  |    | \n");
        printf("  |   /\n");
        printf("__|_________\n\n");
        printf("\t\t\t\t Chances left=%d",5-a);
        break;

    case 5 :
        printf("\n\t\t\t\n\n");
        printf("  _______\n");
        printf("  |    | \n");
        printf("  |    O \n");
        printf("  |   \\|/\n");
        printf("  |    | \n");
        printf("  |   / \\\n");
        printf("__|_________\n\n");
        printf("\n\t\t\t\t Chances left=%d",5-a);
        /*for b, after taking 5 wrong character inputs to give that
          level chance to play again or not.*/

        if(b==1) //after taking 5 wrong character inputs in level 1, then enter.
        {
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t GAME OVER!");
            getch();
            return 0;
        }

        if(b==2)//after taking 5 wrong character inputs in level 2, then enter.
        {
            printf("\n\n\n\n\n\n\n\n");
            printf("\n\n\t\t\t\t C:Continue\n\t\t\t\t Q:QUIT ");/*after taking 5 wrong character
                                                                 inputs in level 2, continue or not.*/
            printf("\n\n\n\t\t\t         Enter the C/Q: ");
            char ch=getche();
            // declared 4 strings for 2 and 3 levels.
            char word4[8]="graduate";// to store main word
            char w4[8]= { '_','_','a','_','_','a','_','_' };// to store incomplete word
            char word5[8]="isolated";
            char w5[8]= { 'i','_','_','_','a','_','_','_' };

            switch(ch)
            {
            case 'c':
            case 'C':
                for(int i=2; i<4; i++)// loop for 2 levels (2 to 3).
                {
                    printf("\n\n Level %d ! Guess the letter (A letter can only be used once)",i);
                    int a=0,b=0,enter=0;
                    if(i==2)
                    {
                        for( int j=0; j<6; j++)
                        {
                            enter=0;
                            printf("\n\n %c %c %c %c %c %c %c %c ",w4[0],w4[1],w4[2],w4[3],w4[4],w4[5],w4[6],w4[7]);
                            printf("\n\n Enter the Letter : \t");
                            char letter=getche();

                            if(letter>=65 && letter<=90)
                                letter+=32;

                            if(word4[0]==letter)
                            {
                                enter=1;
                                w4[0]=letter;
                            }

                            if(word4[1]==letter)
                            {
                                enter=1;
                                w4[1]=letter;
                            }

                            if(word4[3]==letter)
                            {
                                enter=1;
                                w4[3]=letter;
                            }

                            if(word4[4]==letter)
                            {
                                enter=1;
                                w4[4]=letter;
                            }
                            if(word4[6]==letter)
                            {
                                enter=1;
                                w4[6]=letter;
                            }

                            if(word4[7]==letter)
                            {
                                enter=1;
                                w4[7]=letter;
                            }

                            if(enter==1)
                            {
                                printf("\n\n Good! Your assumption is correct! Next....");
                                hangman(a,b);// calling user defined function to display hangman
                            }

                            else
                            {
                                printf("\n\n Try again please!");
                                a++;
                                j--;
                                b=1;
                                hangman(a,b);/*calling user defined function to display hangman and
                                   chance to play again or not.*/
                            }
                        }
                        printf("\n\n %c %c %c %c %c %c %c %c \n\n",w4[0],w4[1],w4[2],w4[3],w4[4],w4[5],w4[6],w4[7]);
                    }

                    if(i==3)
                    {

                        for( int j=0; j<6; j++)
                        {
                            enter=0;
                            printf("\n\n %c %c %c %c %c %c %c %c ",w5[0],w5[1],w5[2],w5[3],w5[4],w5[5],w5[6],w5[7]);
                            printf("\n\n Enter the Letter : \t");
                            char letter=getche();

                            if(letter>=65 && letter<=90)
                                letter+=32;

                            if(word5[1]==letter)
                            {
                                enter=1;
                                w5[1]=letter;
                            }

                            if(word5[2]==letter)
                            {
                                enter=1;
                                w5[2]=letter;
                            }

                            if(word5[3]==letter)
                            {
                                enter=1;
                                w5[3]=letter;
                            }

                            if(word5[5]==letter)
                            {
                                enter=1;
                                w5[5]=letter;
                            }

                            if(word5[6]==letter)
                            {
                                enter=1;
                                w5[6]=letter;
                            }

                            if(word5[7]==letter)
                            {
                                enter=1;
                                w5[7]=letter;
                            }

                            if(enter==1)
                            {
                                printf("\n\n Good! Your assumption is correct! Next....");
                                hangman(a,b);// calling user defined function to display hangman
                            }

                            else
                            {
                                printf("\n\n Try again please!");
                                a++;
                                j--;
                                b=1;
                                hangman(a,b);/*calling user defined function to display hangman and
                                   chance to play again or not.*/
                            }
                        }
                        printf("\n\n %c %c %c %c %c %c %c %c \n\n",w5[0],w5[1],w5[2],w5[3],w5[4],w5[5],w5[6],w5[7]);
                        printf("\n\n\t Congratulations! You have completed level %d. You win this game. \n\n\n",i);
                    }
                }
                getch();
                break;
            case 'Q'://if q=quit exit
            case 'q':
                getch();
                break;
            }
        }

        if(b==3)//after taking 5 wrong character inputs in level 3, then enter.
        {
            printf("\n\n\n\n\n\n\n\n");
            printf("\n\t\t\t\t C:Continue\n\t\t\t\t Q:QUIT ");/*after taking 5 wrong character
                                                                inputs in level 2, continue or not.*/
            printf("\n\n\n\t\t\t         Enter the C/Q: ");
            char ch=getche();
            // declared 2 strings for 3 level.
            char word6[8]="thousand";// to store main word
            char w6[8]= { 't','_','_','_','_','_','n','_' };// to store incomplete word

            switch(ch)
            {
            case 'c':
            case 'C':

                for(int i=3; i<4; i++)
                {
                    printf("\n\n Level %d ! Guess the letter (A letter can only be used once)",i);
                    int a=0,b=0,enter=0;

                    if(i==3)
                    {
                        for( int j=0; j<6; j++)
                        {
                            enter=0;
                            printf("\n\n %c %c %c %c %c %c %c %c ",w6[0],w6[1],w6[2],w6[3],w6[4],w6[5],w6[6],w6[7]);
                            printf("\n\n Enter the letter : \t");
                            char letter=getche();

                            if(letter>=65 && letter<=90)
                                letter+=32;

                            if(word6[1]==letter)
                            {
                                enter=1;
                                w6[1]=letter;
                            }
                            if(word6[2]==letter)
                            {
                                enter=1;
                                w6[2]=letter;
                            }

                            if(word6[3]==letter)
                            {
                                enter=1;
                                w6[3]=letter;
                            }

                            if(word6[4]==letter)
                            {
                                enter=1;
                                w6[4]=letter;
                            }

                            if(word6[5]==letter)
                            {
                                enter=1;
                                w6[5]=letter;
                            }

                            if(word6[7]==letter)
                            {
                                enter=1;
                                w6[7]=letter;
                            }

                            if(enter==1)
                            {
                                printf("\n\n Good! Your assumption is correct! Next....");
                                hangman(a,b);// calling user defined function to display hangman
                            }

                            else
                            {
                                printf("\n\n TRY AGAIN !");
                                a++;
                                j--;
                                b=i;
                                hangman(a,b);/*calling user defined function to display hangman and
                                   chance to play again or not.*/
                            }
                        }

                        printf("\n\n %c %c %c %c %c %c %c %c \n\n",w6[0],w6[1],w6[2],w6[3],w6[4],w6[5],w6[6],w6[7]);
                        printf("\n\n\t Congratulations! You have completed level %d. You win this game. \n\n\n",i);

                    }
                }
                getch();
                break;

            case 'Q'://if q=quit exit
            case 'q':
                getch();
                break;
            }
        }
    }
}

