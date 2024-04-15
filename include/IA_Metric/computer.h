#ifndef IA_COMPUTER_H
#define IA_COMPUTER_H

#include "metric.h"

#include <memory>
#include <vector>


namespace ia {

/**
 * Set of basic computations for analysis of metrics using objects of derived
 * classes of the Metric class.
 */
class Computer {

public:

	/**
	 * Computes and sets the annual growth for instances of a derived class of the
	 * Metric class.
	 *
	 * @param  metrics  Pointers to instances of a derived class of the Metric
	 * 									class.
	 */
	static void computeSetGrowth(std::vector<std::unique_ptr<Metric>>& metrics);

private:

	static int computeGrowth(int prev, int curr);

};

} // namespace ia

#endif
