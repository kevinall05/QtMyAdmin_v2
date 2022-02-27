#ifndef ADDTABLE_H
#define ADDTABLE_H

#include <QDialog>

namespace Ui {
class AddTable;
}

class AddTable : public QDialog
{
    Q_OBJECT

public:
    explicit AddTable(QWidget *parent = nullptr);
    ~AddTable();

private:
    Ui::AddTable *ui;
};

#endif // ADDTABLE_H
