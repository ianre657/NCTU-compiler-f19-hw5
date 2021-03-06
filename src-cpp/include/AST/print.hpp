#pragma once
#include "AST/ast.hpp"
#include "visitor/visitor.hpp"

class PrintNode : public ASTNodeBase {
  public:
    Node expression_node; // Target

  public:
    PrintNode(int _line_number, int _col_number, Node _expression_node);
    ~PrintNode();
    void accept(ASTVisitorBase &v) { v.visit(this); }
    void print();
};