/*
 *  Copyright (C) 2010  Alexandre Courbot
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef ORDEREDRBTREETESTS_H
#define ORDEREDRBTREETESTS_H

#include <QObject>
#include <QTest>

#include "core/OrderedRBNode.h"

class OrderedRBTreeTests : public QObject
{
Q_OBJECT
private:

	OrderedRBTree<OrderedRBMemTree<QString > > tree, treeBegin, treeEnd, treeRandom;
	QList<int> treeRandomPos;

private slots:
	void initTestCase();
	void cleanupTestCase();

	void testNode();
	void massInsertEnd();
	void massInsertBegin();
	void massInsertRandom();

	void massRemoveEnd();
	void massRemoveBegin();
	void massRemoveRandom();

	void deepCheckValidity();
};

#endif

