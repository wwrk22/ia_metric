#ifndef IA_COST_OF_GOODS_SOLD_H
#define IA_COST_OF_GOODS_SOLD_H

#include "metric.h"


namespace ia {

/**
 * Repesents the Cost of Goods Sold metric for a company.
 */
class CostOfGoodsSold : public Metric {

public:
	CostOfGoodsSold(int year, int value);
	~CostOfGoodsSold() override;
};

} // namespace ia
	//
#endif
