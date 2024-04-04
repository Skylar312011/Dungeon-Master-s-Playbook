#pragma once


class NPC
{
public:
	
	// Constructor
	NPC();

	// Destructor
	~NPC();

	// Setters
	void setName(std::string name)
	{
		Name = name;
	}
	void setRace(std::string race)
	{
		Race = race;
	}
	void setClass(std::string Class1)
	{
		Class = Class1;
	}
	void setDescription(std::string des)
	{
		Description = des;
	}
	void setStatus(std::string stat)
	{
		Status = stat;
	}
	void setTown(std::string town)
	{
		Town = town;
	}
	void setAge(int age)
	{
		Age = age;
	}
	void setEncounters(int et)
	{
		Encounters = et;
	}
	void setInParty(bool inparty)
	{
		InParty = inparty;
	}

	// Getters
	std::string getName()
	{
		return Name;
	} const
	std::string getRace()
	{
		return Race;
	} const
	std::string getClass()
	{
		return Class;
	} const
	std::string getDescription()
	{
		return Description;
	} const
	std::string getStatus()
	{
		return Status;
	} const
	std::string getTown() const
	{
		return Town;
	}
	int getAge()
	{
		return Age;
	} const
	int getEncounters() const
	{
		return Encounters;
	}
	bool getInParty() const
	{
		return InParty;
	}

	// Other Functions 
	void EditCharacter()
	{
		// Variables
		int choice = 0;
		int statChoice = 0;
		std::string name;
		std::string race;
		std::string Class1;
		std::string description;
		std::string status;
		std::string town;
		int age;
		int encounters;
		bool inparty;

		// Intializing Message
		std::cout << std::endl << "Okay, lets make some changes around here." << std::endl;
		// Loop the process 
		while (choice != 7)
		{
			// Print Options
			std::cout << "What information about your character do you want to change?" << std::endl;
			std::cout << " 1) Name \n 2) Race \n 3) Class \n 4) Description \n 5) Staus \n 6) Town \n 7) Age \n 8) Encouters \n 9) In Party Status \n 10) Quit" << std::endl;
	

			// Read in selection
			std::cin >> choice;

			// Error Checking the choice
			while (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5 && choice != 6 && choice != 7 && choice != 8 && choice != 9 && choice != 10)
			{
				std::cout << "That option does not seem to be a choice available. Please try again. You can only choose between the numbers 1 - 10. " << std::endl;
				std::cout << "What information about your character do you want to change?" << std::endl;
				std::cout << " 1) Name \n 2) Race \n 3) Class \n 4) Description \n 5) Staus \n 6) Town \n 7) Age \n 8) Encouters \n 9) In Party Status \n 10) Quit" << std::endl;

				std::cin >> choice;
			}

			switch (choice)
			{
			case 1: // Name
				std::cout << "What would you like the new name for this character to be? Enter it below." << std::endl;
				std::cin >> name;
				std::cout << getName() << " will now be called " << name << std::endl;
				setName(name);
				break;

			case 2: // Race
				std::cout << "What is the new race for " << getName() << "? Enter is below." << std::endl;
				std::cin >> race;
				std::cout << getName() << " is now the race " << race << "instead of " << getRace();
				setRace(race);
				break;

			case 3: // Class
				std::cout << "What is the new class for " << getName() << "? Enter it below." << std::endl;
				std::cin >> Class1;
				std::cout << getName() << " is now class " << Class1 << std::endl;
				setClass(Class1);
				break;

			case 4: // Description
				break;

			case 5: // Status 
				std::cout << "I am sorry for your loss or congratulating you on a victory over death! What is the new status of " << getName() << "?" << std::endl;
				std::cout << "1) Alive \n 2) Dead" << std::endl;
				std::cin >> statChoice;
				// Error Checking the Status Choice
				while (statChoice != 1 && statChoice != 2)
				{
					std::cout << "That option does not seem to be a choice available. Please try again. You can only choose between the numbers 1 and 2." << std::endl;
					std::cout << "What is the new status of " << getName() << "?" << std::endl;
					std::cout << "1) Alive \n 2) Dead" << std::endl;

					std::cin >> statChoice;
				}
				if (statChoice == 1)
				{
					setStatus("Alive");
				}
				else if (statChoice == 2)
				{
					setStatus("Dead");
				}

				std::cout << getName() << " is now " << getStatus() << "." << std::endl;
				break;

			case 6: // Age
				std::cout << "What is the new age of " << getName() << "? Enter is below." << std::endl;
				std::cin >> age;
				std::cout << getName() << " is now " << age << " years old." << std::endl;
				setAge(age);
				break;

			case 7: // Quit
				break;
			}
		}
	}

private:

	std::string Name;
	std::string Race;
	std::string Class;
	std::string Description;
	std::string Status;
	std::string Town;
	int Age;
	int Strength;
	int Constitution;
	int Wisdom;
	int Dexterity;
	int Charisma;
	int ArmorClass; // How high to roll to hit the NPC.
	int Health; // The current health of the NPC.
	int WalkingSpeed; // How many spaces a NPC can cover in a single turn.
	int Level;
	int MaxHealth; // The maximum health a NPC can have.


	// NPC Specific
	int Encounters;
	bool InParty;

};

NPC::NPC()
{
	Name = "";
	Race = "";
	Class = "";
	Description = "";
	Status = "";
	Town = "";
	Age = 0;
	Encounters = 0;
	InParty = false;
}

NPC::~NPC()
{

}
