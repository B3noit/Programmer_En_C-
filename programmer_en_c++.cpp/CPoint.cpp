#include "CPoint.h"
#include <iostream>

int CPoint::getX()
{
	return n_X;
}

int CPoint::getY()
{
	return n_Y;
}

void CPoint::setY(int n_Y)
{
	this->n_Y = n_Y;
}

void CPoint::setX(int n_X)
{
	this->n_X = n_X;
}
