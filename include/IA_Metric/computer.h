#ifndef IA_COMPUTER_H
#define IA_COMPUTER_H

#include "metric.h"

#include <memory>
#include <vector>


namespace ia {

class Computer {

public:

	/**
	 * @brief Computes and sets the annual growth for instances of a derived class
	 * 				of the Metric class.
	 *
	 * @param metrics pointers to objects of a derived class of the Metric class
	 */
	static void computeGrowth(std::vector<Metric*>& metrics);

};

} // namespace ia

#endif
