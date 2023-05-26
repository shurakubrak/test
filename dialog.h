#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QPushButton>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
  Q_OBJECT

public:
  explicit Dialog(QWidget *parent = nullptr);
  ~Dialog();

private:
  Ui::Dialog *ui;
  QPushButton *button_;

private slots:
  void onButtonClick();
};

#endif // DIALOG_H
