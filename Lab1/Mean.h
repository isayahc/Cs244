#ifndef MEAN_H
#define MEAN_H

#include "Archive.h"

namespace labI
{
	float Mean(float data[], int size)
	{
		int i;
		float mean;
		float mean2;
		for(i = 0; i < size; i++)
		{
			data[i] += mean;
		}
		mean2= mean/(size);


		return mean2;
	}
}

#endif
