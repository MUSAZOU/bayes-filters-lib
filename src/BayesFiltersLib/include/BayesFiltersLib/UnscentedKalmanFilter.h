#ifndef UNSCENTEDKALMANFILTER_H
#define UNSCENTEDKALMANFILTER_H

#include "FilteringAlgorithm.h"

namespace bfl
{
    class UnscentedKalmanFilter;
}


class bfl::UnscentedKalmanFilter: public FilteringAlgorithm {
public:
    UnscentedKalmanFilter();

    ~UnscentedKalmanFilter() noexcept override;

    void runFilter() override;

    void getResult() override;
};

#endif /* UNSCENTEDKALMANFILTER_H */
