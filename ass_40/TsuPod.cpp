#include <bits/stdc++.h> 
#include <string>
#include <stdlib.h>
#include <iostream>
#include "Song.cpp"
#include "TsuPod.h"
#define SIZE 256

using namespace std;

TsuPod::TsuPod(int size){
	if(size <= SIZE){
		TsuPod::size = size;
		TsuPod::list = (Song*) calloc(99999, sizeof(Song*));
		TsuPod::count = 0;
	}
	else
		cout << "Too large!" << endl;
}
void TsuPod::addSong(Song s){
	if((TsuPod::getTotalMemory() + s.getSize()) <= TsuPod::size){
		TsuPod::list[count++] = s;
		cout << "Song added!" << endl;
	}
	else
		cout << "Memory too less!" << endl;
}
void TsuPod::removeSong(Song s){
	int i;
	for(i=0;i<TsuPod::count;i++){
		if(TsuPod::list[i] == s){
			for(int j=i;j<(TsuPod::count-1);j++){
				TsuPod::list[j] = TsuPod::list[j+1];
			}
			TsuPod::count--;
			break;
		}
	}
	if(i == TsuPod::count){
		cout << "Song not found!" << endl;
	}
	else{
		cout << "Song deleted!" << endl;
	}
}
void TsuPod::shuffle(){
	unsigned seed = 0;  
	std::shuffle(TsuPod::list, (TsuPod::list + TsuPod::count), default_random_engine(seed));
	cout << "List shuffled" << endl;
}
void TsuPod::clearSongList(){
	for(int i=0;i<TsuPod::count;i++){
		TsuPod::list[i].setTitle("");
		TsuPod::list[i].setArtist("");
		TsuPod::list[i].setSize(0);
	}
	TsuPod::count = 0;
	cout << "List cleared" << endl;
}
void TsuPod::showSongList(){
	cout << "Title\tArtist\tSize" << endl;
	for(int i=0;i<TsuPod::count;i++){
		cout << TsuPod::list[i].getTitle() << "\t" << TsuPod::list[i].getArtist() << "\t" << TsuPod::list[i].getSize() << endl;
	}
}
void TsuPod::sortSongList(){
	cout << "Title\tArtist\tSize" << endl;
	for (int i=0;i<TsuPod::count-1;i++) 
		for (int j=0;j<TsuPod::count-i-1;j++)  
    		if (TsuPod::list[j] > TsuPod::list[j+1])  
        		swap(&TsuPod::list[j], &TsuPod::list[j+1]);
    cout << "List sorted" << endl;
}
int TsuPod::getTotalMemory(){
	int total=0;
	for(int i=0;i<TsuPod::count;i++){
		total += TsuPod::list[i].getSize();
	}
	return total;
}
int TsuPod::getRemainingMemory(){
	return TsuPod::size - TsuPod::getTotalMemory();
}
void TsuPod::swap(Song *xp, Song *yp)  
{  
	Song temp = *xp;  
	*xp = *yp;  
	*yp = temp;  
}
