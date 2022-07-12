#include "mainwindow.h"

#include <QMessageBox>
#include <sstream>

#include "./grammar/CalculatorHelperS.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    auto action = new QAction(this);
    action->setShortcuts({tr("Return"), tr("Enter")});
    this->addAction(action);
    QPushButton *button = ui->buttonEquals;
    connect(action, &QAction::triggered, [button]() { button->animateClick(); });
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_buttonZero_clicked() {
    ui->calculatorDisplay->moveCursor(QTextCursor::End);
    ui->calculatorDisplay->insertPlainText("0");
    ui->calculatorDisplay->moveCursor(QTextCursor::End);
}

void MainWindow::on_buttonOne_clicked() {
    ui->calculatorDisplay->moveCursor(QTextCursor::End);
    ui->calculatorDisplay->insertPlainText("1");
    ui->calculatorDisplay->moveCursor(QTextCursor::End);
}

void MainWindow::on_buttonTwo_clicked() {
    ui->calculatorDisplay->moveCursor(QTextCursor::End);
    ui->calculatorDisplay->insertPlainText("2");
    ui->calculatorDisplay->moveCursor(QTextCursor::End);
}

void MainWindow::on_buttonThree_clicked() {
    ui->calculatorDisplay->moveCursor(QTextCursor::End);
    ui->calculatorDisplay->insertPlainText("3");
    ui->calculatorDisplay->moveCursor(QTextCursor::End);
}

void MainWindow::on_buttonFour_clicked() {
    ui->calculatorDisplay->moveCursor(QTextCursor::End);
    ui->calculatorDisplay->insertPlainText("4");
    ui->calculatorDisplay->moveCursor(QTextCursor::End);
}

void MainWindow::on_buttonFive_clicked() {
    ui->calculatorDisplay->moveCursor(QTextCursor::End);
    ui->calculatorDisplay->insertPlainText("5");
    ui->calculatorDisplay->moveCursor(QTextCursor::End);
}

void MainWindow::on_buttonSix_clicked() {
    ui->calculatorDisplay->moveCursor(QTextCursor::End);
    ui->calculatorDisplay->insertPlainText("6");
    ui->calculatorDisplay->moveCursor(QTextCursor::End);
}

void MainWindow::on_buttonSeven_clicked() {
    ui->calculatorDisplay->moveCursor(QTextCursor::End);
    ui->calculatorDisplay->insertPlainText("7");
    ui->calculatorDisplay->moveCursor(QTextCursor::End);
}

void MainWindow::on_buttonEight_clicked() {
    ui->calculatorDisplay->moveCursor(QTextCursor::End);
    ui->calculatorDisplay->insertPlainText("8");
    ui->calculatorDisplay->moveCursor(QTextCursor::End);
}

void MainWindow::on_buttonNine_clicked() {
    ui->calculatorDisplay->moveCursor(QTextCursor::End);
    ui->calculatorDisplay->insertPlainText("9");
    ui->calculatorDisplay->moveCursor(QTextCursor::End);
}

void MainWindow::on_buttonAdd_clicked() {
    ui->calculatorDisplay->moveCursor(QTextCursor::End);
    ui->calculatorDisplay->insertPlainText("+");
    ui->calculatorDisplay->moveCursor(QTextCursor::End);
}

void MainWindow::on_buttonMinus_clicked() {
    ui->calculatorDisplay->moveCursor(QTextCursor::End);
    ui->calculatorDisplay->insertPlainText("-");
    ui->calculatorDisplay->moveCursor(QTextCursor::End);
}

void MainWindow::on_buttonDivide_clicked() {
    ui->calculatorDisplay->moveCursor(QTextCursor::End);
    ui->calculatorDisplay->insertPlainText("/");
    ui->calculatorDisplay->moveCursor(QTextCursor::End);
}

void MainWindow::on_buttonMultiply_clicked() {
    ui->calculatorDisplay->moveCursor(QTextCursor::End);
    ui->calculatorDisplay->insertPlainText("*");
    ui->calculatorDisplay->moveCursor(QTextCursor::End);
}

void MainWindow::on_buttonPower_clicked() {
    ui->calculatorDisplay->moveCursor(QTextCursor::End);
    ui->calculatorDisplay->insertPlainText("^");
    ui->calculatorDisplay->moveCursor(QTextCursor::End);
}

void MainWindow::on_buttonLeftBracket_clicked() {
    ui->calculatorDisplay->moveCursor(QTextCursor::End);
    ui->calculatorDisplay->insertPlainText("(");
    ui->calculatorDisplay->moveCursor(QTextCursor::End);
}

void MainWindow::on_buttonRightBracket_clicked() {
    ui->calculatorDisplay->moveCursor(QTextCursor::End);
    ui->calculatorDisplay->insertPlainText(")");
    ui->calculatorDisplay->moveCursor(QTextCursor::End);
}

void MainWindow::on_ButtonDecimal_clicked() {
    ui->calculatorDisplay->moveCursor(QTextCursor::End);
    ui->calculatorDisplay->insertPlainText(".");
    ui->calculatorDisplay->moveCursor(QTextCursor::End);
}

void MainWindow::on_buttonBackspace_clicked() {
    ui->calculatorDisplay->textCursor().clearSelection();
    ui->calculatorDisplay->textCursor().deletePreviousChar();
}

void MainWindow::on_buttonEquals_clicked() {
    std::stringstream ss;
    QString equation = ui->calculatorDisplay->toPlainText();
    ss << equation.toStdString();
    QString output = QString::fromStdString(CalculatorHelperS::calculate(ss));
    ui->calculatorDisplay->clear();
    ui->calculatorDisplay->moveCursor(QTextCursor::End);
    ui->calculatorDisplay->insertPlainText(output);
}

void MainWindow::on_buttonClear_clicked() {
    ui->calculatorDisplay->clear();
}

void MainWindow::on_actionAbout_triggered() {
    QMessageBox::about(this, "About", "A simple calculator app using Qt and ANTLR4");
}

void MainWindow::on_actionDark_triggered() {
    QFile styleSheetFile(":/stylesheets/Darkeum.qss");
    styleSheetFile.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(styleSheetFile.readAll());
    this->setStyleSheet(styleSheet);
}

void MainWindow::on_actionBlue_triggered() {
    QFile styleSheetFile(":/stylesheets/Irrorater.qss");
    styleSheetFile.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(styleSheetFile.readAll());
    this->setStyleSheet(styleSheet);
}
