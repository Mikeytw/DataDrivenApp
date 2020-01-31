# include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {

	int tweetcounter = 0;
	int moneycounter = 0;
	int politicscounter = 0;
	int counter = 0;
	int womensmarchcounter = 0;
	int datecounter = 0;
	int januarycounter = 0;
	int httpscounter = 0;
	string line;
	string data;
	string money;

	ifstream inputFile("sampleTweets.csv");
	if (inputFile.is_open()) {
	
		while (!inputFile.eof()) { //while loop to convert the tweets into a string
			getline(inputFile, data);
			
				size_t pos1 = data.find(""); // "" left empty to include all rows in excell
			if (pos1 != string::npos); {
				tweetcounter++;
			}

		if (data.find("money") != string::npos) // data.find without storing position as it's not necessary
			{
				moneycounter++;
			}

		if (data.find("politics") != string::npos) //find number of times politics mentioned
			{
				politicscounter++;
			}
		
		if (data.find("Paris") != string::npos)
			{
				cout << data << endl;
			}
		
		if (data.find("DreamWorks") != string::npos)
			{
				cout << data << endl;
			}
		
		if (data.find("Uber") != string::npos)
			{
				cout << data << endl;
			}

		if (data.find("https://") != string::npos) //find number of times politics mentioned
		{
			httpscounter++;
		}

		if (data.find("womensmarch") != string::npos)
			{
				womensmarchcounter++;
			}

		if (data.find("/2017") != string::npos) //find tweets from 2017
			{
				datecounter++;
			}

		if (data.find("/01/2017") != string::npos) //find tweets from 2017
			{
				januarycounter++;
			}
			
		}
		}else {
		cout << "no File" << endl;
	}

		inputFile.close();

cout << "there are " << tweetcounter << " tweets" << endl;

cout << "the word money was found " << moneycounter << " times" << endl;
	
cout << "the word politics was found " << politicscounter << " times" << endl;

cout << "womensmarch was found " << womensmarchcounter << " times" << endl;

cout << datecounter << " tweets as of 28th february 2017" << endl;

cout << januarycounter << " tweets in january 2017" << endl;

cout << "there are " << httpscounter << " tweets with web links" << endl;

	return 0;
}