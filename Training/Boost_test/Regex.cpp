#include <iostream>
#include "boost/regex.hpp"

using namespace boost;
using namespace std;

int main() {
	regex regex_object;
	std::list<std::string> user_expressions;
	std::list<std::string> real_commands;
	user_expressions.push_back("[Cc]andy +[Bb]ar!?.");
	real_commands.push_back("candy Bar");
	regex_object.assign(user_expression.front());

	if ( regex_match(real_commands.front() regex_object) ) {
	  cout << " matches!\n";
	} else {
	  cout << " does not match!\n";
	}

	return 0;
}