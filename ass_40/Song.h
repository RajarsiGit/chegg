#include <string>
using namespace std;
class Song{
public:
	string title;
	string artist;
	int size;

public:
	Song();
	void setTitle(string title);
	void setArtist(string artist);
	void setSize(int size);
	string getTitle();
	string getArtist();
	int getSize();
	bool operator > (Song const &s);
	bool operator < (Song const &s);
	bool operator == (Song const &s);
};
