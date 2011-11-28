#ifndef FINDDIALOG_H
 #define FINDDIALOG_H

 #include <QWidget>

 class QLineEdit;
 class QPushButton;

 class FindDialog : public QWidget
 {
     Q_OBJECT

 public:
     FindDialog(QWidget *parent = 0);
     QString getFindText();

 public slots:
     void findClicked();

 private:
     QPushButton *findButton;
     QLineEdit *lineEdit;
     QString findText;
 };

 #endif
