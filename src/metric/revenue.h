#ifndef IA_REVENUE_H
#define IA_REVENUE_H

#include "metric.h"


class Revenue : public Metric {

public:
	// As of now, this class simply requires the values be provided by the caller
	// of this constructor. There is no computation done by this class for value
	// or annual_growth.
	Revenue(int year, int value, int annual_growth);
	~Revenue() override;
};

#endif
