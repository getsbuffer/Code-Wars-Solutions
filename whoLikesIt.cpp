#include <iostream>
// Code Wars -- Who Likes It? -- Create the text that should appear under Facebook posts when a post is liked.
// Did not solve, original code was this except I had "&" in front of the array references since I did not understand vector arrays. Now I know thanks to viewing solutions.
using namespace std;
int main() {
	string likes(const vector<string> &names){
		string nameSize = names.size();
  		switch(nameSize){
    			case 0: return "no one likes this";
    			case 1: return names[0] + " likes this";
    			case 2: return names[0] + " and " + names[1] + " like this";
    			case 3: return names[0] + ", " + names[1] + " and " + names[2] + " like this";
   		 	default: return names[0] + ", " + names[1] + " and " + to_string(names.size() - 2) + " others like this";
  		}
	}
}
