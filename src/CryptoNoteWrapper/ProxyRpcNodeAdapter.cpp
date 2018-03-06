#include "ProxyRpcNodeAdapter.h"
#include "ProxyRpcNodeWorker.h"
#include "WalletGreenAdapter.h"

namespace WalletGui {

ProxyRpcNodeAdapter::ProxyRpcNodeAdapter(const CryptoNote::Currency& _currency, Logging::ILogger& _loggerManager, Logging::ILogger& _walletLogger,
  const QString& _nodeHost, quint16 _nodePort, QObject* _parent) : CommonNodeAdapter(_parent), m_currency(_currency),
  m_loggerManager(_loggerManager), m_walletLogger(_walletLogger), m_nodeHost(_nodeHost), m_nodePort(_nodePort) {
}

ProxyRpcNodeAdapter::~ProxyRpcNodeAdapter() {
}

INodeAdapter* ProxyRpcNodeAdapter::createWorker() const {
  return new ProxyRpcNodeWorker(m_currency, m_loggerManager, m_walletLogger, m_nodeHost, m_nodePort, nullptr);
}

}
