/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 2.1.6.v20140519.
* Used org.franca.core 0.8.11.201401091023.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef COMMONAPI_ATTRIBUTES_Common_Types_H_
#define COMMONAPI_ATTRIBUTES_Common_Types_H_



#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/InputStream.h>
#include <CommonAPI/OutputStream.h>
#include <CommonAPI/SerializableStruct.h>
#include <CommonAPI/types.h>
#include <cstdint>
#include <string>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace commonapi {
namespace attributes {

namespace CommonTypes {
    struct a2Struct: CommonAPI::SerializableStruct {
         bool b;
         double d;
    
        a2Struct() = default;
        a2Struct(const bool& b, const double& d);
    
    
        virtual void readFromInputStream(CommonAPI::InputStream& inputStream);
        virtual void writeToOutputStream(CommonAPI::OutputStream& outputStream) const;
    
        static inline void writeToTypeOutputStream(CommonAPI::TypeOutputStream& typeOutputStream) {
            typeOutputStream.writeBoolType();
            typeOutputStream.writeDoubleType();
        }
    };
    struct a1Struct: CommonAPI::SerializableStruct {
         std::string s;
         a2Struct a2;
    
        a1Struct() = default;
        a1Struct(const std::string& s, const a2Struct& a2);
    
    
        virtual void readFromInputStream(CommonAPI::InputStream& inputStream);
        virtual void writeToOutputStream(CommonAPI::OutputStream& outputStream) const;
    
        static inline void writeToTypeOutputStream(CommonAPI::TypeOutputStream& typeOutputStream) {
            typeOutputStream.writeStringType();
            typeOutputStream.beginWriteStructType();
            typeOutputStream.writeBoolType();typeOutputStream.writeDoubleType();
            typeOutputStream.endWriteStructType();
        }
    };

bool operator==(const a1Struct& lhs, const a1Struct& rhs);
inline bool operator!=(const a1Struct& lhs, const a1Struct& rhs) {
    return !(lhs == rhs);
}
bool operator==(const a2Struct& lhs, const a2Struct& rhs);
inline bool operator!=(const a2Struct& lhs, const a2Struct& rhs) {
    return !(lhs == rhs);
}


static inline const char* getTypeCollectionName() {
    static const char* typeCollectionName = "commonapi.attributes.CommonTypes";
    return typeCollectionName;
}


} // namespace CommonTypes

} // namespace attributes
} // namespace commonapi

namespace CommonAPI {


}


namespace std {
}

#endif // COMMONAPI_ATTRIBUTES_Common_Types_H_