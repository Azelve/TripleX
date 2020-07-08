#include <iostream>
#include <string>
#include <algorithm>
#include <ctime>

// Transform lower case into upper case
std::string toUpperCase(std::string str)
{
    std::transform(str.begin(), str.end(), str.begin(), ::toupper);
    return str;
}

void PrintIntroduction(int Level)
{
    if (Level == 1)
    {
        // Print welcome messages to the terminal
        std::cout << "The life is not easy and that's why you need to find the treasure...\n";
        std::cout << "This is the box of Pandora, follow the rules and discover the codes to break it...\n\n";
    }
    else if (Level == 2)
    {
        // Print a message in the second level
        std::cout << "\nYou just broke the first code...\n\n";
    }
    else if (Level == 3)
    {
        // Print a message in the third level
        std::cout << "\nIt's getting hard and hard, don't be silly...\n\n";
    }
    else if (Level == 4)
    {
        // Print a message in the fourth level
        std::cout << "\nAre you sure that you want to know?\n\n";
    }
    else if (Level == 5)
    {
        // Print a message in the fifth level
        std::cout << "\nIt seems that you finally got here\n\n";
    }

}

bool PlayGame(int Level, int Chance)
{
    // Level introduction
    PrintIntroduction(Level);

    // Declare 3 number code
    const int CodeA = (rand() % (Level * 3)) + 1;
    const int CodeB = (rand() % (Level * 3)) + 1;
    const int CodeC = (rand() % (Level * 3)) + 1;

    // CodeSum and CodeProduct variables
    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    
    // Print CodeSum and CodeProduct to the terminal
    std::cout << "Level " << Level << " *** Your chances: " << Chance; // About the chances that the player has;
    std::cout << "\n\n+ There are 3 numbers in the code";
    std::cout << "\n+ The codes add-up to: " << CodeSum;
    std::cout << "\n+ The codes multiply to: " << CodeProduct << std::endl;

    // Store player guess
    int GuessA, GuessB, GuessC;
    std::cout << "\nYour answer (e.g. 1 2 3): ";
    std::cin >> GuessA >> GuessB >> GuessC;

    const int GuessSum = GuessA + GuessB + GuessC;
    const int GuessProduct = GuessA * GuessB * GuessC;

    // Check if the player guess is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        if (Level == 5)
        {
            return true;
        }

        std::cout << "\n\n/   /                                     /   /\n";
        std::cout << "| O |                                     | O |\n";
        std::cout << "|   |- - - - - - - - - - - - - - - - - - -|   |\n";
        std::cout << "| O |                                     | O |\n";
        std::cout << "|   |                                     |   |\n";
        std::cout << "| O |                                     | O |\n";
        std::cout << "|   |                                     |   |\n";
        std::cout << "| O |                                     | O |\n";
        std::cout << "|   |      You can move forward           |   |\n";
        std::cout << "| O |                                     | O |\n";
        std::cout << "|   |              To the next Level      |   |\n";
        std::cout << "| O |                                     | O |\n";
        std::cout << "|   |                                     |   |\n";
        std::cout << "| O |                                     | O |\n";
        std::cout << "|   |                                     |   |\n";
        std::cout << "| O |                                     | O |\n";
        std::cout << "|   |                                     |   |\n";
        std::cout << "| O |- - - - - - - - - - - - - - - - - - -| O |\n";
        std::cout << "|   |                                     |   |\n\n";

        return true;
    }
    else
    {
        if (Chance == 1)
        {
            return false;
        }

        std::cout << "\n\n/   /                                     /   /\n";
        std::cout << "| O |                                     | O |\n";
        std::cout << "|   |- - - - - - - - - - - - - - - - - - -|   |\n";
        std::cout << "| O |                                     | O |\n";
        std::cout << "|   |                                     |   |\n";
        std::cout << "| O |                                     | O |\n";
        std::cout << "|   |                                     |   |\n";
        std::cout << "| O |                                     | O |\n";
        std::cout << "|   |  You must answer the code correctly |   |\n";
        std::cout << "| O |                                     | O |\n";
        std::cout << "|   |              Or you shall die       |   |\n";
        std::cout << "| O |                                     | O |\n";
        std::cout << "|   |                                     |   |\n";
        std::cout << "| O |                                     | O |\n";
        std::cout << "|   |                                     |   |\n";
        std::cout << "| O |                                     | O |\n";
        std::cout << "|   |                                     |   |\n";
        std::cout << "| O |- - - - - - - - - - - - - - - - - - -| O |\n";
        std::cout << "|   |                                     |   |\n\n";

        return false;
    }
}

