#ifndef ROBOT_H
#define ROBOT_H

#include "object.h"

class Robot : public Object
{
public:

	//-------------------------------------------------------------- constructor
	// Brief Description
	//  Constructor for the Robot
	//
	// Method:    Robot
	// FullName:  Robot::Robot
	// Access:    public 
	// Returns:   None
	// Parameter: const Coordinate3D& coordinate
	//--------------------------------------------------------------------------
	Robot(
		const Coordinate3D& coordinate);

	//--------------------------------------------------------------------- draw
	// Brief Description
	//  Draws the Robot to the screen at its X Y Z coordinates.
	//
	// Method:    draw
	// FullName:  Robot::draw
	// Access:    public 
	// Returns:   void
	//--------------------------------------------------------------------------
	void draw();

	//-------------------------------------------------------------------- print
	// Brief Description
	//  Prints "B" (Representing "Bot" of "Robot") to the console, which
	//  can be used for debugging purposes.
	//
	// Method:    print
	// FullName:  Robot::print
	// Access:    public 
	// Returns:   void
	//--------------------------------------------------------------------------
	void print();

private:

};

#endif