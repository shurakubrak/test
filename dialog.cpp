#include "dialog.h"
#include "ui_dialog.h"

#include <QGridLayout>

Dialog::Dialog(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::Dialog)
{
  ui->setupUi(this);
  this->setWindowTitle("Диалог");
  button_ = new QPushButton("Выход");
  QGridLayout *layout = new QGridLayout;
  layout->setAlignment(Qt::AlignCenter);
  layout->addWidget(button_, 0, 0, 1, 1);
  this->setLayout(layout);

  connect(button_, SIGNAL(clicked()), this, SLOT(onButtonClick()));
}
/*******************************************************/

Dialog::~Dialog()
{
  delete ui;
}
/*******************************************************/

void Dialog::onButtonClick()
{
  close();
}
