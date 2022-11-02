#include <iostream>

class Coordinate{
	private:
		int x;
		int y;
	public:
		Coordinate(int x, int y);
		Coordinate();
		int getX();
		int getY();
		void setX(int x);
		void setY(int y);
		int operator * (Coordinate);
};

