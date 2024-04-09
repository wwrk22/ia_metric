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

	/**
	 * Create and store Revenue objects for each pair of year and revenue value
	 * given.
	 *
	 * @param  metrics  Pairs of year and revenue value.
	 */
	void initMetrics(const std::vector<std::pair<int, int>>& metrics) override;
};

} // namespace ia

#endif
