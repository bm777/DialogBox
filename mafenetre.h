#ifndef MAFENETRE_H
#define MAFENETRE_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLCDNumber>
#include <QSlider>
#include <QMessageBox>
#include <QProgressBar>
//#include <QOBJET>

class MaFenetre: public QWidget //On herite de wqidget
{
    Q_OBJECT

    public:
        MaFenetre();

    public slots:
        //void changeWidth(int width);
        void openDialog();

    signals:
        //void changeH();


    private:
        QPushButton *m_dialog;
};

#endif // MAFENETRE_H
