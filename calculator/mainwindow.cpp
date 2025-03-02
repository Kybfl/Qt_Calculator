#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::write_on_screen(QString recieved_txt)
{
    QString screen_txt = ui->screen->text();
    if(ui->screen->text() == "0" ){
        ui->screen->setText(recieved_txt);
    } else {
        screen_txt += recieved_txt;
        ui->screen->setText(screen_txt);
    }
}


void MainWindow::on_pushButton_clean_clicked()
{
    ui->operations_screen->setText("None");
    ui->screen->setText("0");
}

void MainWindow::on_pushButton_CE_clicked()
{
    ui->screen->setText("0");
}


void MainWindow::on_pushButton_equal_clicked()
{
    bool ok;
    double result;
    QString operations_screen_txt = ui->operations_screen->text();
    second_number = ui->screen->text().toInt(&ok);
    ui->operations_screen->setText(operations_screen_txt + " " + QString::number(second_number));

    switch (operator_number){
    case 1:
        result = first_number + second_number;
        ui->screen->setText( QString::number(result));
        break;

    case 2:
        result = first_number - second_number;
        ui->screen->setText( QString::number(result));
        break;

    case 3:
        result = first_number * second_number;
        ui->screen->setText( QString::number(result));
        break;

    case 4:
        if (second_number == 0){
            ui->screen->setText("HATA");
            ui->operations_screen->setText("HATA");

        } else {
            result = first_number / second_number;
            ui->screen->setText( QString::number(result));
            break;
        }

    case 5:
        result = (first_number * second_number)/100 ;
        ui->screen->setText( QString::number(result));
        break;
    }


}

void MainWindow::on_pushButton_add_clicked()
{
    first_number = ui->screen->text().toDouble(&ok);
    ui->screen->setText("0");
    ui->operations_screen->setText(QString::number(first_number) + " +");
    operator_number = 1 ;
}

void MainWindow::on_pushButton_sub_clicked()
{
    first_number = ui->screen->text().toDouble(&ok);
    ui->screen->setText("0");
    ui->operations_screen->setText(QString::number(first_number) + " -");
    operator_number = 2 ;
}


void MainWindow::on_pushButton_multiply_clicked()
{
    first_number = ui->screen->text().toDouble(&ok);
    ui->screen->setText("0");
    ui->operations_screen->setText(QString::number(first_number) + " x");
    operator_number = 3 ;
}


void MainWindow::on_pushButton_divide_clicked()
{
    first_number = ui->screen->text().toDouble(&ok);
    ui->screen->setText("0");
    ui->operations_screen->setText(QString::number(first_number) + " /");
    operator_number = 4 ;
}

void MainWindow::on_pushButton_percentage_clicked()
{
    first_number = ui->screen->text().toDouble(&ok);
    ui->screen->setText("0");
    ui->operations_screen->setText(QString::number(first_number) + " %");
    operator_number = 5 ;
}


void MainWindow::on_pushButton_0_clicked()
{
    write_on_screen(ui->pushButton_0->text());
}


void MainWindow::on_pushButton_1_clicked()
{
    write_on_screen(ui->pushButton_1->text());
}


void MainWindow::on_pushButton_2_clicked()
{
    write_on_screen(ui->pushButton_2->text());
}


void MainWindow::on_pushButton_3_clicked()
{
    write_on_screen(ui->pushButton_3->text());
}


void MainWindow::on_pushButton_4_clicked()
{
    write_on_screen(ui->pushButton_4->text());
}


void MainWindow::on_pushButton_5_clicked()
{
    write_on_screen(ui->pushButton_5->text());
}


void MainWindow::on_pushButton_6_clicked()
{
    write_on_screen(ui->pushButton_6->text());
}


void MainWindow::on_pushButton_7_clicked()
{
    write_on_screen(ui->pushButton_7->text());
}


void MainWindow::on_pushButton_8_clicked()
{
    write_on_screen(ui->pushButton_8->text());
}


void MainWindow::on_pushButton_9_clicked()
{
    write_on_screen(ui->pushButton_9->text());
}

void MainWindow::on_pushButton_dot_clicked()
{
    write_on_screen(ui->pushButton_dot->text());
}


