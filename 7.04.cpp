#include <iostream>
#include <string>

class singleton
{

private:
	std::string appName;

public:


	void getInstance(int a = 5) {
		std::cout << a << std::endl;
	}

	int count = 0;

	void inrement(){
		count++;
	}

	void print() {
		std::cout << "counter = " << count << std::endl;
	}
	
	void setName(std::string name) {
		appName = name;
	}

	std::string getName() {
		return appName;
}
	void printName() {
		std::cout << "App name - " << appName << std::endl;
	}
};

int main() {
	singleton Mysingleton;
	singleton MySingletom1;

	if (&MySingletom1 != &Mysingleton) {
		std::cout << "not equal" << std::endl;
	}
	else {
		std::cout << "equal" << std::endl;
	}
	Mysingleton.print();
	Mysingleton.print();
	Mysingleton.print();

	Mysingleton.inrement();
	Mysingleton.inrement();
	Mysingleton.inrement();
	Mysingleton.inrement();

	Mysingleton.print();

	Mysingleton.setName("AppName");
	Mysingleton.printName();
}
