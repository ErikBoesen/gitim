#pragma once

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QPixmap>
#include <QIcon>
#include <QLineEdit>
#include <QComboBox>
#include <QLabel>
#include <QGridLayout>
#include <cmath>

class Window : public QWidget {

    public:
        Window(QWidget *parent = 0);

    private slots:
        void Login();

    private:
        QLineEdit *textboxUsername;
        QLineEdit *textboxPassword;
        QLabel *lblLogin;
};
