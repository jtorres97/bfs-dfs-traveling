#pragma once

#include <QMainWindow>

#include "Graph.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
	void keyPressEvent(QKeyEvent *ke) override;
protected:
	// Initializes ui for window
    void InitUI();
private:
	// UI entity
    Ui::MainWindow *ui;

	// Pointer to the grid GUI item
    Graph *m_grid;

	// Window height, width
    int m_windowHeight;
    int m_windowWidth;
};

