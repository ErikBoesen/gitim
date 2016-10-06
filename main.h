#pragma once

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QGridLayout>


class MainWindow : public QWidget {

    public:
        MainWindow(QWidget *parent = 0);

    private slots:
        void Login();

    private:
        QLineEdit *textboxPath;
        QLineEdit *textboxURL;
        QPushButton *btnPull;
        QPushButton *btnCommit;
        QLineEdit *textboxCommit;
        QPushButton *btnPush;
};

class LoginWindow : public QWidget {

    public:
        LoginWindow(QWidget *parent = 0);

    private slots:
        void Login();

    private:
        QLineEdit *textboxUsername;
        QLineEdit *textboxPassword;
        QLabel *lblLogin;
};
