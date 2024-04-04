#pragma once


class Character
{
public:
	
	// Constructor
	Character();

	//Destructor
	~Character();

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
	void setAge(int age)
	{
		Age = age; 
	}
	void setStrength(int strength)
	{
		Strength = strength;
	}
	void setConstitution(int constitution)
	{
		Constitution = constitution; 
	}
	void setWisdom(int wisdom)
	{
		Wisdom = wisdom;
	}
	void setDexterity(int dexterity)
	{
		Dexterity = dexterity;
	}
	void setCharisma(int charisma)
	{
		Charisma = charisma;
	}
	void setArmorClass(int armorclass)
	{
		ArmorClass = armorclass; 
	}
	void setHealth(int health)
	{
		Health = health;
	}
	void setWalkingSpeed(int walkingspeed)
	{
		WalkingSpeed = walkingspeed;
	}
	void setLevel(int level)
	{
		Level = level;
	}
	void setMaxHealth(int maxhealth)
	{
		MaxHealth = maxhealth;
	}

	// Getters
	std::string getName() const
	{
		return Name;
	}
	std::string getRace() const
	{
		return Race;
	}
	std::string getClass() const
	{
		return Class;
	}
	std::string getDescription() const
	{
		return Description;
	}
	std::string getStatus() const
	{
		return Status;
	}
	int getAge() const
	{
		return Age;
	}
	int getStrength() const
	{
		return Strength;
	}
	int getConstitution() const 
	{
		return Constitution;
	}
	int getWisdom() const
	{
		return Wisdom;
	}
	int getDexterity() const
	{
		return Dexterity;
	}
	int getCharisma() const
	{
		return Charisma;
	}
	int getArmorClass() const
	{
		return ArmorClass;
	}
	int getHealth() const
	{
		return Health;
	}
	int getWalkingSpeed() const
	{
		return WalkingSpeed;
	}
	int getLevel() const
	{
		return Level;
	}
	int getMaxHealth() const
	{
		return MaxHealth;
	}


