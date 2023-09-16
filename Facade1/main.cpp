#include <iostream>

using namespace std;

class FacadeCinema
{
	/*Here must be multiple different variables for objects*/
public:
	FacadeCinema(/*Here must be multiple different objects*/)
	{
		/*Implementation multiple different variables from ctor parameters*/
	}

	void WatchMovie(string movieName)
	{
		/* Multiple actions from FacadeCinema variables like 
		turn on TV, prepare popcorn, set volume to 50% etc..
		*/

		cout << "Evertething prepared to watch " << movieName << endl;
	}
};

/*
	The shortest example from the book.
	
	The main aim of this pattern is to make something very easy
	converting low-level code to high-level.
*/
int main() 
{
	FacadeCinema().WatchMovie("Guardians of the Galaxy");
}