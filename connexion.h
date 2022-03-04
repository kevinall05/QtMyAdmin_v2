#ifndef CONNEXION_H
#define CONNEXION_H

#include <QDialog>

namespace Ui {
class Connexion;
}

class Connexion : public QDialog
{
    Q_OBJECT

public:
    explicit Connexion(QWidget *parent = nullptr);
    ~Connexion();

    void reconnexionLabelTitle();

private slots:
    void on_pushButton_clicked();

    void on_pushButtonCancel_clicked();

private:
    Ui::Connexion *ui;
};

#endif // CONNEXION_H
