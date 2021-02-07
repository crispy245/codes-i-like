/*
Complete the solution so that it returns true if the first argument(string) passed in ends with the 2nd argument (also a string).

Examples:

solution('abc', 'bc') // returns true
solution('abc', 'd') // returns false

*/

#include <iostream>
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


bool solution(std::string const &str, std::string const &ending) {
	return (str.compare(str.size()-ending.size(),ending.size(),ending)==0);
}

int main(int argc, char** argv) {
	std::cout<<solution("abc", "bc"); // returns true
	std::cout<<solution("abc", "d"); // returns false
}