int main()
{
    srand(time(NULL)); // Create new random sequence based on time of day

    // Store the level and the ultimate level of our game
    int Level = 1;
    const int MaxLevel = 5;

    // Store the player chances
    int Chance = 3;

    // Store if the player want to continue after the game-over
    std::string desire;

    // ASCII Art
        std::cout << "            ______              \n";
        std::cout << "       .d$$$******$$$$c.        \n";
        std::cout << "    .d$P'            '$$c      \n";
        std::cout << "   $$$$$.           .$$$*$.    \n";
        std::cout << " .$$ 4$L*$$.     .$$Pd$  '$b   \n";
        std::cout << " $F   *$. '$$e.e$$' 4$F   ^$b  \n";
        std::cout << "d$     $$   z$$$e   $$     '$. \n";
        std::cout << "$P     `$L$$P` `'$$d$'      $$ \n";
        std::cout << "$$     e$$F       4$$b.     $$ \n";
        std::cout << "$b  .$$' $$      .$$ '4$b.  $$ \n";
        std::cout << "$$e$P'    $b     d$'    '$$c$F \n";
        std::cout << "'$P$$$$$$$$$$$$$$$$$$$$$$$$$$  \n";
        std::cout << " '$c.      4$.  $$       .$$   \n";
        std::cout << "  ^$$.      $$ d$'      d$P    \n";
        std::cout << "    '$$c.   '$b$F    .d$P'     \n";
        std::cout << "      `4$$$c.$$$..e$$P'        \n";
        std::cout << "          '^^^^^^^'\n";

    // Play the game until the player reach the ultimate level
    while (Level <= MaxLevel)
    {

        bool bLevelComplete = PlayGame(Level, Chance);
        std::cin.clear(); // Clears any errors
        std::cin.ignore(); // Discards the buffer


        // If the player passed the previus level increase some more
        if (bLevelComplete)
        {
            Level ++; // Increase to the next level
            Chance ++; // Increase one more chance

            // If the player pass the ultimate level give the treasure
            if (Level > MaxLevel)
            {
                // Print the Game finished message
                std::cout << "\n*** Congratulations, you now own the treasure about the life and can call yourself a GOD! ***\n\n";

                // Introcude the treasure about the life
                std::cout << "*** The treasure: \n\n";

                // ASCII Art about something...
                std::cout << "                                                                    ..;===+.\n";
                std::cout << "                                                                .:=iiiiii=+=\n";
                std::cout << "                                                             .=i))=;::+)i=+,\n";
                std::cout << "                                                          ,=i);)I)))I):=i=;\n";
                std::cout << "                                                       .=i==))))ii)))I:i++\n";
                std::cout << "                                                     +)+))iiiiiiii))I=i+:'\n";
                std::cout << "                                .,:;;++++++;:,.       )iii+:::;iii))+i='\n";
                std::cout << "                             .:;++=iiiiiiiiii=++;.    =::,,,:::=i));=+'\n";
                std::cout << "                           ,;+==ii)))))))))))ii==+;,      ,,,:=i))+=:\n";
                std::cout << "                         ,;+=ii))))))IIIIII))))ii===;.    ,,:=i)=i+\n";
                std::cout << "                        ;+=ii)))IIIIITIIIIII))))iiii=+,   ,:=));=,\n";
                std::cout << "                      ,+=i))IIIIIITTTTTITIIIIII)))I)i=+,,:+i)=i+\n";
                std::cout << "                     ,+i))IIIIIITTTTTTTTTTTTI))IIII))i=::i))i='\n";
                std::cout << "                    ,=i))IIIIITLLTTTTTTTTTTIITTTTIII)+;+i)+i`\n";
                std::cout << "                    =i))IIITTLTLTTTTTTTTTIITTLLTTTII+:i)ii:'\n";
                std::cout << "                   +i))IITTTLLLTTTTTTTTTTTTLLLTTTT+:i)))=,\n";
                std::cout << "                   =))ITTTTTTTTTTTLTTTTTTLLLLLLTi:=)IIiii;\n";
                std::cout << "                  .i)IIITTTTTTTTLTTTITLLLLLLLT);=)I)))))i;\n";
                std::cout << "                  :))IIITTTTTLTTTTTTLLHLLLLL);=)II)IIIIi=:\n";
                std::cout << "                  :i)IIITTTTTTTTTLLLHLLHLL)+=)II)ITTTI)i=\n";
                std::cout << "                  .i)IIITTTTITTLLLHHLLLL);=)II)ITTTTII)i+\n";
                std::cout << "                  =i)IIIIIITTLLLLLLHLL=:i)II)TTTTTTIII)i'\n";
                std::cout << "                +i)i)))IITTLLLLLLLLT=:i)II)TTTTLTTIII)i;\n";
                std::cout << "              +ii)i:)IITTLLTLLLLT=;+i)I)ITTTTLTTTII))i;\n";
                std::cout << "             =;)i=:,=)ITTTTLTTI=:i))I)TTTLLLTTTTTII)i;\n";
                std::cout << "           +i)ii::,  +)IIITI+:+i)I))TTTTLLTTTTTII))=,\n";
                std::cout << "         :=;)i=:,,    ,i++::i))I)ITTTTTTTTTTIIII)=+'\n";
                std::cout << "       .+ii)i=::,,   ,,::=i)))iIITTTTTTTTIIIII)=+\n";
                std::cout << "      ,==)ii=;:,,,,:::=ii)i)iIIIITIIITIIII))i+:'\n";
                std::cout << "     +=:))i==;:::;=iii)+)=  `:i)))IIIII)ii+'\n";
                std::cout << "   .+=:))iiiiiiii)))+ii;\n";
                std::cout << "  .+=;))iiiiii)));ii+\n";
                std::cout << " .+=i:)))))))=+ii+\n";
                std::cout << ".;==i+::::=)i=;\n";
                std::cout << ",+==iiiiii+,\n";
                std::cout << "`+=+++;`\n\n";

                // Ask the player if the game must go on
            std::cout << "Do you want to continue (Yes/No)? ";
            std::cin >> desire;

            // Check if the player want to continue
            if (toUpperCase(desire) == "YES")
            {
                Chance = 3;
                std::cout << "\n\n";
            }
            else if (toUpperCase(desire) == "NO")
            {
                break;
            }
            }
        }
        // Decrease the number of chances
        else
        {
            Chance --;
        }
        // Print the game-over message 
        if (Chance == 0)
        {

            std::cout << "\n\n";
            std::cout << "..####....####...##...##..######...........####...##..##..######..#####..\n";
            std::cout << ".##......##..##..###.###..##..............##..##..##..##..##......##..##.\n";
            std::cout << ".##.###..######..##.#.##..####............##..##..##..##..####....#####..\n";
            std::cout << ".##..##..##..##..##...##..##..............##..##...####...##......##..##.\n";
            std::cout << "..####...##..##..##...##..######...........####.....##....######..##..##.\n";
            std::cout << ".........................................................................\n\n";

            // Ask the player if the game must go on
            std::cout << "Do you want to continue (Yes/No)? ";
            std::cin >> desire;

            // Check if the player want to continue
            if (toUpperCase(desire) == "YES")
            {
                Chance = 3;
                std::cout << "\n\n";
            }
            else if (toUpperCase(desire) == "NO")
            {
                break;
            }
            
        }
        
        
    }
    
    return 0;
}