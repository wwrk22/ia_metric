#include <IA_Metric/computer.h>

void ia::Computer::computeGrowth(std::vector<Metric*>& metrics) {
	// There has to be at least two consecutive metric values to compute a single growth.
	if (metrics.size() < 2) return;

	for (std::size_t i{ 1 }; i < metrics.size(); i++) {
		Metric* curr_year_metric{ metrics[i] };
		Metric* prev_year_metric{ metrics[i - 1] };
		int value_diff{ curr_year_metric->value_ - prev_year_metric->value_ };

		// Multiply the difference by 100 to prevent the division from giving us a zero.
		curr_year_metric->annual_growth_ = (value_diff * 100) / prev_year_metric->value_;
	}
}
