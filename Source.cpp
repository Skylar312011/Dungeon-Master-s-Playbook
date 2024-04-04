// The Dungeon Master's Playbook, the only software to contain the whole journey. 
// Last Update: 4/2/24 - Skye Smith


// Include Statements 
#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include "Character.h" // Adds the character class to the view of the program.
#include "NPC.h" // Adds the NPC class to the view of the program.
#include "Creature.h" // Adds the Creature class to the view of the program.


// Fucntion Declarations 
void RollTheDice();
std::string NameGenerator();
std::string SelectMemoryLocation(std::vector <std::string> FN);
void PrintCharacters(std::vector <Character> CL);
void ReadFile(std::vector <Character>* CLP);
void CreateACharacter();
//void RemoveACharacter(std::vector <Character> CL);


// TO DO LIST:
// -----------
// MakeANote()
// Statblock editor 
// List of Characters - to see and edit. 
// Write to a file for memory




int main()
{
	// Variables
	std::vector <std::string> FileNames;
	std::vector <Character> CharacterList;
	std::vector <Character>* CLPointer = &CharacterList; 
	std::string FileName = "CharactersList.txt";
	


	// Tester Variables
	FileNames.push_back("Test1"); 
	FileNames.push_back("Test2");

	//CreateACharacter();
	// Function Calls
	//test.CreateACharacter(); 
	ReadFile(CLPointer);
	//RemoveACharacter(CharacterList);
	PrintCharacters(CharacterList);
	//test.EditCharacter();
	//RollTheDice();
	//NameGenerator();
	//SelectMemoryLocation(FileNames);
	std::cout << "The program loads" << std::endl; 
	return 0;
}

// Function Definitons
void RollTheDice()
{
	// Variables
	int choice = 0;
	int roll = -1; // Stores the actual dice roll
	int sides = 0;
	int numOfRolls = 0; // Stores the number of dice to be rolled
	bool repeat = true;
	int rollAgain = 0;


	//Seed rand()
	time_t current_time = time(NULL);
	srand(current_time);

	// Repeat Dice Roll Function until given stop from user
	while (repeat)
	{
		// While loop variables 
		int total = 0;
		//Print Menu 
		std::cout << std::endl << "May luck be ever in your favor" << std::endl;
		std::cout << "What kind dice would you like to roll?" << std::endl;
		std::cout << " 1) D2 \n 2) D4 \n 3) D6 \n 4) D8 \n 5) D10 \n 6) D20 \n 7) D100 \n 8) Custom Number" << std::endl;
		std::cin >> choice;

		// Error Checking the choice
		while (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5 && choice != 6 && choice != 7 && choice != 8)
		{
			// Inform of finger fumble
			std::cout << "That option does not seem to be a choice available. Please try again. You can only choose between the numbers 1 - 8. " << std::endl;
			std::cout << "What kind dice would you like to roll?" << std::endl;
			std::cout << " 1) D2 \n 2) D4 \n 3) D6 \n 4) D8 \n 5) D10 \n 6) D20 \n 7) D100 8) Custom Number" << std::endl;
			// Update Choice
			std::cin >> choice;
		}

		// Determine the number of Dice to be rolled 
		std::cout << "How many dice would you like to roll?" << std::endl;
		std::cin >> numOfRolls;

		// Dice Rolls
		while (numOfRolls != 0)
		{
			// While loop variables
			int randomNum = rand();


			switch (choice)
			{
			case 1: // D2
				roll = 1 + (randomNum % 2);
				std::cout << "You roll a: " << roll << std::endl;
				break;

			case 2: // D4
				roll = 1 + (randomNum % 4);
				std::cout << "You roll a: " << roll << std::endl;
				break;

			case 3: // D6
				roll = 1 + (randomNum % 6);
				std::cout << "You roll a: " << roll << std::endl;
				break;

			case 4: // D8
				roll = 1 + (randomNum % 8);
				std::cout << "You roll a: " << roll << std::endl;
				break;

			case 5: // D10
				roll = 1 + (randomNum % 10);
				std::cout << "You roll a: " << roll << std::endl;
				break;

			case 6: // D20
				roll = 1 + (randomNum % 20);
				std::cout << "You roll: " << roll << std::endl;
				break;

			case 7: // D100
				roll = 1 + (randomNum % 100);
				std::cout << "You roll a: " << roll << std::endl;
				break;

			case 8:
				std::cout << "How many sides does the dice have?" << std::endl;
				std::cin >> sides;

				roll = 1 + (randomNum % sides);
				std::cout << "You roll a: " << roll << std::endl;
				break;

			}
			total += roll;
			numOfRolls--;
		}

		// Print total of rolls
		std::cout << "Your total: " << total << std::endl;

		// Ask to Roll again
		std::cout << "Would you like to roll again?" << std::endl;
		std::cout << " 1) Yes \n 2) No" << std::endl;
		std::cin >> rollAgain;

		// Error Checking rollAgain
		while (rollAgain != 1 && rollAgain != 2)
		{
			// Inform of finger fumble
			std::cout << "That option does not seem to be a choice available. Please try again. You can only choose between the numbers 1 and 2." << std::endl;
			std::cout << "Would you like to roll again?" << std::endl;
			std::cout << " 1) Yes \n 2) No" << std::endl;
			// Update Choice
			std::cin >> rollAgain;
		}

		// Set repeater variable appropriatly
		if (rollAgain == 2)
		{
			repeat = false;
			total = 0;
		}
	}

}

