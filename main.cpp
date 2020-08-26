#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {

//ostringstream s;

system("./tools/clear");

cout << "This is the portmap!\n" << "You can scan some host to see open ports:\n";

string host;

cout << "Enter your host:\n";

cin >> host;

string port;

cout << "Enter your port:\n";

cin >> port;

cout << "\n";

//cout << "Your host is: " << host << " " << "And, Your port is: " << port << endl;

string start = "python3 tools/cs.py " + host + " " + port;

if (port == "every") {

ostringstream s;

int i;

i = 0;

string st = "python3 tools/cs.py " + host + " " + s.str();

//remove("tools/result.txt");

while (i <= 100) {

//ostringstream s;

s << i;

//string st = "python3 tools/scan.py " + host + " " + s.str();

system(st.c_str());

i++;

//system("clear");

//system("cat tools/result.txt");

//remove("tools/result.txt");

}

//system("clear");

//system("cat tools/result.txt");

//remove("tools/result.txt");

}

else {

system(start.c_str());

}

return 0;

}
