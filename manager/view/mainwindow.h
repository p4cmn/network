#pragma once

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

private:
    Ui::MainWindow *ui;

signals:
    void createTransmitterClicked();
    void createReceiverClicked();
    void closeAllClicked();

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

};

