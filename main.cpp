#include <QApplication>
#include "manager/model/mainmodel.h"
#include "manager/view/mainwindow.h"
#include "manager/controller/maincontroller.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    MainWindow mainWindow;
    MainModel mainModel;
    MainController mainController(&mainWindow, &mainModel);

    mainWindow.show();

    return app.exec();
}
