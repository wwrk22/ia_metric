#ifndef IA_METRIC_SET_H
#define IA_METRIC_SET_H

#include "metric.h"

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
	virtual void initMetrics(const std::vector<std::pair<int, int>>& metrics) = 0;

protected:
	std::vector<std::unique_ptr<Metric>> metrics_;

};

} // namespace ia

#endif
