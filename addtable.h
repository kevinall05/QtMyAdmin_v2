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
    explicit AddTable(int theColumnNumber, QWidget *parent = nullptr);
    ~AddTable();

private:
    Ui::AddTable *ui;
    void setColumnNumber(int theColumnNumber);
    int columnNumber;
};

#endif // ADDTABLE_H
