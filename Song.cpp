#include <string>
#include <iostream>
#include "Song.h"

using namespace std;

Song::Song(){
	Song::title = "";
	Song::artist = "";
	Song::size = 0;
}
void Song::setTitle(string title){
	Song::title = title;
}
void Song::setArtist(string artist){
	Song::artist = artist;
}
void Song::setSize(int size){
	Song::size = size;
}
string Song::getTitle(){
	return Song::title;
}
string Song::getArtist(){
	return Song::artist;
}
int Song::getSize(){
	return Song::size;
}
bool Song::operator > (Song const &s){
	if(Song::artist > s.artist)
		return true;
	return false;
}
bool Song::operator < (Song const &s){
	if(Song::artist < s.artist)
		return true;
	return false;
}
bool Song::operator == (Song const &s){
	if(Song::title == s.title)
		return true;
	return false;
}
