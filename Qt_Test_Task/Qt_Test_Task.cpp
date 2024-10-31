#include "Qt_Test_Task.h"
#include <QMessageBox>  // ��� ����������� ��������� �� �������
#include <vector>
#include <QString>

Qt_Test_Task::Qt_Test_Task(QWidget* parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    // ���������� ������ ������� ������ � �����
    connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(generateMatrix()));
}

Qt_Test_Task::~Qt_Test_Task()
{}

void Qt_Test_Task::generateMatrix()
{
    // �������� ������� �������
    bool ok1, ok2;
    int rows = ui.lineEdit->text().toInt(&ok1);
    int cols = ui.lineEdit_2->text().toInt(&ok2);

    if (!ok1 || !ok2 || rows <= 0 || cols <= 0) {
        QMessageBox::warning(this, "Error", "Enter the correct dimensions of the matrix!");
        return;
    }

    // ������� �������
    std::vector<std::vector<int>> matrix = generateMatrix(rows, cols);

    // �������� ������������������ ����� ��� ���������� ������
    std::vector<int> spiral = spiralOrder(matrix);

    // ������� ���������
    QString result;
    for (int num : spiral) {
        result += QString::number(num) + " ";
    }
    ui.textEdit->setText(result);
}

// ������� ��� ��������� �������
std::vector<std::vector<int>> Qt_Test_Task::generateMatrix(int rows, int cols)
{
    std::vector<std::vector<int>> matrix(rows, std::vector<int>(cols));
    int num = 1;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = num++;
        }
    }
    return matrix;
}

// ������� ��� ������ ������� �� �������
std::vector<int> Qt_Test_Task::spiralOrder(const std::vector<std::vector<int>>& matrix)
{
    std::vector<int> result;
    int rows = matrix.size();
    int cols = matrix[0].size();
    int left = 0, right = cols - 1, top = 0, bottom = rows - 1;

    while (left <= right && top <= bottom) {
        // ������ �� ������� ������
        for (int i = left; i <= right; ++i) {
            result.push_back(matrix[top][i]);
        }
        ++top;

        // ������ �� ��������������
        for (int i = top; i <= bottom; ++i) {
            result.push_back(matrix[i][right]);
        }
        --right;

        if (top <= bottom) {
            // ������ �� ������ ������
            for (int i = right; i >= left; --i) {
                result.push_back(matrix[bottom][i]);
            }
            --bottom;
        }

        if (left <= right) {
            // ������ �� ������ �������
            for (int i = bottom; i >= top; --i) {
                result.push_back(matrix[i][left]);
            }
            ++left;
        }
    }

    return result;
}