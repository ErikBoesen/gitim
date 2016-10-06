#include "main.h"

LoginWindow::Window(QWidget *parent) : QWidget(parent) {

    QLabel *lblUsername = new QLabel("Username:", this);
    QLabel *lblPassword = new QLabel("Password:", this);
    textboxUsername = new QLineEdit();
    // TODO: Hide password field contents.
    textboxPassword = new QLineEdit();
    textboxUsername->setMinimumWidth(150);
    textboxPassword->setMinimumWidth(150);
    QPushButton *btnLogin = new QPushButton("Login", this);

    QGridLayout *layoutLogin = new QGridLayout(this);
    layoutLogin->addWidget(lblUsername, 0, 0);
    layoutLogin->addWidget(textboxUsername, 0, 1);
    layoutLogin->addWidget(lblPassword, 1, 0);
    layoutLogin->addWidget(textboxPassword, 1, 1);
    layoutLogin->addWidget(btnLogin, 2, 1);

    setLayout(layoutLogin);

    QGridLayout *layoutMain = new QGridLayout(this);

    setLayout(layoutMain);


    connect(btnLogin, &QPushButton::clicked, this, &LoginWindow::Login);
}

void LoginWindow::Login() {
    QString username = textboxUsername->text();
    QString password = textboxPassword->text();
}
