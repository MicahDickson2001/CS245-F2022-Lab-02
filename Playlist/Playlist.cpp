/********************************************************************
 * Playlist.cpp :  
 * Program that randomly picks a song from a playlist; makes use of 
 * string, vector, and random from the Standard Library.
 *
 * NOTE: This version of the program has numerous errors. 
 * Your job is to...
 *	1.) fix all bugs
 *	2.) commit your changes to your local Git repository
 *	3.) push your changes to your remote Git respository
 *	4.) submit a Pull Request to your instructor's Git project
 *
 ********************************************************************
 */

// Preprocessor directives
#include "pch.h"
#include <random>
//included strings
#include <string>
//included strings for cin and cout
#include <iostream>
//namespace to make it easier to fix
using namespace std;


int main()
{
	// Create a vector of strings; add items using a list initializer
	//replaced String with string and added brackets to add the songs to the vector
	vector<string> songs = { "Happy Birthday", "Back to Life", "The Song from the Skyrizi Commercial", "Baby Shark" };

	// Add a 5th string to the end of the vector
	//changed put to pushback
	songs.push_back("Axel F");

	// Print the playlist to the screen
	// fixed the input arrows 
	cout << "Your Playlist:" << endl;

	// Loop through the vector of songs; print each vector element to console.
	for (int i = 0; i < songs.size(); i++)
	{
		cout << songs.at(i) << endl;
	}

	// Set up a random number generator seeder
	std::random_device seed;

	// Create a random integer generator; chooses random ints from 0 to 4 (inclusive)
	std::uniform_int_distribution<int> rand_dist(0, 4);

	// Get the next random integer
	int index = rand_dist(seed);

	// Get the item from the vector at the randomly-selected index
	//no get but there is an at and replaced [] with ()
	string currentSong = songs.at(index);

	// Convert each charcter of the 'currentSong' string to UPPERCASE
	//completely replaced the for loop because i did not like it.
	// i just helps me better than c could ever.
	for (int i =0; i < currentSong.size();++i)
	{
		currentSong.at(i) = toupper(currentSong.at(i));
	}

	// Print the UPPERCASE 'currentSong' string
	cout << endl << "Now playing: " << currentSong;

	return 0;
}

