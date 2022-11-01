#pragma once
#include "Functii.h"


class grafinfo
{
private:
	double lx = 0, px = 0, shag = 0;

public:
	double get_lx()
	{
		return lx;
	}

	void set_lx(double a)
	{
		lx=a;
	}

	double get_px()
	{
		return px;
	}

	void set_px(double a)
	{
		px = a;
	}

	double get_shag()
	{
		return shag;
	}

	void set_shag(double a)
	{
		shag = a;
	}
};

int findx(string s);

