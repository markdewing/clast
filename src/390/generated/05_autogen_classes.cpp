
////////////////////////////////////////////////////////////////////////////////
// File autogenerated by clastgen
//  Clang - clang version 3.9.0-svn276421-1~exp1 (branches/release_39)
//
// Warning. Changes made here will be overwritten.
////////////////////////////////////////////////////////////////////////////////
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include "internal.h"

#include <clang/AST/AST.h>
#include <clang/ASTMatchers/ASTMatchers.h>
#include <clang/ASTMatchers/ASTMatchFinder.h>


namespace py = pybind11;

void autogenerated_classes_4(pybind11::module& m)
{

    py::class_<clang::CoroutineBodyStmt, stmt_deleter<clang::CoroutineBodyStmt>::type>(m, "CoroutineBodyStmt" , py::base<clang::Stmt>())

        .def("getBody", (clang::Stmt * (clang::CoroutineBodyStmt::*)() const)&clang::CoroutineBodyStmt::getBody , py::return_value_policy::reference_internal )
        .def("getPromiseDeclStmt", (clang::Stmt * (clang::CoroutineBodyStmt::*)() const)&clang::CoroutineBodyStmt::getPromiseDeclStmt , py::return_value_policy::reference_internal )
        .def("getPromiseDecl", (clang::VarDecl * (clang::CoroutineBodyStmt::*)() const)&clang::CoroutineBodyStmt::getPromiseDecl , py::return_value_policy::reference_internal )
        .def("getInitSuspendStmt", (clang::Stmt * (clang::CoroutineBodyStmt::*)() const)&clang::CoroutineBodyStmt::getInitSuspendStmt , py::return_value_policy::reference_internal )
        .def("getFinalSuspendStmt", (clang::Stmt * (clang::CoroutineBodyStmt::*)() const)&clang::CoroutineBodyStmt::getFinalSuspendStmt , py::return_value_policy::reference_internal )
        .def("getExceptionHandler", (clang::Stmt * (clang::CoroutineBodyStmt::*)() const)&clang::CoroutineBodyStmt::getExceptionHandler , py::return_value_policy::reference_internal )
        .def("getFallthroughHandler", (clang::Stmt * (clang::CoroutineBodyStmt::*)() const)&clang::CoroutineBodyStmt::getFallthroughHandler , py::return_value_policy::reference_internal )
        .def("getReturnValueInit", (clang::Expr * (clang::CoroutineBodyStmt::*)() const)&clang::CoroutineBodyStmt::getReturnValueInit , py::return_value_policy::reference_internal )
        .def("getLocStart", (clang::SourceLocation (clang::CoroutineBodyStmt::*)() const)&clang::CoroutineBodyStmt::getLocStart  )
        .def("getLocEnd", (clang::SourceLocation (clang::CoroutineBodyStmt::*)() const)&clang::CoroutineBodyStmt::getLocEnd  )
        //.def("children", (llvm::iterator_range<clang::StmtIterator> (clang::CoroutineBodyStmt::*)())&clang::CoroutineBodyStmt::children  )
    ;

    py::class_<clang::CoreturnStmt, stmt_deleter<clang::CoreturnStmt>::type>(m, "CoreturnStmt" , py::base<clang::Stmt>())

        .def("getKeywordLoc", (clang::SourceLocation (clang::CoreturnStmt::*)() const)&clang::CoreturnStmt::getKeywordLoc  )
        .def("getOperand", (clang::Expr * (clang::CoreturnStmt::*)() const)&clang::CoreturnStmt::getOperand , py::return_value_policy::reference_internal )
        .def("getPromiseCall", (clang::Expr * (clang::CoreturnStmt::*)() const)&clang::CoreturnStmt::getPromiseCall , py::return_value_policy::reference_internal )
        .def("getLocStart", (clang::SourceLocation (clang::CoreturnStmt::*)() const)&clang::CoreturnStmt::getLocStart  )
        .def("getLocEnd", (clang::SourceLocation (clang::CoreturnStmt::*)() const)&clang::CoreturnStmt::getLocEnd  )
        //.def("children", (llvm::iterator_range<clang::StmtIterator> (clang::CoreturnStmt::*)())&clang::CoreturnStmt::children  )
    ;

    py::class_<clang::FriendDecl, decl_deleter<clang::FriendDecl>::type>(m, "FriendDecl" , py::base<clang::Decl>())

        .def("getFriendType", (clang::TypeSourceInfo * (clang::FriendDecl::*)() const)&clang::FriendDecl::getFriendType , py::return_value_policy::reference_internal )
        .def("getFriendTypeNumTemplateParameterLists", (unsigned int (clang::FriendDecl::*)() const)&clang::FriendDecl::getFriendTypeNumTemplateParameterLists  )
        //.def("getFriendTypeTemplateParameterList", (clang::TemplateParameterList * (clang::FriendDecl::*)(unsigned int) const)&clang::FriendDecl::getFriendTypeTemplateParameterList , py::return_value_policy::reference_internal )
        .def("getFriendDecl", (clang::NamedDecl * (clang::FriendDecl::*)() const)&clang::FriendDecl::getFriendDecl , py::return_value_policy::reference_internal )
        .def("getFriendLoc", (clang::SourceLocation (clang::FriendDecl::*)() const)&clang::FriendDecl::getFriendLoc  )
        .def("getSourceRange", (clang::SourceRange (clang::FriendDecl::*)() const)&clang::FriendDecl::getSourceRange  )
    ;
}
