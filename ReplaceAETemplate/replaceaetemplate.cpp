#include "replaceaetemplate.h"

ReplaceAETemplate::ReplaceAETemplate(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	setWindowTitle(QStringLiteral("ģ�������滻����v1.0"));
	setWindowIcon(QIcon(":/images/logo"));
	setFixedHeight(400);
	setFixedWidth(600);
}

ReplaceAETemplate::~ReplaceAETemplate()
{

}
