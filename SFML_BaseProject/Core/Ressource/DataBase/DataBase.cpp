#include "DataBase.h"
#include <iostream>




#pragma region Construct/Destruc
DataBase::DataBase()
{
	LoadDataBase();
}
#pragma endregion Construct/Destruc
#pragma region Method
void DataBase::LoadDataBase()
{
	if (!Font.loadFromFile("../Fonts/Dateline.otf"))
	{
		std::cout << "Error load Font" << std::endl;
		return;
	}
}
#pragma endregion Method