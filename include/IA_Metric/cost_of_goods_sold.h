#ifndef IA_COST_OF_GOODS_SOLD_H
#define IA_COST_OF_GOODS_SOLD_H

#include "metric.h"


namespace ia {

class CostOfGoodsSold : public Metric {

public:
	// As of now, this class simply requires the values be provided by the caller
	// of this constructor. There is no computation done by this class for `value`
	// or `annual_growth`.
	CostOfGoodsSold(int year, int value, int annual_growth);
	~CostOfGoodsSold() override;
};

} // namespace ia
	//
#endif
