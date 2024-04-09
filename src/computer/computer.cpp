#include <IA_Metric/computer.h>

void ia::Computer::computeGrowth(std::vector<std::unique_ptr<Metric>>& metrics) {
	// There has to be at least two consecutive metric values to compute a single growth.
	if (metrics.size() < 2) return;

	for (std::size_t i{ 1 }; i < metrics.size(); i++) {
		int value_diff{ metrics[i]->value_ - metrics[i - 1]->value_ };

		// Multiply the difference by 100 to prevent the division from giving us a zero.
		metrics[i]->annual_growth_ = (value_diff * 100) / metrics[i - 1]->value_;
	}
}
