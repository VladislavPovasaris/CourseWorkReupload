#include "FirearmCompare.h"

bool FirearmCompare::operator()(FirearmBase& temp, FirearmBase& temp1)
{
	if (temp > temp1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
