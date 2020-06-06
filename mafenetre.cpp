#include "mafenetre.h"
#include <QMessageBox>

MaFenetre::MaFenetre(): QWidget()
{
    setFixedSize(300, 150);
    m_dialog = new QPushButton("Open Dialog box", this);
    m_dialog->move(10, 50);

    QObject::connect(m_dialog, SIGNAL(clicked()), this, SLOT(openDialog()));

}
void MaFenetre::openDialog()
{
    int response = QMessageBox::critical(this, "Title of window", "Morning and welcome to <strong>you!</strong>", QMessageBox::Yes|QMessageBox::No);
    //critical, information, warning

    if(response == QMessageBox::Yes)
    {
        QMessageBox::information(this, "Welcome", "You clicked on Yes. Thank you.");
    }
    else if(response == QMessageBox::No)
    {
        QMessageBox::critical(this, "Warning", "You clicked on No, You are going out.");
    }
}
