#include <iostream>
#include <vector>
#include <string>

using namespace std;

#include <iostream>
#include <vector>
#include <string>

class User {
public:
    virtual void Registration() {}
    void Check_pass() {}
    void Check_login() {}
    void Change_pass() {}
    void Change_login() {}

protected:
    std::string pass;
    std::string login;
};

class Admin : public User {
public:
    static Admin& getInstance() {
        static Admin instance;
        return instance;
    }

    void Registration() override {}
    void Add_Test() {}
    void Delete_Test(std::string question) {}
    void Watch_Statictics() {}
    void Delete_Tested() {}
    void Add_Tested() {}
    void Modefication_Tested() {}

private:
    Admin() {
        login = "admin";
        pass = "admin";
    }
};

    int main() {
        Admin& admin = Admin::getInstance();

        admin.Registration();
        admin.Add_Test();
        admin.Delete_Test("Question");
        admin.Watch_Statictics();
        admin.Delete_Tested();
        admin.Add_Tested();
        admin.Modefication_Tested();
        return 0;
    }
