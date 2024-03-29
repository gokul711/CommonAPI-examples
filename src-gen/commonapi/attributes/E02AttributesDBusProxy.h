/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 2.1.6.v20140519.
* Used org.franca.core 0.8.11.201401091023.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef COMMONAPI_ATTRIBUTES_E02_Attributes_DBUS_PROXY_H_
#define COMMONAPI_ATTRIBUTES_E02_Attributes_DBUS_PROXY_H_

#include <commonapi/attributes/E02AttributesProxyBase.h>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/DBus/DBusFactory.h>
#include <CommonAPI/DBus/DBusProxy.h>
#include <CommonAPI/DBus/DBusAttribute.h>

#undef COMMONAPI_INTERNAL_COMPILATION

#include <string>

namespace commonapi {
namespace attributes {

class E02AttributesDBusProxy: virtual public E02AttributesProxyBase, virtual public CommonAPI::DBus::DBusProxy {
 public:
    E02AttributesDBusProxy(
                    const std::shared_ptr<CommonAPI::DBus::DBusFactory>& factory,
                    const std::string& commonApiAddress,
                    const std::string& interfaceName,
                    const std::string& busName,
                    const std::string& objectPath,
                    const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusProxyconnection);

    virtual ~E02AttributesDBusProxy() { }

    virtual XAttribute& getXAttribute();
    virtual A1Attribute& getA1Attribute();
    virtual FAttribute& getFAttribute();




    virtual void getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const;

 private:
   CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusAttribute<XAttribute>> x_;
   CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusAttribute<A1Attribute>> a1_;
   CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusReadonlyAttribute<FAttribute>> f_;


};



} // namespace attributes
} // namespace commonapi

#endif // COMMONAPI_ATTRIBUTES_E02_Attributes_DBUS_PROXY_H_
