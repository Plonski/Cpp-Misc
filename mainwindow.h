#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QString firstnum;
    double fnum;
    double snum;
    QString secondnum;
    double answer;
    QString a;
    bool pressed = false;

private slots:



    double on_pushButton_0_clicked();
    double on_pushButton_1_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_9_clicked();

    double on_pushButton_plus_clicked(double fnum);

    double on_pushButton_minus_clicked(double fnum);

    double on_pushButton_multiply_clicked(double fnum);

    double on_pushButton_divide_clicked(double fnum);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
