#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    bool ok;
    int operator_number;
    double first_number;
    double second_number;

private slots:
    void write_on_screen(QString recieved_txt);

    void on_pushButton_sub_clicked();

    void on_pushButton_multiply_clicked();

    void on_pushButton_divide_clicked();

    void on_pushButton_add_clicked();

     void on_pushButton_percentage_clicked();

    void on_pushButton_clean_clicked();

    void on_pushButton_CE_clicked();

    void on_pushButton_equal_clicked();

    void on_pushButton_dot_clicked();

    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_0_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();  



private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
