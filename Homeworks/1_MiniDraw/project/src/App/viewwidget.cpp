#include "viewwidget.h"

ViewWidget::ViewWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	draw_status_ = false;
}

ViewWidget::~ViewWidget()
{

}

void ViewWidget::setLine()
{
	type_ = shape::kLine;
}

void ViewWidget::setRect()
{
	type_ = shape::kRect;
}

void ViewWidget::mousePressEvent(QMouseEvent *event)
			shape_ = new Line();
			break;
			break;
		
		case shape::kRect:
			shape_ = new Rect();
			break;
		shape_->Draw(painter);
	}