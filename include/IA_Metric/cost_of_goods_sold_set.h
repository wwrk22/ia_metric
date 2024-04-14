#ifndef IA_COST_OF_GOODS_SOLD_SET_H
#define IA_COST_OF_GOODS_SOLD_SET_H

#include "metric_set.h"
#include "cost_of_goods_sold.h"

#include <memory>


namespace ia {

/**
 * Wrapper for a set of CostOfGoodsSold objects with API for performing bulk-data
 * operations on cost of goods sold data.
 */
class CostOfGoodsSoldSet : public MetricSet {

public:
	CostOfGoodsSoldSet() = default;
	~CostOfGoodsSoldSet() override = default;

private:
	/**
	 * Implements the factory method for creating a CostOfGoodsSold object that can
	 * be used in place for a unique pointer to the base Metric class.
	 *
	 * @param  year  The year of the recorded cost of goods sold.
	 * @param  value  The value in millions (e.g. 123,123,123 would be 123).
	 *
	 * @return  A unique pointer of Metric class that points to an instance of
	 * 					CostOfGoodsSold class.
	 */
	std::unique_ptr<Metric> createMetric(int year, int value) override;

};

}

#endif
