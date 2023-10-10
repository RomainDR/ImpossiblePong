#include "../../Utils/SFMLCore.h"


class DataBase
{
#pragma region f/p
public:
	static inline Font Font;
#pragma endregion f/p
#pragma region Construct/Destruc
public:
	DataBase();
	~DataBase() = default;
#pragma endregion Construct/Destruc
#pragma region Method
private:
	void LoadDataBase();
#pragma endregion Method
};

