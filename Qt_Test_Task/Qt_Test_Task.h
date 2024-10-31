#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Qt_Test_Task.h"

class Qt_Test_Task : public QMainWindow
{
    Q_OBJECT

public:
    Qt_Test_Task(QWidget* parent = nullptr);
    ~Qt_Test_Task();

private slots:
    void generateMatrix();  // слот для обработки нажатия кнопки

private:
    Ui::Qt_Test_TaskClass ui;

    std::vector<std::vector<int>> generateMatrix(int rows, int cols);
    std::vector<int> spiralOrder(const std::vector<std::vector<int>>& matrix);
};