

#include <iostream>

class User
{
public:
	User(){}
	virtual void Registration()
	{
		std::cout << "Registration of new user, create login and password";
	}
	virtual void Check_pass()
	{
		std::cout << "Check password of user";
	}
	virtual void Check_login()
	{
		std::cout << "Check login of user";
	}
	virtual void Encryption()
	{
		std::cout << "Encryption password of user";
	}

protected:


};

