//
// Created by sangpan on 2021/02/03.
//

#ifndef CPPPLAYGROUND2_LIBRARY1_H
#define CPPPLAYGROUND2_LIBRARY1_H
#if defined(_MSC_VER)
#  define TEST_LIB_DLL_EXPORT __declspec(dllexport)
#pragma warning(disable : 4251)		//	need to have dll-interface  warn
#elif defined(__GNUC__)
#  define TEST_LIB_DLL_EXPORT 
#endif

class TEST_LIB_DLL_EXPORT library1 {

public:
    static void function000();
};


#endif //CPPPLAYGROUND2_LIBRARY1_H