std::string NameGenerator()
{
	// Variables
	int length = 0;
	int letterLoc = -1;
	std::string capLetters[] = { "A", "B", "C", "D", "E", "F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z" };
	std::string lowerLetters[] = { "a", "b", "c", "d", "e", "f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z" };
	std::string name = "";
	int nameAgain = 0;

	//Seed rand()
	time_t current_time = time(NULL);
	srand(current_time);
	
	// Intro Message
	std::cout << "Welcome to the Name Generator!" << std::endl;

	// Repeat Name Generator Fucntion
	while (nameAgain != 2)
	{
		name.clear();
		// Retrieve Name Length
		std::cout << "How many letters do you want the name to be?" << std::endl;
		std::cin >> length;

		// Create the Name
		for (int i = 0; i < length; ++i)
		{
			int randomNum = rand(); // Random number is declared here to create a new number for each iteration.
			letterLoc = randomNum % 26;
			if (i == 0)
			{
				name += capLetters[letterLoc];
			}
			else
			{
				name += lowerLetters[letterLoc];
			}


		}

		// Print the Name
		std::cout << "The name is " << name << "." << std::endl;

		// Print another Name request
		std::cout << std::endl << "Would you like a new name? \n 1) Yes \n 2) No" << std::endl;
		std::cin >> nameAgain;
	}
	
	return name;
}

std::string SelectMemoryLocation(std::vector <std::string> FN)
{
	// Variables 
	int FNsize = FN.size();
	int option = 0;
	std::ifstream Input;
	std::ofstream output;
	std::string editNote = "";

	// Prompt for location
	std::cout << "Where would you like to store this information?" << std::endl;
	for (int i = 0; i < FNsize; ++i)
	{
		std::cout << i + 1 << ") " << FN[i] << std::endl;
	}
	std::cout << FNsize + 1 << ") New Location" << std::endl;

	// Read in value of location
	std::cin >> option;

	// Open File
	Input.open(FN[option]);

	// Prompt for edit or new 
	std::cout << "Would you like to edit a previous note in " << FN[option] << " or add a new one?" << std::endl;
	std::cin >> editNote;





	return "";
}

void PrintCharacters(std::vector <Character> CL)
{
	for (auto i : CL)
	{
		std::cout << i.getName() << std::endl;
	}
}

