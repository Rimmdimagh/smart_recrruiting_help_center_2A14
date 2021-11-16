#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "Matriel.h"
#include <QMainWindow>
#include "smtp.h"
#include<QtCharts>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
//les bouttons

    void on_pushButtonAjouter_clicked();
    void on_supp_clicked();

    void on_modifier_clicked();

    void on_recherche_clicked();

    void on_stat_clicked();


    void sendMail();
    void mailSent(QString);
    void on_sendMail_clicked();

private:
    Ui::MainWindow *ui;
     Matriel Mat;//pour pouvoir faire l appel a supp et modifier
};

#endif // MAINWINDOW_H