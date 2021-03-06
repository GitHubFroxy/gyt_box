#ifndef VERSIONPAGE_H
#define VERSIONPAGE_H

#include "custom_widget/pagewidget.h"

#include <QString>
#include <QTableView>
#include <QStandardItemModel>
#include <QHeaderView>

class VersionPage : public PageWidget
{
    Q_OBJECT
public:
    explicit VersionPage(QWidget *parent = 0);

public slots:

private:
    QTableView *tabView;
    QStandardItemModel *tabModel;

    void getVersionData(void);

};

#endif // VERSIONPAGE_H
