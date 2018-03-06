#include "corto/script/to_string/to_string.h"
using namespace antlrcpp;

Any CortoStringVisitor::visitDeclaration(CortoParser::DeclarationContext *ctx) {
    corto_log_push("declaration");
    Any result = visitChildren(ctx);
    corto_log_pop();
    return result;
}

Any CortoStringVisitor::visitDeclaration_identifier(CortoParser::Declaration_identifierContext *ctx) {
    corto_log_push("declaration_identifier");
    Any result = visitChildren(ctx);
    corto_log_pop();
    return result;
}

Any CortoStringVisitor::visitObject_expression(CortoParser::Object_expressionContext *ctx) {
    corto_log_push("object_expression");
    Any result = visitChildren(ctx);
    corto_log_pop();
    return result;
}

Any CortoStringVisitor::visitObject_identifier(CortoParser::Object_identifierContext *ctx) {
    corto_info(strarg(
        "object_identifier '%s'",
        ctx->getText().c_str()
    ));
    return 0;
}

Any CortoStringVisitor::visitInitializer_assignment(CortoParser::Initializer_assignmentContext *ctx) {
    corto_log_push("initializer_assignment");
    Any result = visitChildren(ctx);
    corto_log_pop();
    return result;
}

Any CortoStringVisitor::visitInitializer_expression(CortoParser::Initializer_expressionContext *ctx) {
    corto_log_push("initializer_expression");
    Any result = visitChildren(ctx);
    corto_log_pop();
    return result;
}

Any CortoStringVisitor::visitInitializer_composite(CortoParser::Initializer_compositeContext *ctx) {
    corto_log_push("initializer_composite");
    Any result = visitChildren(ctx);
    corto_log_pop();
    return result;
}

Any CortoStringVisitor::visitInitializer_collection(CortoParser::Initializer_collectionContext *ctx) {
    corto_log_push("initializer_collection");
    Any result = visitChildren(ctx);
    corto_log_pop();
    return result;
}

Any CortoStringVisitor::visitInitializer_list(CortoParser::Initializer_listContext *ctx) {
    corto_log_push("initializer_list");
    Any result = visitChildren(ctx);
    corto_log_pop();
    return result;
}

Any CortoStringVisitor::visitInitializer_value(CortoParser::Initializer_valueContext *ctx) {
    corto_log_push("initializer_value");
    Any result = visitChildren(ctx);
    corto_log_pop();
    return result;
}

Any CortoStringVisitor::visitInitializer_key(CortoParser::Initializer_keyContext *ctx) {
    corto_info(strarg("initializer_key '%s'", ctx->getText().c_str()));
    return 0;
}

Any CortoStringVisitor::visitCast_expression(CortoParser::Cast_expressionContext *ctx) {
  corto_info(strarg("expression '%s'", ctx->getText().c_str()));
  return 0;
}

Any CortoStringVisitor::visitScope(CortoParser::ScopeContext *ctx) {
    corto_log_push("scope");
    Any result = visitChildren(ctx);
    corto_log_pop();
    return result;
}

Any CortoStringVisitor::visitArgument_declaration(CortoParser::Argument_declarationContext *ctx) {
    corto_log_push("argument_declaration");
    Any result = visitChildren(ctx);
    corto_log_pop();
    return result;
}

Any CortoStringVisitor::visitArgument(CortoParser::ArgumentContext *ctx) {
    corto_info(
        strarg("argument '%s' '%s'",
            ctx->object_expression()->getText().c_str(),
            ctx->IDENTIFIER()->getText().c_str())
    );
    return 0;
}
