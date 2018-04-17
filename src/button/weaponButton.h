#pragma once
#ifndef WEAPONBUTTON_H
#define WEAPONBUTTON_H

#include <QWidget>

class WeaponButton : public QWidget
{
	Q_OBJECT
public:
	explicit WeaponButton(QWidget * _parent = nullptr);
	virtual ~WeaponButton();

private:
	struct WeaponButtonPrivate;
	WeaponButtonPrivate * data;
};

#endif // !WEAPONBUTTON_H
