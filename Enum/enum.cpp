#include <iostream>
#include <string>
 
enum ItemType
{
    ITEMTYPE_GUN,
    ITEMTYPE_ARBALET,
    ITEMTYPE_SWORD
};

class UNIT
{
public:
	
   virtual	~ UNIT();
   virtual void attack(std::string name) = 0;
	
};

UNIT::~UNIT(){}

class Unnit1 : UNIT {

public:
	 void attack(std::string name) override {
	 	std::cout << "Unit 1 ekip " << name << std::endl;
	}
};


class Unnit2 : public UNIT
{
public:

	void attack(std::string name) override {
	 	std::cout << "Unit 2 ekip " << name << std::endl;
	}
	
};
 
std::string getItemName(ItemType itemType)
{
    if (itemType == ITEMTYPE_GUN)
        return "Gun";
    if (itemType == ITEMTYPE_ARBALET)
        return "Arbalet";
    if (itemType == ITEMTYPE_SWORD)
        return "Sword";
    return "Unknown item"; // Добавляем возврат для неизвестных случаев
}
 
int main()
{
	ItemType itemType = ITEMTYPE_SWORD; 
    ItemType itemType1 = ITEMTYPE_ARBALET; // Инициализация переменной перечисляемого типа
    ItemType itemType2 = ITEMTYPE_GUN;
 
    std::cout << "You are carrying a " << getItemName(itemType) << "\n";

    Unnit1 unit1;
    Unnit2 unit2;

    unit1.attack(getItemName(itemType1));
    unit2.attack(getItemName(itemType2));
 
    return 0;
}
