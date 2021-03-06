#include "robomongo/core/events/MongoEventsInfo.h"

namespace Robomongo
{
    IndexInfo::IndexInfo(
        const MongoCollectionInfo &collection, const std::string &name, const std::string &keys,
        bool isUnique, bool isBackGround, bool isSparce, int expireAfter,
        const std::string &defaultLanguage, const std::string &languageOverride, const std::string &textWeights) :
        _name(name),
        _collection(collection),
        _keys(keys),
        _unique(isUnique),
        _backGround(isBackGround),
        _sparse(isSparce),
        _ttl(expireAfter),
        _defaultLanguage(defaultLanguage),
        _languageOverride(languageOverride),
        _textWeights(textWeights) {}

        ConnectionInfo::ConnectionInfo(std::string const& uuid) :
            _address(),
            _databases(),
            _version(0.0f),
            _dbVersionStr(),
            _uuid(uuid)
        {}

        ConnectionInfo::ConnectionInfo(const std::string &address, const std::vector<std::string> &databases, 
            float version, const std::string& dbVersionStr, const std::string& storageEngine,
            std::string const& uuid) :
           _address(address),
           _databases(databases),
           _version(version),
            _dbVersionStr(dbVersionStr),
           _storageEngineType(storageEngine),
           _uuid(uuid)
        {}
}
