#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QGridLayout>
#include "dialog.h"

MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
  , ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  button_ = new QPushButton("Диалог");
  QGridLayout *layout = new QGridLayout;
  layout->setAlignment(Qt::AlignCenter);
  layout->addWidget(button_, 0, 0, 1, 1);
  ui->centralwidget->setLayout(layout);

  connect(button_, SIGNAL(clicked()), this, SLOT(onButtonClick()));
}
/*******************************************/

MainWindow::~MainWindow()
{
  delete ui;
  delete button_;
}
/******************************************/

void MainWindow::onButtonClick()
{
  Dialog *dialog = new Dialog();
  dialog->setAttribute(Qt::WA_DeleteOnClose, false);
  dialog->exec();
  close();
}
