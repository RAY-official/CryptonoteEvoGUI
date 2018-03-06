#pragma once

#include <QSortFilterProxyModel>

#include "IOptimizationManager.h"

namespace WalletGui {

class IOptimizationManager;

class FusionTransactionsFilterModel : public QSortFilterProxyModel {
  Q_OBJECT
  Q_DISABLE_COPY(FusionTransactionsFilterModel)

public:
  FusionTransactionsFilterModel(QAbstractItemModel* _sourceModel, IOptimizationManager* _optimizationManager, QObject* _parent);
  ~FusionTransactionsFilterModel();

protected:
  bool filterAcceptsRow(int _sourceRow, const QModelIndex& _sourceParent) const override;

private:
  IOptimizationManager* m_optimizationManager;
};

}
