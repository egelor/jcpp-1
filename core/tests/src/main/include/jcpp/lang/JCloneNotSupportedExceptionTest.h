#ifndef JCPP_LANG_JCLONE_NOT_SUPPORTED_EXCEPTION_TEST_H
#define JCPP_LANG_JCLONE_NOT_SUPPORTED_EXCEPTION_TEST_H

#include "jcpp/lang/JString.h"
#include "jcpp/JSerializableTest.h"
#include "junit/framework/JTestCase.h"
#include "junit/framework/JTestSuite.h"
#include "jcpp/io/JObjectInputStream.h"
#include "jcpp/io/JObjectOutputStream.h"
#include "jcpp/lang/JCloneNotSupportedException.h"

using namespace jcpp::io;
using namespace jcpp;

namespace jcpp{
    namespace lang{

        //@Class(canonicalName="jcpp.lang.CloneNotSupportedExceptionTest", simpleName="CloneNotSupportedExceptionTest");
        class JCPP_EXPORT JCloneNotSupportedExceptionTest : public JSerializableTest{
        public:
            JCloneNotSupportedExceptionTest();

            static JClass* getClazz();

            virtual void equals(JObject* reached, JObject* expected);

            virtual JObject* getSerializableObject();

            virtual ~JCloneNotSupportedExceptionTest();
        };
    }
}
#endif
