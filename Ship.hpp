/******************************************************************************
** Author: Christina Brasco
** Date created: 3/11/2018
** Last modified date: 3/11/2018
** Description: header file for the Ship class
******************************************************************************/

#include <string>

#ifndef SHIP_H
#define SHIP_H

class Ship
{
	private: 
		char* shipSquares;
		int shipSize;
		int xpos, ypos; //upper left corner of ship
		bool isSunk;
		bool isHorizontal;
		std::string name;


	public:	
		Ship(int size,  std::string n);//default constructor
		Ship(int size, std::string n, int x, int y, bool s, bool h); 
		Ship(const Ship &oldShip); //copy constructor
		Ship& operator=(const Ship &right); // copy assignment operator
		~Ship(); //destructor
		int getSize() const;
		int getX() const;
		int getY() const;
		bool isShipSunk() const;
		bool isShipHorizontal() const;
		std::string getName() const;
		void setPosition(int x, int y, bool h);
		void printShip();
		bool recordHit(int hitLocX, int hitLocY);
};

#endif