void ReadFile(std::vector <Character> * CLP)
{
	// Variables
	std::string ReadInLine; 
	std::string FullText;
	std::vector <std::string> Tokens;
	std::vector <int> IntTokens;
	std::ifstream input;
	input.open("CharactersList.txt");
	std::string delemiter = ",";

	
	
	while (input.good())
	{
		// Read in details 
		std::getline(input, ReadInLine);

		// Seperate the details
		int end = ReadInLine.find(delemiter);
		while (end != -1)
		{
				Tokens.push_back(ReadInLine.substr(0, end));
				ReadInLine.erase(ReadInLine.begin(), ReadInLine.begin() + end + 1);
				end = ReadInLine.find(delemiter);

		}


		// Create a character with these details 
		Character PlaceHolder;
		// Order of inputs
		// [Name, Race, Class, Description, Status, Age, Strength, Constitution, Wisdom, Dexterity, Charisma, ArmorClass, Health, WalkingSpeed, 
		//	Level, MaxHealth]

		PlaceHolder.setName(Tokens[0]);
		PlaceHolder.setRace(Tokens[1]);
		PlaceHolder.setClass(Tokens[2]);
		PlaceHolder.setDescription(Tokens[3]);
		PlaceHolder.setStatus(Tokens[4]);
		PlaceHolder.setAge(stoi(Tokens[5]));
		PlaceHolder.setStrength(stoi(Tokens[6]));
		PlaceHolder.setConstitution(stoi(Tokens[7]));
		PlaceHolder.setWisdom(stoi(Tokens[8]));
		PlaceHolder.setDexterity(stoi(Tokens[9]));
		PlaceHolder.setCharisma(stoi(Tokens[10]));
		PlaceHolder.setArmorClass(stoi(Tokens[11]));
		PlaceHolder.setHealth(stoi(Tokens[12]));
		PlaceHolder.setWalkingSpeed(stoi(Tokens[13]));
		PlaceHolder.setLevel(stoi(Tokens[14]));
		PlaceHolder.setMaxHealth(stoi(Tokens[15]));

		// Add character to the list
		CLP->push_back(PlaceHolder);
		Tokens.clear();

	}
}

void CreateACharacter()
{
	Character Temp;
	Temp.CreateACharacter();
}

//void RemoveACharacter(std::vector <Character> CL)
//{
//	// Variables
//	int choice = 0;
//	std::string temp;
//	std::vector <std::string> temp2;
//	std::ifstream input;
//	input.open("CharactersList.txt");
//	std::string ReadInLine;
//	std::string delemiter = ",";
//	std::string toBeDeletedName;
//	std::ofstream output;
//	int count = 0;
//
//	std::cout << "Which character would you like to remove?" << std::endl;
//	for (int i = 0; i < CL.size(); ++i)
//	{
//		std::cout << i + 1 << ") " << CL[i].getName() << std::endl;
//	}
//	std::cin >> choice;
//
//	while (choice < 1 || choice > CL.size())
//	{
//		std::cout << "That is not a vaild input. Acceptable inputs include numbers 1 - " << CL.size() << ". Please try again." << std::endl;
//		std::cin.clear();
//		std::cin >> choice;
//	}
//
//	toBeDeletedName = CL[choice - 1].getName();
//
//	while (input.good())
//	{
//		// Read in details 
//		std::getline(input, ReadInLine);
//		temp = temp + ReadInLine;
//
//		// Seperate the details
//		int end = ReadInLine.find(delemiter);
//		while (end != -1)
//		{
//			temp2.push_back(ReadInLine.substr(0, end));
//			ReadInLine.erase(ReadInLine.begin(), ReadInLine.begin() + end + 1);
//			end = ReadInLine.find(delemiter);
//
//		}
//	}
//
//
//	for (int i = 0; i < CL.size(); ++i)
//	{
//		if (CL[choice - 1].getName() == temp2[i])
//		{
//
//		}
//		else
//		{
//			if (count < 16)
//			{
//				output << temp2[i] << ",";
//				++count;
//			}
//			else
//			{
//				output << std::endl << temp2[i] << ",";
//			}
//			
//		}
//		
//	}
//}


