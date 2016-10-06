#include "main.h"

MainWindow::Window(QWidget *parent) : QWidget(parent) {

}

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);

    MainWindow window;

    window.setWindowTitle("gitim");
    window.resize(200, 50);
    window.show();

    return app.exec();
}
