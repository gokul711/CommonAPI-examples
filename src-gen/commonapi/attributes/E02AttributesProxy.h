/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 2.1.6.v20140519.
* Used org.franca.core 0.8.11.201401091023.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef COMMONAPI_ATTRIBUTES_E02_Attributes_PROXY_H_
#define COMMONAPI_ATTRIBUTES_E02_Attributes_PROXY_H_

#include "E02AttributesProxyBase.h"


#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/AttributeExtension.h>
#include <CommonAPI/Factory.h>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace commonapi {
namespace attributes {

template <typename ... _AttributeExtensions>
class E02AttributesProxy: virtual public E02Attributes, virtual public E02AttributesProxyBase
, public _AttributeExtensions... {
public:
    E02AttributesProxy(std::shared_ptr<CommonAPI::Proxy> delegate);
    ~E02AttributesProxy();

    typedef E02Attributes InterfaceType;


    /**
     * Returns the wrapper class that provides access to the attribute x.
     */
    virtual XAttribute& getXAttribute() {
        return delegate_->getXAttribute();
    }
    /**
     * Returns the wrapper class that provides access to the attribute a1.
     */
    virtual A1Attribute& getA1Attribute() {
        return delegate_->getA1Attribute();
    }
    /**
     * Returns the wrapper class that provides access to the attribute f.
     */
    virtual FAttribute& getFAttribute() {
        return delegate_->getFAttribute();
    }




    /**
     * Returns the CommonAPI address of the remote partner this proxy communicates with.
     */
    virtual std::string getAddress() const;

    /**
     * Returns the domain of the remote partner this proxy communicates with.
     */
    virtual const std::string& getDomain() const;

    /** 
     * Returns the service ID of the remote partner this proxy communicates with.
     */
    virtual const std::string& getServiceId() const;

    /**
     * Returns the instance ID of the remote partner this proxy communicates with.
     */
    virtual const std::string& getInstanceId() const;

    /**
     * Returns true if the remote partner for this proxy is currently known to be available.
     */
    virtual bool isAvailable() const;

    /**
     * Returns true if the remote partner for this proxy is available.
     */
    virtual bool isAvailableBlocking() const;

    /**
     * Returns the wrapper class that is used to (de-)register for notifications about
     * the availability of the remote partner of this proxy.
     */
    virtual CommonAPI::ProxyStatusEvent& getProxyStatusEvent();

    /**
     * Returns the wrapper class that is used to access version information of the remote
     * partner of this proxy.
     */
    virtual CommonAPI::InterfaceVersionAttribute& getInterfaceVersionAttribute();

 private:
    std::shared_ptr<E02AttributesProxyBase> delegate_;
};

#ifdef WIN32
    typedef E02AttributesProxy<CommonAPI::WINDummyAttributeExtension<CommonAPI::WINDummyAttribute>> E02AttributesProxyDefault;
#else
    typedef E02AttributesProxy<> E02AttributesProxyDefault;
#endif

namespace E02AttributesExtensions {
    template <template <typename > class _ExtensionType>
    class XAttributeExtension {
     public:
        typedef _ExtensionType<E02AttributesProxyBase::XAttribute> extension_type;
    
        static_assert(std::is_base_of<typename CommonAPI::AttributeExtension<E02AttributesProxyBase::XAttribute>, extension_type>::value,
                      "Not CommonAPI Attribute Extension!");
    #ifdef WIN32
        XAttributeExtension() {}
    #endif
    
        XAttributeExtension(E02AttributesProxyBase& proxy): attributeExtension_(proxy.getXAttribute()) {
        }
    
        inline extension_type& getXAttributeExtension() {
            return attributeExtension_;
        }
    
     private:
        extension_type attributeExtension_;
    };

    template <template <typename > class _ExtensionType>
    class A1AttributeExtension {
     public:
        typedef _ExtensionType<E02AttributesProxyBase::A1Attribute> extension_type;
    
        static_assert(std::is_base_of<typename CommonAPI::AttributeExtension<E02AttributesProxyBase::A1Attribute>, extension_type>::value,
                      "Not CommonAPI Attribute Extension!");
    #ifdef WIN32
        A1AttributeExtension() {}
    #endif
    
