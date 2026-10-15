
#ifndef OPERATOROVERLOADING_H
#define OPERATOROVERLOADING_H

class Operatoroverloading
{
	int mau;
	int tu;
	public:
		Operatoroverloading();
		void nhap();
		Operatoroverloading operator+(Operatoroverloading &);
		void xuat();
		~Operatoroverloading();
	protected:
};

#endif
