#ifndef OBJECT_H
#define OBJECT_H

#include "coordinate3d.h"

class Object
{
public:

	//-------------------------------------------------------------- constructor
	// Brief Description
	//  Constructor for an Object
	//
	// Method:    Object
	// FullName:  Object::Object
	// Access:    public 
	// Returns:   None
	// Parameter: const Coordinate3D& coordinate
	//--------------------------------------------------------------------------
	Object(
		const Coordinate3D& coordinate);

	//--------------------------------------------------------------------- draw
	// Brief Description
	//  Pure virtual draw function
	//
	// Method:    draw
	// FullName:  Object::draw
	// Access:    public 
	// Returns:   void
	//--------------------------------------------------------------------------
	virtual void draw() = 0;

protected:
	Coordinate3D m_coordinate3D;

private:

};

#endif