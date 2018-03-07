
#include <corto/script/print/print.h>

class  CortoStringVisitor : public CortoBaseVisitor {
public:
    antlrcpp::Any visitDeclaration(CortoParser::DeclarationContext *ctx) override ;
    antlrcpp::Any visitDeclaration_identifier(CortoParser::Declaration_identifierContext *ctx) override ;
    antlrcpp::Any visitObject_expression(CortoParser::Object_expressionContext *ctx) override;
    antlrcpp::Any visitObject_identifier(CortoParser::Object_identifierContext *ctx) override;
    antlrcpp::Any visitInitializer_assignment(CortoParser::Initializer_assignmentContext *ctx) override;
    antlrcpp::Any visitInitializer_expression(CortoParser::Initializer_expressionContext *ctx) override;
    antlrcpp::Any visitInitializer_composite(CortoParser::Initializer_compositeContext *ctx) override;
    antlrcpp::Any visitInitializer_collection(CortoParser::Initializer_collectionContext *ctx) override;
    antlrcpp::Any visitInitializer_list(CortoParser::Initializer_listContext *ctx) override;
    antlrcpp::Any visitInitializer_value(CortoParser::Initializer_valueContext *ctx) override;
    antlrcpp::Any visitInitializer_key(CortoParser::Initializer_keyContext *ctx) override;
    antlrcpp::Any visitCast_expression(CortoParser::Cast_expressionContext *ctx) override;
    antlrcpp::Any visitScope(CortoParser::ScopeContext *ctx) override;
    antlrcpp::Any visitArgument_declaration(CortoParser::Argument_declarationContext *ctx) override;
    antlrcpp::Any visitArgument(CortoParser::ArgumentContext *ctx) override;
};
