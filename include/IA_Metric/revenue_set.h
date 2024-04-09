#ifndef IA_REVENUE_SET_H
#define IA_REVENUE_SET_H

#include "metric_set.h"
#include "revenue.h"

#include <utility>

namespace ia {

/**
 * Wrapper for a set of Revenue objects with API for performing bulk-data
 * operations on revenue data.
 */
class RevenueSet : public MetricSet {

public:
	RevenueSet() = default;
	~RevenueSet() override = default;

private:
	/**
	 * Implements the factory method for creating a Revenue object that can be used
	 * in place for a unique pointer to the base Metric class.
	 *
	 * @param  year_and_value  A pair of year and value representing revenue data.
	 *
	 * @return  A unique pointer of Metric class that points to an instance of
	 * 					Revenue class.
	 */
	std::unique_ptr<Metric> createMetric(const std::pair<int, int>& year_and_value) override;

};

} // namespace ia

#endif
