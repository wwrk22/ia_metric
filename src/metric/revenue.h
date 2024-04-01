#ifndef IA_REVENUE_H
#define IA_REVENUE_H

#include "metric.h"


class Revenue : public Metric {

public:
	Revenue(int year, int value, int annual_growth);
	~Revenue() override;
};

#endif
