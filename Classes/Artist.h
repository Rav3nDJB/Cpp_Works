#pragma once
#include <iostream>
using namespace std;

#ifndef ARTIST_H_
#define ARTIST_H_
class Artist
{
public:
	string name;
	bool hasImage;
	

	bool generateImage() {};
	bool editArtist(Artist artist) {}

private:
	
	string genre[10] = {};
	string path;
	string picturePath;

	bool editGenre(string genre[]) {}

};


#endif // !ARTIST_H_
