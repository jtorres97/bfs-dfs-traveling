#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    this->m_windowWidth = 1024;
    this->m_windowHeight = 700;

    this->InitUI();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::InitUI()
{
    // Load layout from form
    ui->setupUi(this);

    // Set the size of the window
    this->setMinimumHeight(m_windowHeight);
    this->setMinimumWidth(m_windowWidth);

    // Set the size of the tab widget within the window
    ui->tabWidget->setMinimumHeight(m_windowHeight - 100);
    ui->tabWidget->setMinimumWidth(m_windowWidth - 100);

    // Set Mouse tracking
    this->setMouseTracking(true);
    ui->tabWidget->setMouseTracking(true);

    // Initialize the grid
    m_grid = new Grid(ui->tabWidget->widget(0));
}