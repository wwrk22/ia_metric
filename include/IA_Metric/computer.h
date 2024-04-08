#ifndef IA_COMPUTER_H
#define IA_COMPUTER_H

#include "metric.h"

#include <memory>
#include <vector>


namespace ia {

class Computer {

public:
	static void computeGrowth(std::vector<std::shared_ptr<Metric>>& metrics);

};

} // namespace ia

#endif
