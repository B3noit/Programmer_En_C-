#pragma once
class CPoint
{
private://Accessible que dans la classe elle même
	//Données membres de la classe
	int n_X;
	int n_Y;

protected://Accessible dans la classe et les enfants de la classe

public://Accessible partout, dans et à l'extérieur de la classe

	//Prototypes ou déclarations 
	//Les gets
	int getX();
	int getY();

	//Les sets
	void setX(int n_X);
	void setY(int n_Y);

	//Constructeur
	void Cpoint();



};

