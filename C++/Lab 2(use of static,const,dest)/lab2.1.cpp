#include <iostream>
#include <string>
using namespace std;
class String {
   public:
        string str;
    public:
        String(string s = "") : str(s) {}
        String operator+(const String &s) const {
            return str + s.str;
        }};
int main() {
    string s1, s2;
    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;
String s3 = s1+s2;
    cout << "The concatenated string is: " << s3.str << endl;
    return 0;
}
