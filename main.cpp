#include "main.h"

Window::Window(QWidget *parent) : QWidget(parent) {

    QLabel *lblUsername = new QLabel("Username:", this);
    QLabel *lblPassword = new QLabel("Password:", this);
    textboxUsername = new QLineEdit();
    // TODO: Hide password field contents.
    textboxPassword = new QLineEdit();
    textboxUsername->setMinimumWidth(150);
    textboxPassword->setMinimumWidth(150);
    QPushButton *btnLogin = new QPushButton("Calculate Area", this);
    lblLogin = new QLabel(this);

    QGridLayout *grid = new QGridLayout(this);
    grid->addWidget(lblUsername, 0, 0);
    grid->addWidget(textboxUsername, 0, 1);
    grid->addWidget(lblPassword, 1, 0);
    grid->addWidget(textboxPassword, 1, 1);
    grid->addWidget(btnLogin, 0, 4);
    grid->addWidget(lblLogin, 0, 5);

    setLayout(grid);

    connect(btnLogin, &QPushButton::clicked, this, &Window::Login);
}

void Window::Login() {

    string username = textboxUsername->text().toDouble();
    string password = textboxPassword->text().toDouble();
}

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);

    Window window;

    window.setWindowTitle("Heron's Formula Calculator");
    window.resize(200, 50);
    window.show();

    return app.exec();
}
