#include "mafenetre.h"
#include <QMessageBox>
#include <QInputDialog>
#include <QFileDialog>

MaFenetre::MaFenetre(): QWidget()
{
    setFixedSize(300, 150);
    m_dialog = new QPushButton("Open Dialog box", this);
    m_dialog->move(10, 50);

    QObject::connect(m_dialog, SIGNAL(clicked()), this, SLOT(openDialog()));

}
void MaFenetre::openDialog()
{
    //int response = QMessageBox::critical(this, "Title of window", "Morning and welcome to <strong>you!</strong>", QMessageBox::Yes|QMessageBox::No);
    //critical, information, warning
    //bool ok = false;
    //QString pseudo = QInputDialog::getText(this, "Pseudo", "What is your name?", QLineEdit::Normal, QString(), &ok);
    QString file = QFileDialog::getSaveFileName(this, "Save a file" , QString(), "Pitures(*.png *.gif *.jpg *.jpeg)");
    QMessageBox::information(this, "You selected:  ", file);
}


