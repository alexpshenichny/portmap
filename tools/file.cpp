#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
//cout << argc;
string f = argv[1];
string n = argv[2];
ofstream out(f, ios::app);
if (out.is_open()) {
out << n.c_str();
}
cout << "Ready!\n";

return 0;

}
