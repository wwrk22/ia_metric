#ifndef IA_METRIC_SET_H
#define IA_METRIC_SET_H

#include "computer.h"
#include "metric.h"

#include <cmath>
#include <memory>
#include <utility>
#include <vector>


namespace ia {

/**
 * Wrapper for a set of Metric objects with API for performing bulk-data
 * operations on the metric values.
 */
class MetricSet {

public:
	MetricSet() = default;
	virtual ~MetricSet() = default;

	/**
	 * Create instances of a derived class of Metric to store within this
	 * MetricSet.
	 *
	 * @param  metrics  Pairs of the year and value of a metric type.
	 */
	void initMetrics(const std::vector<std::pair<int, int>>& metrics);

	/**
	 * Compute the average of the annual growth values for all metric values in
	 * this metric set.
	 *
	 * @return  The average annual growth of this metric set.
	 */
	int avgAnnualGrowth();

	std::vector<std::unique_ptr<Metric>> metrics_;

protected:
	/**
	 * Factory method for derived classes to implement by returning a unique
	 * pointer to an instace of a derived class of the Metric class.
	 *
	 * @param  year_and_value  A pair of year and value of a metric type.
	 *
	 * @return  A unique pointer to an instance of a derived class of the Metric
	 * 					class.
	 */
	virtual std::unique_ptr<Metric> createMetric(const std::pair<int, int>& year_and_value) = 0;

};

} // namespace ia

#endif
