class TsuPod{
public:
	int size;
	Song* list;
	int count;

public:
	TsuPod(int);
	void addSong(Song);
	void removeSong(Song);
	void shuffle();
	void clearSongList();
	void showSongList();
	void sortSongList();
	int getTotalMemory();
	int getRemainingMemory();
	void swap(Song *xp, Song *yp);
};
