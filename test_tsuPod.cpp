#include <iostream>
#include "TsuPod.cpp"

using namespace std;

int main(){
	int size;
	cout << "Enter size: ";
	cin >> size;
	TsuPod tp(size);
	Song s1, s2, s3;

	s1.setTitle("A");
	s2.setTitle("B");
	s3.setTitle("C");
	s1.setArtist("A");
	s2.setArtist("B");
	s3.setArtist("C");
	s1.setSize(10);
	s2.setSize(20);
	s3.setSize(10);
	tp.addSong(s1);
	tp.addSong(s2);
	tp.addSong(s2);

	tp.showSongList();
	cout << "Total Memory: " << tp.getTotalMemory() << " MB\n" << endl;
	
	tp.clearSongList();
	tp.showSongList();
	cout << "Total Memory: " << tp.getTotalMemory() << " MB\n" << endl;
	
	tp.addSong(s1);
	tp.addSong(s2);
	cout << "Remaining Memory: " << tp.getRemainingMemory() << " MB\n" << endl;
	tp.addSong(s3);
	
	tp.sortSongList();
	tp.showSongList();
	cout << "Total Memory: " << tp.getTotalMemory() << " MB\n" << endl;
	
	tp.shuffle();
	tp.showSongList();
	cout << "Total Memory: " << tp.getTotalMemory() << " MB\n" << endl;
	
	cout << "PROGRAM OVER" << endl;
}
