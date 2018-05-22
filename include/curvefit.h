#ifndef CURVEFIT_H
#define CURVEFIT_H

#include <QVector>

class Bspline3;

class CurveFit
{
public:
    CurveFit(double x_min, double x_max, int n_intervals, QVector <double> &x0, QVector <double> &y0);
    ~CurveFit();
    Bspline3 *GetSpline();

private:
    Bspline3 *bs;
};

#endif // CURVEFIT_H