	//Other Functions
	void CreateACharacter()
	{
		// Variables 
		std::string name;
		std::string race;
		std::string Class1;
		std::string description;
		std::string status;
		int age;
		int number;

		//Creating the character
		// Name 
		std::cout << std::endl;
		std::cout << "Lets get started on a new character. Choose a name and enter it below." << std::endl; 
		std::cin >> name;
		setName(name);
		std::cout << "You have chosen the name " << getName() << ". If you would like to change it, you can do so later." << std::endl; 
		
		// Race
		std::cout << std::endl;
		std::cout << "Now, what race is " << getName() << "? Enter it on the next line." << std::endl;
		std::cin >> race; 
		setRace(race);
		std::cout << getName() << " is a(n) " << getRace() << ". Great choice! Again, if you made a mistake or change your mind, you can edit this information later." << std::endl;

		// Class
		std::cout << std::endl;
		std::cout << "What class is " << getName() << "?" << std::endl; 
		std::cin >> Class1; 
		setClass(Class1); 
		std::cout << "Thats a great selection!" << std::endl;

		// Description
		std::cout << std::endl;
		std::cout << "Give some details on " << getName() << ". If you do not have a description now, you can always add on later." << std::endl; 
		std::cin >> description;
		setDescription(description); 
		std::cout << "Awesome!" << std::endl;

		// Status
		std::cout << std::endl;
		std::cout << "Now, for the status of your character. Since your are creating the character for the first time, we will set the status to alive. If your character were to meet their tragic end, the status can be altered later." << std::endl;
		setStatus("Alive"); 

		// Age
		std::cout << std::endl;
		std::cout << "How old is " << getName() << "?" << std::endl; 
		std::cin >> age;
		setAge(age);
		std::cout << "Wow, did not expect that number." << std::endl; 

		// Strength
		std::cout << std::endl;
		std::cout << "What is the Strength of " << getName() << "?" << std::endl;
		std::cin >> number;
		setStrength(number);

		// Constitution
		std::cout << std::endl;
		std::cout << "What is " << getName() << "'s Constitution?" << std::endl;
		std::cin >> number;
		setConstitution(number);
	
		// Wisdom
		std::cout << std::endl;
		std::cout << "What is " << getName() << "'s Wisdom?" << std::endl;
		std::cin >> number;
		setWisdom(number);

		// Dexterity
		std::cout << std::endl;
		std::cout << "What is " << getName() << "'s Dexterity?" << std::endl;
		std::cin >> number;
		setDexterity(number);

		// Charisma
		std::cout << std::endl;
		std::cout << "What is " << getName() << "'s Charisma?" << std::endl;
		std::cin >> number;
		setCharisma(number);
		
		// ArmorClass 
		std::cout << std::endl;
		std::cout << "What is " << getName() << "'s Armor Class?" << std::endl;
		std::cin >> number;
		setArmorClass(number);

		// Health 
		std::cout << std::endl;
		std::cout << "What is " << getName() << "'s Health?" << std::endl;
		std::cin >> number;
		setHealth(number);

		// WalkingSpeed 
		std::cout << std::endl;
		std::cout << "What is " << getName() << "'s Walking Speed?" << std::endl;
		std::cin >> number;
		setWalkingSpeed(number);

		// Level
		std::cout << std::endl;
		std::cout << "What is " << getName() << "'s Level?" << std::endl;
		std::cin >> number;
		setLevel(number);

		// MaxHealth;
		std::cout << std::endl;
		std::cout << "What is " << getName() << "'s Max Health?" << std::endl;
		std::cin >> number;
		setMaxHealth(number);

		// Add Character to List

		std::ofstream out;
		out.open("CharactersList.txt", std::ios::out | std::ios::app);
		// [Name, Race, Class, Description, Status, Age, Strength, Constitution, Wisdom, Dexterity, Charisma, ArmorClass, Health, WalkingSpeed, 
		//	Level, MaxHealth]
		out << std::endl << getName() << "," << getRace() << "," << getClass() << "," << getDescription() << "," << getStatus() << ",";
		out << getAge() << "," << getStrength() << "," << getConstitution() << "," << getWisdom() << "," << getDexterity();
		out << "," << getCharisma() << "," << getArmorClass() << "," << getHealth() << "," << getWalkingSpeed() << ",";
		out << getLevel() << "," << getMaxHealth() << ",";
	

		// Ending Note
		std::cout << std::endl;
		std::cout << "Congrats! Your character is complete!! Remember, if you made a mistake previosuly, then you can change it now or later. No need to panic!" << std::endl;

		
	}
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
		int age;

		// Intializing Message
		std::cout << std::endl << "Okay, lets make some changes around here." << std::endl;
		// Loop the process 
		while(choice != 7)
		{ 
			// Print Options
			std::cout << "What information about your character do you want to change?" << std::endl;
			std::cout << " 1) Name \n 2) Race \n 3) Class \n 4) Description \n 5) Staus \n 6) Age \n" << std::endl;
			std::cout << "If you do not want to change any of this information, type \"7\" to exit this menu" << std::endl;

			// Read in selection
			std::cin >> choice; 

			// Error Checking the choice
			while(choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5 && choice != 6 && choice != 7)
		{
			std::cout << "That option does not seem to be a choice available. Please try again. You can only choose between the numbers 1 - 7. " << std::endl; 
			std::cout << "What information about your character do you want to change?" << std::endl;
			std::cout << "1) Name \n 2) Race \n 3) Class \n 4) Description \n 5) Staus 6) Age \n" << std::endl;

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
	void EditStatBlock()
	{
		
	}

private:
	std::string Name;
	std::string Race;
	std::string Class; 
	std::string Description; 
	std::string Status; // Is the character alive or dead.
	int Age;
	int Strength;
	int Constitution; 
	int Wisdom; 
	int Dexterity; 
	int Charisma; 
	int ArmorClass; // How high to roll to hit the character/creature.
	int Health; // The current health of the character.
	int WalkingSpeed; // How many spaces a character/creature can cover in a single turn.
	int Level; 
	int MaxHealth; // The maximum health a character can have.


};

Character::Character()
{
	Name = "";
	Race = "";
	Class = "";
	Description = "";
	Status = "";
	Age = -1;
	Strength = 0;
	Constitution = 0;
	Wisdom = 0;
	Dexterity = 0;
	Charisma = 0;
	ArmorClass = 0; 
	Health = 0;
	WalkingSpeed = 0; 
	Level = 0;
	MaxHealth = 0;


}

Character::~Character()
{

}
