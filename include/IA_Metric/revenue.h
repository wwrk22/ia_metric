#ifndef IA_REVENUE_H
#define IA_REVENUE_H

#include "metric.h"


namespace ia {

/**
 * Repesents the Revenue metric for a company.
 */
class Revenue : public Metric {

public:
	Revenue(int year, int value);
	~Revenue() override;
};

} // namespace ia

#endif
