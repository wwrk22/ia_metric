#include <IA_Metric/computer.h>

using namespace ia;

void Computer::computeSetGrowth(std::vector<std::unique_ptr<Metric>>& metrics) {
	// There has to be at least two consecutive metric values to compute a single growth.
	if (metrics.size() < 2) return;

	for (std::size_t i{ 1 }; i < metrics.size(); i++) {
		metrics[i]->annual_growth_ = computeGrowth(metrics[i - 1]->value_, metrics[i]->value_);
	}
}

int Computer::computeGrowth(int prev, int curr) {
	// Difference between current year's and previous year's metric value.
	int diff{ curr - prev };
	// Multiply the difference by 100 to prevent the division from giving us a zero.
	return (diff * 100) / prev;
}
