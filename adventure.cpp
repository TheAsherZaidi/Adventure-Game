#include <iostream>

using namespace std;

int main()
{

    bool validSelection = true;

    int choice;

    cout << "Please Select An Adventure! 1. The Restroom Adventure! 2. The Treasure Hunt Adventure! Choose 1 or 2." << endl;

    while (validSelection == true)
    {
        if (!(choice == 1 || choice == 2))
        {
            cin >> choice;
        }

        if (choice == 1)
        {
            cout << "Perfect! You have selected The Restroom Adventure!\n" << endl;

            char choice2;
            cout << "You are a 5 foot man, needing to take a shit. ";
            cout << "However you noticed all the stalls are taken, but the handicapped stall is empty. You are a completely normal, non-disabled, functioning human being. ";
            cout << "\nChoose one of the following: ";
            cout << "\nA. Enter the stall, proceed to take a shit and be at risk of being caught by a man in a wheelchair. ";
            cout << "\nB. Take a shit on the floor, enjoy the shit, while knowing that you are not in the disabled stall at risk of a man in a wheelchair coming in. ";
            cout << "\nC. Shit yourself and leave the stall, the story ends there. \n";

            char choice2_lower = tolower(choice2);

            while (validSelection == true)
            {
                if (!(choice2_lower == 'a' || choice2_lower == 'b' || choice2_lower == 'c'))
                {
                    cin >> choice2;
                    choice2_lower = tolower(choice2);
                    if (choice2_lower == 'a')
                    {
                        cout << "You enter the stall, proceed to take a shit. Everything is fine for a moments..." << endl;
                        cout << "SUDDENLY! A MAN IN A WHEELCHAIR ROLLS UP TO THE STALL AND KICKS THE DOOR WIDE OPEN!" << endl;
                        cout << "He screams: YOU WILL PAY WITH YOUR LIFE FOR ENTERING MY STALL FAGGOT!" << endl;
                        cout << "You lose! You have recieved the loser ending!" << endl;
                    }
                    else if (choice2_lower == 'b')
                    {
                        cout << "You shit on the floor, the man in the wheelchair enters in! He watches you, and enjoys the view." << endl;
                        cout << "He decides to stand up from his wheelchair, and join you!" << endl;
                        cout << "You have unlocked the secret ending!" << endl;
                    }
                    else if (choice2_lower == 'c')
                    {
                        cout << "You have left the stall, shitting yourself!" << endl;
                        cout << "You have recieved the winner ending! Congratulations!" << endl;
                    }
                    else
                    {
                        cout << "You have chosen incorrectly, please pick either A. or B. or C. please!\n";
                    }
                }
            }
        }
        else if (choice == 2)
        {
            cout << "Perfect! You have selected The Treasure Hunt Adventure!\n"
                 << endl;

            char choice3;
            cout << "You find an old map hidden inside the pages of a library book. ";
            cout << "After following it through the woods, you find a locked chest, a dark cave, and a rushing river. ";
            cout << "\nChoose one of the following: ";
            cout << "\nA. Search around the locked chest for a key. ";
            cout << "\nB. Enter the dark cave and follow the torch symbols on the map. ";
            cout << "\nC. Cross the rushing river and search for another trail. \n";

            char choice3_lower = tolower(choice3);

            while (validSelection == true)
            {
                if (!(choice3_lower == 'a' || choice3_lower == 'b' || choice3_lower == 'c'))
                {
                    cin >> choice3;
                    choice3_lower = tolower(choice3);
                    if (choice3_lower == 'a')
                    {
                        cout << "You search around the chest and find a small brass key buried under a rock." << endl;
                        cout << "You unlock the chest, but inside is only a note that says: THE TREASURE IS NOT HERE." << endl;
                        cout << "You lose! You have received the empty chest ending!" << endl;
                    }
                    else if (choice3_lower == 'b')
                    {
                        cout << "You enter the cave and follow the torch symbols deeper into the darkness." << endl;
                        cout << "At the back of the cave, you discover a chest full of gold, jewels, and ancient coins!" << endl;
                        cout << "You have received the winner ending! Congratulations!" << endl;
                    }
                    else if (choice3_lower == 'c')
                    {
                        cout << "You cross the river, but the current pulls the map from your hands." << endl;
                        cout << "The map floats away, and you are left with no way to find the treasure." << endl;
                        cout << "You have received the lost map ending!" << endl;
                    }
                    else
                    {
                        cout << "You have chosen incorrectly, please pick either A. or B. or C. please!\n";
                    }
                }
            }
        }
        else
        {
            cout << "You have chosen incorrectly, please pick either 1 or 2 please!" << endl;
        }
    }
}
