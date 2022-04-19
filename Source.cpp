#include <iostream>
using namespace std;

// void func , no return required

void calling(string name, string id, int age) {
	cout << "Your name is " << name << endl;
	cout << "Your ID is :" << id << endl;
	cout << "Your age is :" << age << endl;
	if (age >= 70) {
		cout << "ohhh " << name << " you are too old" << endl;
	}
	else if (age >= 20) {
		cout << "ahhh " << name << " you are eglible" << endl;
	}
	else {
		cout << "ohh no" << name << " you are too young " << endl;
	}


}

int main() {
	string name, id;
	int age;
	cout << "Input your name : " << endl;
	cin >> name;
	cout << "Input your ID : " << endl;
	cin >> id;
	cout << "Input your age : " << endl;
	cin >> age;
	calling(name, id, age);
	cin.get();
	return 0;
}