        A1AttributeExtension(E02AttributesProxyBase& proxy): attributeExtension_(proxy.getA1Attribute()) {
        }
    
        inline extension_type& getA1AttributeExtension() {
            return attributeExtension_;
        }
    
     private:
        extension_type attributeExtension_;
    };

    template <template <typename > class _ExtensionType>
    class FAttributeExtension {
     public:
        typedef _ExtensionType<E02AttributesProxyBase::FAttribute> extension_type;
    
        static_assert(std::is_base_of<typename CommonAPI::AttributeExtension<E02AttributesProxyBase::FAttribute>, extension_type>::value,
                      "Not CommonAPI Attribute Extension!");
    #ifdef WIN32
        FAttributeExtension() {}
    #endif
    
        FAttributeExtension(E02AttributesProxyBase& proxy): attributeExtension_(proxy.getFAttribute()) {
        }
    
        inline extension_type& getFAttributeExtension() {
            return attributeExtension_;
        }
    
     private:
        extension_type attributeExtension_;
    };

} // namespace E02AttributesExtensions

//
// E02AttributesProxy Implementation
//
template <typename ... _AttributeExtensions>
E02AttributesProxy<_AttributeExtensions...>::E02AttributesProxy(std::shared_ptr<CommonAPI::Proxy> delegate):
        _AttributeExtensions(*(std::dynamic_pointer_cast<E02AttributesProxyBase>(delegate)))...,
        delegate_(std::dynamic_pointer_cast<E02AttributesProxyBase>(delegate)) {
}

template <typename ... _AttributeExtensions>
E02AttributesProxy<_AttributeExtensions...>::~E02AttributesProxy() {
}


template <typename ... _AttributeExtensions>
std::string E02AttributesProxy<_AttributeExtensions...>::getAddress() const {
    return delegate_->getAddress();
}

template <typename ... _AttributeExtensions>
const std::string& E02AttributesProxy<_AttributeExtensions...>::getDomain() const {
    return delegate_->getDomain();
}

template <typename ... _AttributeExtensions>
const std::string& E02AttributesProxy<_AttributeExtensions...>::getServiceId() const {
    return delegate_->getServiceId();
}

template <typename ... _AttributeExtensions>
const std::string& E02AttributesProxy<_AttributeExtensions...>::getInstanceId() const {
    return delegate_->getInstanceId();
}

template <typename ... _AttributeExtensions>
bool E02AttributesProxy<_AttributeExtensions...>::isAvailable() const {
    return delegate_->isAvailable();
}

template <typename ... _AttributeExtensions>
bool E02AttributesProxy<_AttributeExtensions...>::isAvailableBlocking() const {
    return delegate_->isAvailableBlocking();
}

template <typename ... _AttributeExtensions>
CommonAPI::ProxyStatusEvent& E02AttributesProxy<_AttributeExtensions...>::getProxyStatusEvent() {
    return delegate_->getProxyStatusEvent();
}

template <typename ... _AttributeExtensions>
CommonAPI::InterfaceVersionAttribute& E02AttributesProxy<_AttributeExtensions...>::getInterfaceVersionAttribute() {
    return delegate_->getInterfaceVersionAttribute();
}


} // namespace attributes
} // namespace commonapi

namespace CommonAPI {
template<template<typename > class _AttributeExtension>
struct DefaultAttributeProxyFactoryHelper<commonapi::attributes::E02AttributesProxy,
    _AttributeExtension> {
    typedef typename commonapi::attributes::E02AttributesProxy<
            commonapi::attributes::E02AttributesExtensions::XAttributeExtension<_AttributeExtension>, 
            commonapi::attributes::E02AttributesExtensions::A1AttributeExtension<_AttributeExtension>, 
            commonapi::attributes::E02AttributesExtensions::FAttributeExtension<_AttributeExtension>
    > class_t;
};
}

#endif // COMMONAPI_ATTRIBUTES_E02_Attributes_PROXY_H_