#ifndef FIGUREUTILS_H
#define FIGUREUTILS_H
#include<qcustomplot.h>
#include<QVector>
#include <QListWidgetItem>

void plotFigure(QCustomPlot*,bool,QListWidget*,QString);
void addGraph(QCustomPlot*figure,QString title);
void refreshFigure(QVector<float> xvec, QVector<float> yvec);

#endif // FIGUREUTILS_H
