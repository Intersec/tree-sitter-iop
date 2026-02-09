#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 297
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 126
#define ALIAS_COUNT 0
#define TOKEN_COUNT 68
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_package = 1,
  anon_sym_SEMI = 2,
  anon_sym_typedef = 3,
  anon_sym_import = 4,
  sym_path = 5,
  anon_sym_module = 6,
  anon_sym_COLON = 7,
  anon_sym_COMMA = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  anon_sym_enum = 11,
  anon_sym_EQ = 12,
  anon_sym_interface = 13,
  anon_sym_in = 14,
  anon_sym_null = 15,
  anon_sym_void = 16,
  anon_sym_out = 17,
  anon_sym_throw = 18,
  anon_sym_LPAREN = 19,
  anon_sym_RPAREN = 20,
  anon_sym_class = 21,
  anon_sym_abstract = 22,
  anon_sym_local = 23,
  anon_sym_union = 24,
  anon_sym_struct = 25,
  anon_sym_static = 26,
  anon_sym_int = 27,
  anon_sym_string = 28,
  anon_sym_uint = 29,
  anon_sym_long = 30,
  anon_sym_ulong = 31,
  anon_sym_byte = 32,
  anon_sym_ubyte = 33,
  anon_sym_short = 34,
  anon_sym_ushort = 35,
  anon_sym_bool = 36,
  anon_sym_double = 37,
  anon_sym_bytes = 38,
  anon_sym_xml = 39,
  anon_sym_QMARK = 40,
  anon_sym_AMP = 41,
  anon_sym_LBRACK_RBRACK = 42,
  anon_sym_DQUOTE = 43,
  sym_string_content = 44,
  anon_sym_c = 45,
  aux_sym_number_token1 = 46,
  aux_sym_number_token2 = 47,
  aux_sym_number_token3 = 48,
  anon_sym_LT_LT = 49,
  anon_sym_GT_GT = 50,
  anon_sym_STAR_STAR = 51,
  anon_sym_STAR = 52,
  anon_sym_PLUS = 53,
  anon_sym_DASH = 54,
  anon_sym_SLASH = 55,
  anon_sym_PIPE = 56,
  anon_sym_TILDE = 57,
  anon_sym_true = 58,
  anon_sym_false = 59,
  sym_tag_number = 60,
  sym_identifier = 61,
  anon_sym_snmpObj = 62,
  anon_sym_snmpTbl = 63,
  anon_sym_snmpIface = 64,
  anon_sym_AT = 65,
  sym_attribute_content = 66,
  sym_comment = 67,
  sym_source_file = 68,
  sym_package_definition = 69,
  sym_typedef_definition = 70,
  sym_import_definition = 71,
  sym_module_definition = 72,
  sym_module_inheritance = 73,
  sym_module_block = 74,
  sym_module_field = 75,
  sym_enum_definition = 76,
  sym_enum_block = 77,
  sym_enum_field = 78,
  sym_default_value = 79,
  sym_interface_definition = 80,
  sym_rpc_block = 81,
  sym_rpc = 82,
  sym_rpc_in = 83,
  sym_rpc_out = 84,
  sym_rpc_throw = 85,
  sym_argument_list = 86,
  sym_class_definition = 87,
  sym_class_modifier = 88,
  sym_class_inheritance = 89,
  sym_data_structure_definition = 90,
  sym_data_structure_type = 91,
  sym_data_structure_block = 92,
  sym_field = 93,
  sym_field_qualifier = 94,
  sym_variable = 95,
  sym_type = 96,
  sym_type_specifier = 97,
  sym_value = 98,
  sym_parenthesized_expression = 99,
  sym_string = 100,
  sym_char_literal = 101,
  sym_number = 102,
  sym_operator = 103,
  sym_constant = 104,
  sym_tag = 105,
  sym_snmp_object_definition = 106,
  sym_snmp_table_definition = 107,
  sym_snmp_interface_definition = 108,
  sym_snmp_rpc_block = 109,
  sym_snmp_rpc = 110,
  sym_snmp_rpc_in = 111,
  sym_attribute = 112,
  sym_attribute_argument_list = 113,
  aux_sym_source_file_repeat1 = 114,
  aux_sym_typedef_definition_repeat1 = 115,
  aux_sym_module_inheritance_repeat1 = 116,
  aux_sym_module_block_repeat1 = 117,
  aux_sym_enum_block_repeat1 = 118,
  aux_sym_rpc_block_repeat1 = 119,
  aux_sym_argument_list_repeat1 = 120,
  aux_sym_class_definition_repeat1 = 121,
  aux_sym_class_definition_repeat2 = 122,
  aux_sym_data_structure_block_repeat1 = 123,
  aux_sym_value_repeat1 = 124,
  aux_sym_snmp_rpc_block_repeat1 = 125,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_package] = "package",
  [anon_sym_SEMI] = ";",
  [anon_sym_typedef] = "typedef",
  [anon_sym_import] = "import",
  [sym_path] = "path",
  [anon_sym_module] = "module",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_enum] = "enum",
  [anon_sym_EQ] = "=",
  [anon_sym_interface] = "interface",
  [anon_sym_in] = "in",
  [anon_sym_null] = "null",
  [anon_sym_void] = "void",
  [anon_sym_out] = "out",
  [anon_sym_throw] = "throw",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_class] = "class",
  [anon_sym_abstract] = "abstract",
  [anon_sym_local] = "local",
  [anon_sym_union] = "union",
  [anon_sym_struct] = "struct",
  [anon_sym_static] = "static",
  [anon_sym_int] = "int",
  [anon_sym_string] = "string",
  [anon_sym_uint] = "uint",
  [anon_sym_long] = "long",
  [anon_sym_ulong] = "ulong",
  [anon_sym_byte] = "byte",
  [anon_sym_ubyte] = "ubyte",
  [anon_sym_short] = "short",
  [anon_sym_ushort] = "ushort",
  [anon_sym_bool] = "bool",
  [anon_sym_double] = "double",
  [anon_sym_bytes] = "bytes",
  [anon_sym_xml] = "xml",
  [anon_sym_QMARK] = "\?",
  [anon_sym_AMP] = "&",
  [anon_sym_LBRACK_RBRACK] = "[]",
  [anon_sym_DQUOTE] = "\"",
  [sym_string_content] = "string_content",
  [anon_sym_c] = "c",
  [aux_sym_number_token1] = "number_token1",
  [aux_sym_number_token2] = "number_token2",
  [aux_sym_number_token3] = "number_token3",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [anon_sym_PIPE] = "|",
  [anon_sym_TILDE] = "~",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_tag_number] = "tag_number",
  [sym_identifier] = "identifier",
  [anon_sym_snmpObj] = "snmpObj",
  [anon_sym_snmpTbl] = "snmpTbl",
  [anon_sym_snmpIface] = "snmpIface",
  [anon_sym_AT] = "@",
  [sym_attribute_content] = "attribute_content",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_package_definition] = "package_definition",
  [sym_typedef_definition] = "typedef_definition",
  [sym_import_definition] = "import_definition",
  [sym_module_definition] = "module_definition",
  [sym_module_inheritance] = "module_inheritance",
  [sym_module_block] = "module_block",
  [sym_module_field] = "module_field",
  [sym_enum_definition] = "enum_definition",
  [sym_enum_block] = "enum_block",
  [sym_enum_field] = "enum_field",
  [sym_default_value] = "default_value",
  [sym_interface_definition] = "interface_definition",
  [sym_rpc_block] = "rpc_block",
  [sym_rpc] = "rpc",
  [sym_rpc_in] = "rpc_in",
  [sym_rpc_out] = "rpc_out",
  [sym_rpc_throw] = "rpc_throw",
  [sym_argument_list] = "argument_list",
  [sym_class_definition] = "class_definition",
  [sym_class_modifier] = "class_modifier",
  [sym_class_inheritance] = "class_inheritance",
  [sym_data_structure_definition] = "data_structure_definition",
  [sym_data_structure_type] = "data_structure_type",
  [sym_data_structure_block] = "data_structure_block",
  [sym_field] = "field",
  [sym_field_qualifier] = "field_qualifier",
  [sym_variable] = "variable",
  [sym_type] = "type",
  [sym_type_specifier] = "type_specifier",
  [sym_value] = "value",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_string] = "string",
  [sym_char_literal] = "char_literal",
  [sym_number] = "number",
  [sym_operator] = "operator",
  [sym_constant] = "constant",
  [sym_tag] = "tag",
  [sym_snmp_object_definition] = "snmp_object_definition",
  [sym_snmp_table_definition] = "snmp_table_definition",
  [sym_snmp_interface_definition] = "snmp_interface_definition",
  [sym_snmp_rpc_block] = "snmp_rpc_block",
  [sym_snmp_rpc] = "snmp_rpc",
  [sym_snmp_rpc_in] = "snmp_rpc_in",
  [sym_attribute] = "attribute",
  [sym_attribute_argument_list] = "attribute_argument_list",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_typedef_definition_repeat1] = "typedef_definition_repeat1",
  [aux_sym_module_inheritance_repeat1] = "module_inheritance_repeat1",
  [aux_sym_module_block_repeat1] = "module_block_repeat1",
  [aux_sym_enum_block_repeat1] = "enum_block_repeat1",
  [aux_sym_rpc_block_repeat1] = "rpc_block_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_class_definition_repeat1] = "class_definition_repeat1",
  [aux_sym_class_definition_repeat2] = "class_definition_repeat2",
  [aux_sym_data_structure_block_repeat1] = "data_structure_block_repeat1",
  [aux_sym_value_repeat1] = "value_repeat1",
  [aux_sym_snmp_rpc_block_repeat1] = "snmp_rpc_block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_package] = anon_sym_package,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_typedef] = anon_sym_typedef,
  [anon_sym_import] = anon_sym_import,
  [sym_path] = sym_path,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_out] = anon_sym_out,
  [anon_sym_throw] = anon_sym_throw,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_abstract] = anon_sym_abstract,
  [anon_sym_local] = anon_sym_local,
  [anon_sym_union] = anon_sym_union,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_static] = anon_sym_static,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_uint] = anon_sym_uint,
  [anon_sym_long] = anon_sym_long,
  [anon_sym_ulong] = anon_sym_ulong,
  [anon_sym_byte] = anon_sym_byte,
  [anon_sym_ubyte] = anon_sym_ubyte,
  [anon_sym_short] = anon_sym_short,
  [anon_sym_ushort] = anon_sym_ushort,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_bytes] = anon_sym_bytes,
  [anon_sym_xml] = anon_sym_xml,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_LBRACK_RBRACK] = anon_sym_LBRACK_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_string_content] = sym_string_content,
  [anon_sym_c] = anon_sym_c,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [aux_sym_number_token2] = aux_sym_number_token2,
  [aux_sym_number_token3] = aux_sym_number_token3,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_tag_number] = sym_tag_number,
  [sym_identifier] = sym_identifier,
  [anon_sym_snmpObj] = anon_sym_snmpObj,
  [anon_sym_snmpTbl] = anon_sym_snmpTbl,
  [anon_sym_snmpIface] = anon_sym_snmpIface,
  [anon_sym_AT] = anon_sym_AT,
  [sym_attribute_content] = sym_attribute_content,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_package_definition] = sym_package_definition,
  [sym_typedef_definition] = sym_typedef_definition,
  [sym_import_definition] = sym_import_definition,
  [sym_module_definition] = sym_module_definition,
  [sym_module_inheritance] = sym_module_inheritance,
  [sym_module_block] = sym_module_block,
  [sym_module_field] = sym_module_field,
  [sym_enum_definition] = sym_enum_definition,
  [sym_enum_block] = sym_enum_block,
  [sym_enum_field] = sym_enum_field,
  [sym_default_value] = sym_default_value,
  [sym_interface_definition] = sym_interface_definition,
  [sym_rpc_block] = sym_rpc_block,
  [sym_rpc] = sym_rpc,
  [sym_rpc_in] = sym_rpc_in,
  [sym_rpc_out] = sym_rpc_out,
  [sym_rpc_throw] = sym_rpc_throw,
  [sym_argument_list] = sym_argument_list,
  [sym_class_definition] = sym_class_definition,
  [sym_class_modifier] = sym_class_modifier,
  [sym_class_inheritance] = sym_class_inheritance,
  [sym_data_structure_definition] = sym_data_structure_definition,
  [sym_data_structure_type] = sym_data_structure_type,
  [sym_data_structure_block] = sym_data_structure_block,
  [sym_field] = sym_field,
  [sym_field_qualifier] = sym_field_qualifier,
  [sym_variable] = sym_variable,
  [sym_type] = sym_type,
  [sym_type_specifier] = sym_type_specifier,
  [sym_value] = sym_value,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_string] = sym_string,
  [sym_char_literal] = sym_char_literal,
  [sym_number] = sym_number,
  [sym_operator] = sym_operator,
  [sym_constant] = sym_constant,
  [sym_tag] = sym_tag,
  [sym_snmp_object_definition] = sym_snmp_object_definition,
  [sym_snmp_table_definition] = sym_snmp_table_definition,
  [sym_snmp_interface_definition] = sym_snmp_interface_definition,
  [sym_snmp_rpc_block] = sym_snmp_rpc_block,
  [sym_snmp_rpc] = sym_snmp_rpc,
  [sym_snmp_rpc_in] = sym_snmp_rpc_in,
  [sym_attribute] = sym_attribute,
  [sym_attribute_argument_list] = sym_attribute_argument_list,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_typedef_definition_repeat1] = aux_sym_typedef_definition_repeat1,
  [aux_sym_module_inheritance_repeat1] = aux_sym_module_inheritance_repeat1,
  [aux_sym_module_block_repeat1] = aux_sym_module_block_repeat1,
  [aux_sym_enum_block_repeat1] = aux_sym_enum_block_repeat1,
  [aux_sym_rpc_block_repeat1] = aux_sym_rpc_block_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_class_definition_repeat1] = aux_sym_class_definition_repeat1,
  [aux_sym_class_definition_repeat2] = aux_sym_class_definition_repeat2,
  [aux_sym_data_structure_block_repeat1] = aux_sym_data_structure_block_repeat1,
  [aux_sym_value_repeat1] = aux_sym_value_repeat1,
  [aux_sym_snmp_rpc_block_repeat1] = aux_sym_snmp_rpc_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_typedef] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_out] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_throw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_abstract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_local] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_union] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_static] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_long] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ulong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ubyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_short] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ushort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_c] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_tag_number] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_snmpObj] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_snmpTbl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_snmpIface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [sym_attribute_content] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_package_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_typedef_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_import_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_module_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_module_inheritance] = {
    .visible = true,
    .named = true,
  },
  [sym_module_block] = {
    .visible = true,
    .named = true,
  },
  [sym_module_field] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_block] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_field] = {
    .visible = true,
    .named = true,
  },
  [sym_default_value] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_rpc_block] = {
    .visible = true,
    .named = true,
  },
  [sym_rpc] = {
    .visible = true,
    .named = true,
  },
  [sym_rpc_in] = {
    .visible = true,
    .named = true,
  },
  [sym_rpc_out] = {
    .visible = true,
    .named = true,
  },
  [sym_rpc_throw] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_class_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_class_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_class_inheritance] = {
    .visible = true,
    .named = true,
  },
  [sym_data_structure_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_data_structure_type] = {
    .visible = true,
    .named = true,
  },
  [sym_data_structure_block] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_field_qualifier] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_char_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_snmp_object_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_snmp_table_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_snmp_interface_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_snmp_rpc_block] = {
    .visible = true,
    .named = true,
  },
  [sym_snmp_rpc] = {
    .visible = true,
    .named = true,
  },
  [sym_snmp_rpc_in] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_argument_list] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_typedef_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_inheritance_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rpc_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_definition_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_data_structure_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_snmp_rpc_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 15,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 27,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 26,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 25,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 28,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 15,
  [93] = 32,
  [94] = 94,
  [95] = 25,
  [96] = 28,
  [97] = 27,
  [98] = 26,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 15,
  [147] = 32,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 166,
  [171] = 171,
  [172] = 172,
  [173] = 166,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 166,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 28,
  [184] = 27,
  [185] = 26,
  [186] = 25,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 201,
  [222] = 201,
  [223] = 223,
  [224] = 201,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 56,
  [289] = 233,
  [290] = 257,
  [291] = 291,
  [292] = 292,
  [293] = 233,
  [294] = 294,
  [295] = 295,
  [296] = 233,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(182);
      ADVANCE_MAP(
        '"', 240,
        '&', 238,
        '(', 203,
        ')', 204,
        '*', 264,
        '+', 265,
        ',', 190,
        '-', 266,
        '.', 172,
        '/', 267,
        '0', 257,
        ':', 189,
        ';', 184,
        '<', 43,
        '=', 194,
        '>', 44,
        '?', 237,
        '@', 337,
        '[', 46,
      );
      if (lookahead == '\\') SKIP(178);
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'b') ADVANCE(130);
      if (lookahead == 'c') ADVANCE(250);
      if (lookahead == 'd') ADVANCE(128);
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead == 'f') ADVANCE(47);
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == 'l') ADVANCE(122);
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(163);
      if (lookahead == 'o') ADVANCE(162);
      if (lookahead == 'p') ADVANCE(48);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == 't') ADVANCE(91);
      if (lookahead == 'u') ADVANCE(57);
      if (lookahead == 'v') ADVANCE(126);
      if (lookahead == 'x') ADVANCE(113);
      if (lookahead == '{') ADVANCE(191);
      if (lookahead == '|') ADVANCE(268);
      if (lookahead == '}') ADVANCE(192);
      if (lookahead == '~') ADVANCE(269);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(254);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '*') ADVANCE(244);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(369);
      if (lookahead == '\r') ADVANCE(246);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(22);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(22);
      if (lookahead == '\r') SKIP(3);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(26);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(26);
      if (lookahead == '\r') SKIP(5);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(23);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(23);
      if (lookahead == '\r') SKIP(7);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(25);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(25);
      if (lookahead == '\r') SKIP(9);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(24);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(24);
      if (lookahead == '\r') SKIP(11);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(27);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(27);
      if (lookahead == '\r') SKIP(13);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(248);
      if (lookahead == '\r') ADVANCE(241);
      if (lookahead != 0) ADVANCE(249);
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(42);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(42);
      if (lookahead == '\r') SKIP(16);
      END_STATE();
    case 18:
      if (lookahead == '\r') ADVANCE(370);
      if (lookahead == '\\') ADVANCE(359);
      if (lookahead != 0) ADVANCE(369);
      END_STATE();
    case 19:
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '(') ADVANCE(357);
      if (lookahead == ')') ADVANCE(341);
      if (lookahead == '\\') ADVANCE(360);
      if (lookahead != 0) ADVANCE(356);
      END_STATE();
    case 20:
      if (lookahead == '\r') ADVANCE(364);
      if (lookahead == '(') ADVANCE(369);
      if (lookahead == ')') ADVANCE(358);
      if (lookahead == '\\') ADVANCE(361);
      if (lookahead != 0) ADVANCE(357);
      END_STATE();
    case 21:
      if (lookahead == '\r') ADVANCE(363);
      if (lookahead == '(') ADVANCE(369);
      if (lookahead == ')') ADVANCE(341);
      if (lookahead == '\\') ADVANCE(362);
      if (lookahead != 0) ADVANCE(358);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        '"', 240,
        '&', 238,
        '(', 203,
        '*', 264,
        '+', 265,
        '-', 266,
        '.', 172,
        '/', 267,
        '0', 257,
        '<', 43,
        '>', 44,
      );
      if (lookahead == '\\') SKIP(4);
      if (lookahead == 'c') ADVANCE(251);
      if (lookahead == 'f') ADVANCE(277);
      if (lookahead == 't') ADVANCE(317);
      if (lookahead == '|') ADVANCE(268);
      if (lookahead == '~') ADVANCE(269);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 23:
      ADVANCE_MAP(
        '&', 238,
        '(', 203,
        ')', 204,
        '*', 264,
        '+', 265,
        ',', 190,
        '-', 266,
        '.', 172,
        '/', 267,
        '0', 257,
        ';', 184,
        '<', 43,
        '>', 44,
      );
      if (lookahead == '\\') SKIP(8);
      if (lookahead == 'f') ADVANCE(277);
      if (lookahead == 't') ADVANCE(317);
      if (lookahead == '|') ADVANCE(268);
      if (lookahead == '~') ADVANCE(269);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 24:
      ADVANCE_MAP(
        '&', 238,
        '(', 203,
        ')', 204,
        '/', 37,
        '0', 274,
        '?', 237,
        '@', 337,
        '[', 46,
      );
      if (lookahead == '\\') SKIP(12);
      if (lookahead == '}') ADVANCE(192);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 25:
      if (lookahead == '(') ADVANCE(203);
      if (lookahead == ')') ADVANCE(204);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == '@') ADVANCE(337);
      if (lookahead == '\\') SKIP(10);
      if (lookahead == 'b') ADVANCE(315);
      if (lookahead == 'd') ADVANCE(311);
      if (lookahead == 'i') ADVANCE(305);
      if (lookahead == 'l') ADVANCE(312);
      if (lookahead == 's') ADVANCE(292);
      if (lookahead == 'u') ADVANCE(279);
      if (lookahead == 'v') ADVANCE(309);
      if (lookahead == 'x') ADVANCE(303);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 26:
      if (lookahead == '(') ADVANCE(203);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == '0') ADVANCE(274);
      if (lookahead == '@') ADVANCE(337);
      if (lookahead == '\\') SKIP(6);
      if (lookahead == 'b') ADVANCE(315);
      if (lookahead == 'd') ADVANCE(311);
      if (lookahead == 'i') ADVANCE(305);
      if (lookahead == 'l') ADVANCE(312);
      if (lookahead == 's') ADVANCE(291);
      if (lookahead == 'u') ADVANCE(279);
      if (lookahead == 'v') ADVANCE(309);
      if (lookahead == 'x') ADVANCE(303);
      if (lookahead == '}') ADVANCE(192);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 27:
      if (lookahead == '(') ADVANCE(203);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == '\\') SKIP(14);
      if (lookahead == 'n') ADVANCE(331);
      if (lookahead == 'v') ADVANCE(309);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 28:
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ')') ADVANCE(351);
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '/') ADVANCE(367);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ')') ADVANCE(351);
      if (lookahead == '*') ADVANCE(28);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '/') ADVANCE(368);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(353);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(351);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '/') ADVANCE(365);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(351);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == ')') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == ')') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '/') ADVANCE(369);
      END_STATE();
    case 38:
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '/') ADVANCE(354);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == '*') ADVANCE(38);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == 'x') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == '\\') SKIP(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 43:
      if (lookahead == '<') ADVANCE(261);
      END_STATE();
    case 44:
      if (lookahead == '>') ADVANCE(262);
      END_STATE();
    case 45:
      if (lookahead == 'I') ADVANCE(85);
      if (lookahead == 'O') ADVANCE(58);
      if (lookahead == 'T') ADVANCE(60);
      END_STATE();
    case 46:
      if (lookahead == ']') ADVANCE(239);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 56:
      if (lookahead == 'b') ADVANCE(146);
      END_STATE();
    case 57:
      if (lookahead == 'b') ADVANCE(170);
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == 'l') ADVANCE(127);
      if (lookahead == 'n') ADVANCE(97);
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 58:
      if (lookahead == 'b') ADVANCE(98);
      END_STATE();
    case 59:
      if (lookahead == 'b') ADVANCE(108);
      END_STATE();
    case 60:
      if (lookahead == 'b') ADVANCE(104);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(210);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(154);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(156);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(79);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(53);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(199);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(81);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(167);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 84:
      if (lookahead == 'f') ADVANCE(185);
      END_STATE();
    case 85:
      if (lookahead == 'f') ADVANCE(52);
      END_STATE();
    case 86:
      if (lookahead == 'f') ADVANCE(55);
      END_STATE();
    case 87:
      if (lookahead == 'g') ADVANCE(217);
      END_STATE();
    case 88:
      if (lookahead == 'g') ADVANCE(219);
      END_STATE();
    case 89:
      if (lookahead == 'g') ADVANCE(213);
      END_STATE();
    case 90:
      if (lookahead == 'g') ADVANCE(78);
      END_STATE();
    case 91:
      if (lookahead == 'h') ADVANCE(142);
      if (lookahead == 'r') ADVANCE(165);
      if (lookahead == 'y') ADVANCE(136);
      END_STATE();
    case 92:
      if (lookahead == 'h') ADVANCE(125);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 93:
      if (lookahead == 'h') ADVANCE(134);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(120);
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 98:
      if (lookahead == 'j') ADVANCE(334);
      END_STATE();
    case 99:
      if (lookahead == 'k') ADVANCE(50);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(235);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(229);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(207);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(335);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 110:
      if (lookahead == 'm') ADVANCE(137);
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 111:
      if (lookahead == 'm') ADVANCE(137);
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 112:
      if (lookahead == 'm') ADVANCE(193);
      END_STATE();
    case 113:
      if (lookahead == 'm') ADVANCE(100);
      END_STATE();
    case 114:
      if (lookahead == 'm') ADVANCE(135);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(129);
      if (lookahead == 'y') ADVANCE(149);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 135:
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 136:
      if (lookahead == 'p') ADVANCE(82);
      END_STATE();
    case 137:
      if (lookahead == 'p') ADVANCE(133);
      END_STATE();
    case 138:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 140:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 145:
      if (lookahead == 's') ADVANCE(205);
      END_STATE();
    case 146:
      if (lookahead == 's') ADVANCE(157);
      END_STATE();
    case 147:
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 148:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(215);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(227);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 161:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 162:
      if (lookahead == 'u') ADVANCE(150);
      END_STATE();
    case 163:
      if (lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 164:
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 165:
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 166:
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 167:
      if (lookahead == 'u') ADVANCE(109);
      END_STATE();
    case 168:
      if (lookahead == 'w') ADVANCE(202);
      END_STATE();
    case 169:
      if (lookahead == 'y') ADVANCE(136);
      END_STATE();
    case 170:
      if (lookahead == 'y') ADVANCE(159);
      END_STATE();
    case 171:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      END_STATE();
    case 172:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      END_STATE();
    case 173:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      END_STATE();
    case 174:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(255);
      END_STATE();
    case 175:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(276);
      END_STATE();
    case 176:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(249);
      END_STATE();
    case 177:
      if (eof) ADVANCE(182);
      if (lookahead == '\n') SKIP(0);
      END_STATE();
    case 178:
      if (eof) ADVANCE(182);
      if (lookahead == '\n') SKIP(0);
      if (lookahead == '\r') SKIP(177);
      END_STATE();
    case 179:
      if (eof) ADVANCE(182);
      if (lookahead == '\n') SKIP(181);
      END_STATE();
    case 180:
      if (eof) ADVANCE(182);
      if (lookahead == '\n') SKIP(181);
      if (lookahead == '\r') SKIP(179);
      END_STATE();
    case 181:
      if (eof) ADVANCE(182);
      if (lookahead == '(') ADVANCE(203);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == ';') ADVANCE(184);
      if (lookahead == '@') ADVANCE(337);
      if (lookahead == '\\') SKIP(180);
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'c') ADVANCE(105);
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 'l') ADVANCE(132);
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead == 'p') ADVANCE(48);
      if (lookahead == 's') ADVANCE(117);
      if (lookahead == 't') ADVANCE(169);
      if (lookahead == 'u') ADVANCE(115);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_typedef);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '*' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_void);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_throw);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_static);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_uint);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_uint);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_long);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_ulong);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_ulong);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == 's') ADVANCE(233);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == 's') ADVANCE(234);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_ubyte);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_ubyte);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_short);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_ushort);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_ushort);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_double);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_xml);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\n') ADVANCE(248);
      if (lookahead == '\\') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(249);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\n') ADVANCE(249);
      if (lookahead == '"') ADVANCE(369);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\r') ADVANCE(246);
      if (lookahead == '"') ADVANCE(369);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '*') ADVANCE(244);
      if (lookahead == '/') ADVANCE(249);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '*') ADVANCE(244);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '"') ADVANCE(369);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '*') ADVANCE(245);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == '\\') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(249);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '\\') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(249);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_c);
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_c);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '.') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(255);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == 'x') ADVANCE(259);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(255);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(263);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == '0') ADVANCE(40);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(254);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '/') ADVANCE(369);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_tag_number);
      if (lookahead == 'x') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_tag_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_tag_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(297);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(327);
      if (lookahead == 'r') ADVANCE(296);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(332);
      if (lookahead == 'i') ADVANCE(308);
      if (lookahead == 'l') ADVANCE(314);
      if (lookahead == 's') ADVANCE(293);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(301);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(211);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(200);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(271);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(222);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(224);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(232);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(218);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(220);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(214);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(310);
      if (lookahead == 't') ADVANCE(278);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(310);
      if (lookahead == 't') ADVANCE(318);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(316);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(282);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(281);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(307);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(321);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(236);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(230);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(198);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(287);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(300);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(298);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(288);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(322);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(289);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(290);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(323);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(294);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(319);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(330);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(304);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(299);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(306);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(313);
      if (lookahead == 'y') ADVANCE(326);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(320);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(329);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(296);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(324);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(325);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(284);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(212);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(216);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(226);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(228);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(285);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(295);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(286);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(283);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(280);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(302);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(328);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_snmpObj);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_snmpTbl);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_snmpIface);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_attribute_content);
      if (lookahead == '\n') ADVANCE(345);
      if (lookahead == '\r') ADVANCE(339);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(346);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_attribute_content);
      if (lookahead == '\n') ADVANCE(345);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(346);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_attribute_content);
      if (lookahead == '\n') ADVANCE(346);
      if (lookahead == '(') ADVANCE(356);
      if (lookahead == ')') ADVANCE(369);
      if (lookahead == '\\') ADVANCE(342);
      if (lookahead != 0) ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_attribute_content);
      if (lookahead == '\n') ADVANCE(353);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(369);
      if (lookahead != 0) ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_attribute_content);
      if (lookahead == '\r') ADVANCE(349);
      if (lookahead == '(') ADVANCE(356);
      if (lookahead == ')') ADVANCE(369);
      if (lookahead == '\\') ADVANCE(342);
      if (lookahead != 0) ADVANCE(340);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_attribute_content);
      if (lookahead == '\r') ADVANCE(352);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(369);
      if (lookahead != 0) ADVANCE(341);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_attribute_content);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == '*') ADVANCE(348);
      if (lookahead == '/') ADVANCE(340);
      if (lookahead != 0 &&
          (lookahead < '(' || '*' < lookahead)) ADVANCE(346);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_attribute_content);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == '/') ADVANCE(344);
      if (lookahead == '\\') ADVANCE(338);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(346);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_attribute_content);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(346);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_attribute_content);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '*') ADVANCE(347);
      if (lookahead == '/') ADVANCE(346);
      if (lookahead != 0) ADVANCE(348);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_attribute_content);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '*') ADVANCE(347);
      if (lookahead != 0) ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_attribute_content);
      if (lookahead == '(') ADVANCE(356);
      if (lookahead == ')') ADVANCE(369);
      if (lookahead == '\\') ADVANCE(342);
      if (lookahead != 0) ADVANCE(340);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_attribute_content);
      if (lookahead == '*') ADVANCE(350);
      if (lookahead == '/') ADVANCE(353);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(39);
      if (lookahead != 0) ADVANCE(351);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_attribute_content);
      if (lookahead == '*') ADVANCE(350);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(39);
      if (lookahead != 0) ADVANCE(351);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_attribute_content);
      if (lookahead == '\\') ADVANCE(343);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(369);
      if (lookahead != 0) ADVANCE(341);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_attribute_content);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(369);
      if (lookahead == '\r') ADVANCE(246);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '(') ADVANCE(357);
      if (lookahead == ')') ADVANCE(341);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead != 0) ADVANCE(356);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '(') ADVANCE(369);
      if (lookahead == ')') ADVANCE(358);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead != 0) ADVANCE(357);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '(') ADVANCE(369);
      if (lookahead == ')') ADVANCE(341);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead != 0) ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r') ADVANCE(370);
      if (lookahead == '\\') ADVANCE(359);
      if (lookahead != 0) ADVANCE(369);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '(') ADVANCE(357);
      if (lookahead == ')') ADVANCE(341);
      if (lookahead == '\\') ADVANCE(360);
      if (lookahead != 0) ADVANCE(356);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r') ADVANCE(364);
      if (lookahead == '(') ADVANCE(369);
      if (lookahead == ')') ADVANCE(358);
      if (lookahead == '\\') ADVANCE(361);
      if (lookahead != 0) ADVANCE(357);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r') ADVANCE(363);
      if (lookahead == '(') ADVANCE(369);
      if (lookahead == ')') ADVANCE(341);
      if (lookahead == '\\') ADVANCE(362);
      if (lookahead != 0) ADVANCE(358);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '(') ADVANCE(369);
      if (lookahead == ')') ADVANCE(341);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead != 0) ADVANCE(358);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '(') ADVANCE(369);
      if (lookahead == ')') ADVANCE(358);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead != 0) ADVANCE(357);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(353);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '(') ADVANCE(357);
      if (lookahead == ')') ADVANCE(341);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead != 0) ADVANCE(356);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ')') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(35);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(36);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(369);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0) ADVANCE(369);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 181},
  [2] = {.lex_state = 181},
  [3] = {.lex_state = 181},
  [4] = {.lex_state = 22},
  [5] = {.lex_state = 26},
  [6] = {.lex_state = 26},
  [7] = {.lex_state = 26},
  [8] = {.lex_state = 23},
  [9] = {.lex_state = 23},
  [10] = {.lex_state = 23},
  [11] = {.lex_state = 25},
  [12] = {.lex_state = 25},
  [13] = {.lex_state = 25},
  [14] = {.lex_state = 23},
  [15] = {.lex_state = 26},
  [16] = {.lex_state = 25},
  [17] = {.lex_state = 23},
  [18] = {.lex_state = 23},
  [19] = {.lex_state = 23},
  [20] = {.lex_state = 25},
  [21] = {.lex_state = 23},
  [22] = {.lex_state = 25},
  [23] = {.lex_state = 26},
  [24] = {.lex_state = 26},
  [25] = {.lex_state = 26},
  [26] = {.lex_state = 26},
  [27] = {.lex_state = 26},
  [28] = {.lex_state = 26},
  [29] = {.lex_state = 26},
  [30] = {.lex_state = 26},
  [31] = {.lex_state = 181},
  [32] = {.lex_state = 25},
  [33] = {.lex_state = 25},
  [34] = {.lex_state = 181},
  [35] = {.lex_state = 181},
  [36] = {.lex_state = 181},
  [37] = {.lex_state = 25},
  [38] = {.lex_state = 25},
  [39] = {.lex_state = 25},
  [40] = {.lex_state = 181},
  [41] = {.lex_state = 181},
  [42] = {.lex_state = 181},
  [43] = {.lex_state = 181},
  [44] = {.lex_state = 181},
  [45] = {.lex_state = 181},
  [46] = {.lex_state = 181},
  [47] = {.lex_state = 25},
  [48] = {.lex_state = 181},
  [49] = {.lex_state = 25},
  [50] = {.lex_state = 181},
  [51] = {.lex_state = 181},
  [52] = {.lex_state = 181},
  [53] = {.lex_state = 25},
  [54] = {.lex_state = 181},
  [55] = {.lex_state = 181},
  [56] = {.lex_state = 26},
  [57] = {.lex_state = 181},
  [58] = {.lex_state = 181},
  [59] = {.lex_state = 181},
  [60] = {.lex_state = 181},
  [61] = {.lex_state = 181},
  [62] = {.lex_state = 181},
  [63] = {.lex_state = 181},
  [64] = {.lex_state = 181},
  [65] = {.lex_state = 181},
  [66] = {.lex_state = 181},
  [67] = {.lex_state = 181},
  [68] = {.lex_state = 181},
  [69] = {.lex_state = 25},
  [70] = {.lex_state = 181},
  [71] = {.lex_state = 181},
  [72] = {.lex_state = 181},
  [73] = {.lex_state = 181},
  [74] = {.lex_state = 181},
  [75] = {.lex_state = 181},
  [76] = {.lex_state = 181},
  [77] = {.lex_state = 181},
  [78] = {.lex_state = 181},
  [79] = {.lex_state = 25},
  [80] = {.lex_state = 181},
  [81] = {.lex_state = 181},
  [82] = {.lex_state = 181},
  [83] = {.lex_state = 25},
  [84] = {.lex_state = 181},
  [85] = {.lex_state = 181},
  [86] = {.lex_state = 181},
  [87] = {.lex_state = 181},
  [88] = {.lex_state = 25},
  [89] = {.lex_state = 181},
  [90] = {.lex_state = 181},
  [91] = {.lex_state = 181},
  [92] = {.lex_state = 181},
  [93] = {.lex_state = 181},
  [94] = {.lex_state = 25},
  [95] = {.lex_state = 181},
  [96] = {.lex_state = 181},
  [97] = {.lex_state = 181},
  [98] = {.lex_state = 181},
  [99] = {.lex_state = 24},
  [100] = {.lex_state = 24},
  [101] = {.lex_state = 24},
  [102] = {.lex_state = 24},
  [103] = {.lex_state = 24},
  [104] = {.lex_state = 24},
  [105] = {.lex_state = 24},
  [106] = {.lex_state = 24},
  [107] = {.lex_state = 24},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 24},
  [112] = {.lex_state = 24},
  [113] = {.lex_state = 24},
  [114] = {.lex_state = 24},
  [115] = {.lex_state = 24},
  [116] = {.lex_state = 24},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 27},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 27},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 181},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 181},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 24},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 181},
  [146] = {.lex_state = 24},
  [147] = {.lex_state = 24},
  [148] = {.lex_state = 24},
  [149] = {.lex_state = 24},
  [150] = {.lex_state = 24},
  [151] = {.lex_state = 24},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 24},
  [154] = {.lex_state = 24},
  [155] = {.lex_state = 24},
  [156] = {.lex_state = 24},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 24},
  [159] = {.lex_state = 24},
  [160] = {.lex_state = 24},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 24},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 24},
  [167] = {.lex_state = 24},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 24},
  [170] = {.lex_state = 24},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 24},
  [173] = {.lex_state = 24},
  [174] = {.lex_state = 181},
  [175] = {.lex_state = 24},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 24},
  [178] = {.lex_state = 24},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 24},
  [184] = {.lex_state = 24},
  [185] = {.lex_state = 24},
  [186] = {.lex_state = 24},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 24},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 345},
  [202] = {.lex_state = 24},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 248},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 24},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 345},
  [222] = {.lex_state = 345},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 345},
  [225] = {.lex_state = 24},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 24},
  [228] = {.lex_state = 24},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 24},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 24},
  [235] = {.lex_state = 24},
  [236] = {.lex_state = 24},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 24},
  [240] = {.lex_state = 24},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 24},
  [244] = {.lex_state = 24},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 24},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 24},
  [251] = {.lex_state = 24},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 24},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 24},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 24},
  [263] = {.lex_state = 24},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 24},
  [271] = {.lex_state = 24},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 24},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 24},
  [277] = {.lex_state = 24},
  [278] = {.lex_state = 24},
  [279] = {.lex_state = 24},
  [280] = {.lex_state = 24},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 24},
  [283] = {.lex_state = 24},
  [284] = {.lex_state = 24},
  [285] = {.lex_state = 24},
  [286] = {.lex_state = 42},
  [287] = {.lex_state = 24},
  [288] = {.lex_state = 24},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 24},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_typedef] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_out] = ACTIONS(1),
    [anon_sym_throw] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_abstract] = ACTIONS(1),
    [anon_sym_local] = ACTIONS(1),
    [anon_sym_union] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_static] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_uint] = ACTIONS(1),
    [anon_sym_long] = ACTIONS(1),
    [anon_sym_ulong] = ACTIONS(1),
    [anon_sym_byte] = ACTIONS(1),
    [anon_sym_ubyte] = ACTIONS(1),
    [anon_sym_short] = ACTIONS(1),
    [anon_sym_ushort] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_bytes] = ACTIONS(1),
    [anon_sym_xml] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_c] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [aux_sym_number_token2] = ACTIONS(1),
    [aux_sym_number_token3] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_snmpObj] = ACTIONS(1),
    [anon_sym_snmpTbl] = ACTIONS(1),
    [anon_sym_snmpIface] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(275),
    [sym_package_definition] = STATE(2),
    [sym_typedef_definition] = STATE(2),
    [sym_import_definition] = STATE(2),
    [sym_module_definition] = STATE(2),
    [sym_enum_definition] = STATE(2),
    [sym_interface_definition] = STATE(2),
    [sym_class_definition] = STATE(2),
    [sym_class_modifier] = STATE(145),
    [sym_data_structure_definition] = STATE(2),
    [sym_data_structure_type] = STATE(271),
    [sym_snmp_object_definition] = STATE(2),
    [sym_snmp_table_definition] = STATE(2),
    [sym_snmp_interface_definition] = STATE(2),
    [sym_attribute] = STATE(31),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_typedef_definition_repeat1] = STATE(31),
    [aux_sym_class_definition_repeat1] = STATE(145),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_package] = ACTIONS(7),
    [anon_sym_typedef] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_module] = ACTIONS(13),
    [anon_sym_enum] = ACTIONS(15),
    [anon_sym_interface] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_abstract] = ACTIONS(21),
    [anon_sym_local] = ACTIONS(21),
    [anon_sym_union] = ACTIONS(23),
    [anon_sym_struct] = ACTIONS(23),
    [anon_sym_snmpObj] = ACTIONS(25),
    [anon_sym_snmpTbl] = ACTIONS(27),
    [anon_sym_snmpIface] = ACTIONS(29),
    [anon_sym_AT] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_package,
    ACTIONS(9), 1,
      anon_sym_typedef,
    ACTIONS(11), 1,
      anon_sym_import,
    ACTIONS(13), 1,
      anon_sym_module,
    ACTIONS(15), 1,
      anon_sym_enum,
    ACTIONS(17), 1,
      anon_sym_interface,
    ACTIONS(19), 1,
      anon_sym_class,
    ACTIONS(25), 1,
      anon_sym_snmpObj,
    ACTIONS(27), 1,
      anon_sym_snmpTbl,
    ACTIONS(29), 1,
      anon_sym_snmpIface,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(271), 1,
      sym_data_structure_type,
    ACTIONS(21), 2,
      anon_sym_abstract,
      anon_sym_local,
    ACTIONS(23), 2,
      anon_sym_union,
      anon_sym_struct,
    STATE(31), 2,
      sym_attribute,
      aux_sym_typedef_definition_repeat1,
    STATE(145), 2,
      sym_class_modifier,
      aux_sym_class_definition_repeat1,
    STATE(3), 12,
      sym_package_definition,
      sym_typedef_definition,
      sym_import_definition,
      sym_module_definition,
      sym_enum_definition,
      sym_interface_definition,
      sym_class_definition,
      sym_data_structure_definition,
      sym_snmp_object_definition,
      sym_snmp_table_definition,
      sym_snmp_interface_definition,
      aux_sym_source_file_repeat1,
  [73] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      anon_sym_package,
    ACTIONS(40), 1,
      anon_sym_typedef,
    ACTIONS(43), 1,
      anon_sym_import,
    ACTIONS(46), 1,
      anon_sym_module,
    ACTIONS(49), 1,
      anon_sym_enum,
    ACTIONS(52), 1,
      anon_sym_interface,
    ACTIONS(55), 1,
      anon_sym_class,
    ACTIONS(64), 1,
      anon_sym_snmpObj,
    ACTIONS(67), 1,
      anon_sym_snmpTbl,
    ACTIONS(70), 1,
      anon_sym_snmpIface,
    ACTIONS(73), 1,
      anon_sym_AT,
    STATE(271), 1,
      sym_data_structure_type,
    ACTIONS(58), 2,
      anon_sym_abstract,
      anon_sym_local,
    ACTIONS(61), 2,
      anon_sym_union,
      anon_sym_struct,
    STATE(31), 2,
      sym_attribute,
      aux_sym_typedef_definition_repeat1,
    STATE(145), 2,
      sym_class_modifier,
      aux_sym_class_definition_repeat1,
    STATE(3), 12,
      sym_package_definition,
      sym_typedef_definition,
      sym_import_definition,
      sym_module_definition,
      sym_enum_definition,
      sym_interface_definition,
      sym_class_definition,
      sym_data_structure_definition,
      sym_snmp_object_definition,
      sym_snmp_table_definition,
      sym_snmp_interface_definition,
      aux_sym_source_file_repeat1,
  [146] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      anon_sym_DQUOTE,
    ACTIONS(82), 1,
      anon_sym_c,
    ACTIONS(84), 1,
      aux_sym_number_token1,
    ACTIONS(92), 1,
      sym_identifier,
    STATE(180), 1,
      sym_value,
    ACTIONS(86), 2,
      aux_sym_number_token2,
      aux_sym_number_token3,
    ACTIONS(90), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(163), 2,
      sym_string,
      sym_char_literal,
    ACTIONS(88), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(8), 5,
      sym_parenthesized_expression,
      sym_number,
      sym_operator,
      sym_constant,
      aux_sym_value_repeat1,
    ACTIONS(78), 7,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_TILDE,
  [201] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
    ACTIONS(98), 1,
      anon_sym_static,
    ACTIONS(100), 1,
      sym_tag_number,
    ACTIONS(102), 1,
      anon_sym_AT,
    STATE(29), 1,
      sym_tag,
    STATE(38), 1,
      sym_field_qualifier,
    STATE(141), 1,
      sym_type,
    STATE(266), 1,
      sym_variable,
    STATE(6), 3,
      sym_field,
      sym_attribute,
      aux_sym_data_structure_block_repeat1,
    ACTIONS(96), 15,
      anon_sym_void,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [251] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    ACTIONS(109), 1,
      anon_sym_static,
    ACTIONS(112), 1,
      sym_tag_number,
    ACTIONS(115), 1,
      anon_sym_AT,
    STATE(29), 1,
      sym_tag,
    STATE(38), 1,
      sym_field_qualifier,
    STATE(141), 1,
      sym_type,
    STATE(266), 1,
      sym_variable,
    STATE(6), 3,
      sym_field,
      sym_attribute,
      aux_sym_data_structure_block_repeat1,
    ACTIONS(106), 15,
      anon_sym_void,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [301] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_static,
    ACTIONS(100), 1,
      sym_tag_number,
    ACTIONS(102), 1,
      anon_sym_AT,
    ACTIONS(118), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      sym_tag,
    STATE(38), 1,
      sym_field_qualifier,
    STATE(141), 1,
      sym_type,
    STATE(266), 1,
      sym_variable,
    STATE(5), 3,
      sym_field,
      sym_attribute,
      aux_sym_data_structure_block_repeat1,
    ACTIONS(96), 15,
      anon_sym_void,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [351] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 1,
      aux_sym_number_token1,
    ACTIONS(122), 1,
      sym_identifier,
    ACTIONS(86), 2,
      aux_sym_number_token2,
      aux_sym_number_token3,
    ACTIONS(90), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(88), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(120), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(9), 5,
      sym_parenthesized_expression,
      sym_number,
      sym_operator,
      sym_constant,
      aux_sym_value_repeat1,
    ACTIONS(78), 7,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_TILDE,
  [398] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      aux_sym_number_token1,
    ACTIONS(144), 1,
      sym_identifier,
    ACTIONS(135), 2,
      aux_sym_number_token2,
      aux_sym_number_token3,
    ACTIONS(141), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(124), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(138), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(9), 5,
      sym_parenthesized_expression,
      sym_number,
      sym_operator,
      sym_constant,
      aux_sym_value_repeat1,
    ACTIONS(129), 7,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_TILDE,
  [445] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 1,
      aux_sym_number_token1,
    ACTIONS(122), 1,
      sym_identifier,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    ACTIONS(86), 2,
      aux_sym_number_token2,
      aux_sym_number_token3,
    ACTIONS(90), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(88), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(9), 5,
      sym_parenthesized_expression,
      sym_number,
      sym_operator,
      sym_constant,
      aux_sym_value_repeat1,
    ACTIONS(78), 7,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_TILDE,
  [490] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_RPAREN,
    ACTIONS(154), 1,
      anon_sym_AT,
    STATE(11), 1,
      aux_sym_argument_list_repeat1,
    STATE(141), 1,
      sym_type,
    STATE(261), 1,
      sym_variable,
    STATE(16), 2,
      sym_attribute,
      aux_sym_typedef_definition_repeat1,
    ACTIONS(149), 15,
      anon_sym_void,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [530] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 1,
      anon_sym_AT,
    STATE(13), 1,
      aux_sym_argument_list_repeat1,
    STATE(141), 1,
      sym_type,
    STATE(220), 1,
      sym_variable,
    STATE(20), 2,
      sym_attribute,
      aux_sym_typedef_definition_repeat1,
    ACTIONS(96), 15,
      anon_sym_void,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [570] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_AT,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      aux_sym_argument_list_repeat1,
    STATE(141), 1,
      sym_type,
    STATE(205), 1,
      sym_variable,
    STATE(22), 2,
      sym_attribute,
      aux_sym_typedef_definition_repeat1,
    ACTIONS(96), 15,
      anon_sym_void,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [610] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 1,
      aux_sym_number_token1,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(86), 2,
      aux_sym_number_token2,
      aux_sym_number_token3,
    ACTIONS(90), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(88), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(10), 5,
      sym_parenthesized_expression,
      sym_number,
      sym_operator,
      sym_constant,
      aux_sym_value_repeat1,
    ACTIONS(78), 7,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_TILDE,
  [652] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym_attribute_argument_list,
    ACTIONS(165), 3,
      anon_sym_RBRACE,
      sym_tag_number,
      anon_sym_AT,
    ACTIONS(167), 16,
      anon_sym_void,
      anon_sym_static,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [685] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_AT,
    STATE(141), 1,
      sym_type,
    STATE(267), 1,
      sym_variable,
    STATE(32), 2,
      sym_attribute,
      aux_sym_typedef_definition_repeat1,
    ACTIONS(96), 15,
      anon_sym_void,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [719] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 8,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(171), 12,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AMP,
      aux_sym_number_token1,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_TILDE,
  [747] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 8,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(175), 12,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AMP,
      aux_sym_number_token1,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_TILDE,
  [775] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 8,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(179), 12,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AMP,
      aux_sym_number_token1,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_TILDE,
  [803] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_AT,
    STATE(141), 1,
      sym_type,
    STATE(206), 1,
      sym_variable,
    STATE(32), 2,
      sym_attribute,
      aux_sym_typedef_definition_repeat1,
    ACTIONS(96), 15,
      anon_sym_void,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [837] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 8,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(183), 12,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AMP,
      aux_sym_number_token1,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_TILDE,
  [865] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_AT,
    STATE(141), 1,
      sym_type,
    STATE(207), 1,
      sym_variable,
    STATE(32), 2,
      sym_attribute,
      aux_sym_typedef_definition_repeat1,
    ACTIONS(96), 15,
      anon_sym_void,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [899] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 3,
      anon_sym_RBRACE,
      sym_tag_number,
      anon_sym_AT,
    ACTIONS(189), 16,
      anon_sym_void,
      anon_sym_static,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 3,
      anon_sym_RBRACE,
      sym_tag_number,
      anon_sym_AT,
    ACTIONS(193), 16,
      anon_sym_void,
      anon_sym_static,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [953] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 3,
      anon_sym_RBRACE,
      sym_tag_number,
      anon_sym_AT,
    ACTIONS(167), 16,
      anon_sym_void,
      anon_sym_static,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [980] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 3,
      anon_sym_RBRACE,
      sym_tag_number,
      anon_sym_AT,
    ACTIONS(197), 16,
      anon_sym_void,
      anon_sym_static,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [1007] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 3,
      anon_sym_RBRACE,
      sym_tag_number,
      anon_sym_AT,
    ACTIONS(201), 16,
      anon_sym_void,
      anon_sym_static,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [1034] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 3,
      anon_sym_RBRACE,
      sym_tag_number,
      anon_sym_AT,
    ACTIONS(205), 16,
      anon_sym_void,
      anon_sym_static,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [1061] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_static,
    STATE(49), 1,
      sym_field_qualifier,
    STATE(141), 1,
      sym_type,
    STATE(281), 1,
      sym_variable,
    ACTIONS(96), 15,
      anon_sym_void,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [1094] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 3,
      anon_sym_RBRACE,
      sym_tag_number,
      anon_sym_AT,
    ACTIONS(209), 16,
      anon_sym_void,
      anon_sym_static,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [1121] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(211), 1,
      anon_sym_typedef,
    ACTIONS(213), 1,
      anon_sym_module,
    ACTIONS(215), 1,
      anon_sym_enum,
    ACTIONS(217), 1,
      anon_sym_interface,
    ACTIONS(219), 1,
      anon_sym_class,
    ACTIONS(221), 1,
      anon_sym_snmpObj,
    ACTIONS(223), 1,
      anon_sym_snmpTbl,
    ACTIONS(225), 1,
      anon_sym_snmpIface,
    STATE(235), 1,
      sym_data_structure_type,
    ACTIONS(21), 2,
      anon_sym_abstract,
      anon_sym_local,
    ACTIONS(23), 2,
      anon_sym_union,
      anon_sym_struct,
    STATE(93), 2,
      sym_attribute,
      aux_sym_typedef_definition_repeat1,
    STATE(130), 2,
      sym_class_modifier,
      aux_sym_class_definition_repeat1,
  [1171] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_AT,
    STATE(32), 2,
      sym_attribute,
      aux_sym_typedef_definition_repeat1,
    ACTIONS(227), 15,
      anon_sym_void,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [1199] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_AT,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    STATE(69), 1,
      sym_attribute_argument_list,
    ACTIONS(167), 15,
      anon_sym_void,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [1229] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_SEMI,
    ACTIONS(234), 16,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [1254] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_SEMI,
    ACTIONS(238), 16,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [1279] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_SEMI,
    ACTIONS(242), 16,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [1304] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(141), 1,
      sym_type,
    STATE(238), 1,
      sym_variable,
    ACTIONS(96), 15,
      anon_sym_void,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [1331] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(141), 1,
      sym_type,
    STATE(281), 1,
      sym_variable,
    ACTIONS(96), 15,
      anon_sym_void,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [1358] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 2,
      anon_sym_RPAREN,
      anon_sym_AT,
    ACTIONS(246), 15,
      anon_sym_void,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [1383] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_SEMI,
    ACTIONS(248), 16,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [1408] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_SEMI,
    ACTIONS(252), 16,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [1433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 17,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [1456] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_SEMI,
    ACTIONS(258), 16,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [1481] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_SEMI,
    ACTIONS(262), 16,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [1506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 17,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [1529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 17,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [1552] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 2,
      anon_sym_RPAREN,
      anon_sym_AT,
    ACTIONS(270), 15,
      anon_sym_void,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [1577] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_SEMI,
    ACTIONS(274), 16,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [1602] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(141), 1,
      sym_type,
    STATE(242), 1,
      sym_variable,
    ACTIONS(96), 15,
      anon_sym_void,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [1629] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_SEMI,
    ACTIONS(278), 16,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [1654] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 17,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [1677] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_SEMI,
    ACTIONS(284), 16,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [1702] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(141), 1,
      sym_type,
    STATE(268), 1,
      sym_variable,
    ACTIONS(96), 15,
      anon_sym_void,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [1729] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_SEMI,
    ACTIONS(288), 16,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [1754] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 16,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [1776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 16,
      anon_sym_void,
      anon_sym_static,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [1798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 16,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [1820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 16,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [1842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 16,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [1864] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 16,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [1886] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 16,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [1908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 16,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [1930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 16,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [1952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 16,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [1974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 16,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [1996] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 16,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [2018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 16,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [2040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 16,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [2062] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_AT,
    ACTIONS(201), 15,
      anon_sym_void,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [2086] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 16,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [2108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 16,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [2130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 16,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [2152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 16,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [2174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 16,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [2196] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 16,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [2218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 16,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [2240] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 16,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [2262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 16,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [2284] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_AT,
    ACTIONS(197), 15,
      anon_sym_void,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [2308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 16,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [2330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 16,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [2352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 16,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [2374] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_AT,
    ACTIONS(167), 15,
      anon_sym_void,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [2398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 16,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [2420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 16,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [2442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 16,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [2464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 16,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [2486] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_AT,
    ACTIONS(205), 15,
      anon_sym_void,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [2510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 16,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [2532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 16,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [2554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 16,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [2576] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    STATE(97), 1,
      sym_attribute_argument_list,
    ACTIONS(165), 13,
      anon_sym_typedef,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [2601] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_AT,
    STATE(93), 2,
      sym_attribute,
      aux_sym_typedef_definition_repeat1,
    ACTIONS(348), 12,
      anon_sym_typedef,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
  [2626] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 15,
      anon_sym_void,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
      sym_identifier,
  [2647] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 13,
      anon_sym_typedef,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [2666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 13,
      anon_sym_typedef,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [2685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 13,
      anon_sym_typedef,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [2704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 13,
      anon_sym_typedef,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_snmpObj,
      anon_sym_snmpTbl,
      anon_sym_snmpIface,
      anon_sym_AT,
  [2723] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_RBRACE,
    ACTIONS(357), 1,
      sym_tag_number,
    ACTIONS(359), 1,
      sym_identifier,
    ACTIONS(361), 1,
      anon_sym_AT,
    STATE(274), 1,
      sym_tag,
    STATE(107), 2,
      sym_snmp_rpc,
      aux_sym_snmp_rpc_block_repeat1,
    STATE(113), 2,
      sym_attribute,
      aux_sym_typedef_definition_repeat1,
  [2750] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_tag_number,
    ACTIONS(359), 1,
      sym_identifier,
    ACTIONS(361), 1,
      anon_sym_AT,
    ACTIONS(363), 1,
      anon_sym_RBRACE,
    STATE(274), 1,
      sym_tag,
    STATE(99), 2,
      sym_snmp_rpc,
      aux_sym_snmp_rpc_block_repeat1,
    STATE(113), 2,
      sym_attribute,
      aux_sym_typedef_definition_repeat1,
  [2777] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_RBRACE,
    ACTIONS(367), 1,
      sym_tag_number,
    ACTIONS(370), 1,
      sym_identifier,
    ACTIONS(373), 1,
      anon_sym_AT,
    STATE(101), 1,
      aux_sym_enum_block_repeat1,
    STATE(259), 1,
      sym_enum_field,
    STATE(260), 1,
      sym_tag,
    STATE(111), 2,
      sym_attribute,
      aux_sym_typedef_definition_repeat1,
  [2806] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_RBRACE,
    ACTIONS(378), 1,
      sym_tag_number,
    ACTIONS(381), 1,
      sym_identifier,
    ACTIONS(384), 1,
      anon_sym_AT,
    STATE(262), 1,
      sym_tag,
    STATE(102), 2,
      sym_rpc,
      aux_sym_rpc_block_repeat1,
    STATE(112), 2,
      sym_attribute,
      aux_sym_typedef_definition_repeat1,
  [2833] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_tag_number,
    ACTIONS(361), 1,
      anon_sym_AT,
    ACTIONS(387), 1,
      anon_sym_RBRACE,
    ACTIONS(389), 1,
      sym_identifier,
    STATE(101), 1,
      aux_sym_enum_block_repeat1,
    STATE(259), 1,
      sym_enum_field,
    STATE(260), 1,
      sym_tag,
    STATE(111), 2,
      sym_attribute,
      aux_sym_typedef_definition_repeat1,
  [2862] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_tag_number,
    ACTIONS(361), 1,
      anon_sym_AT,
    ACTIONS(391), 1,
      anon_sym_RBRACE,
    ACTIONS(393), 1,
      sym_identifier,
    STATE(262), 1,
      sym_tag,
    STATE(106), 2,
      sym_rpc,
      aux_sym_rpc_block_repeat1,
    STATE(112), 2,
      sym_attribute,
      aux_sym_typedef_definition_repeat1,
  [2889] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_tag_number,
    ACTIONS(361), 1,
      anon_sym_AT,
    ACTIONS(389), 1,
      sym_identifier,
    ACTIONS(395), 1,
      anon_sym_RBRACE,
    STATE(103), 1,
      aux_sym_enum_block_repeat1,
    STATE(259), 1,
      sym_enum_field,
    STATE(260), 1,
      sym_tag,
    STATE(111), 2,
      sym_attribute,
      aux_sym_typedef_definition_repeat1,
  [2918] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_tag_number,
    ACTIONS(361), 1,
      anon_sym_AT,
    ACTIONS(393), 1,
      sym_identifier,
    ACTIONS(397), 1,
      anon_sym_RBRACE,
    STATE(262), 1,
      sym_tag,
    STATE(102), 2,
      sym_rpc,
      aux_sym_rpc_block_repeat1,
    STATE(112), 2,
      sym_attribute,
      aux_sym_typedef_definition_repeat1,
  [2945] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_RBRACE,
    ACTIONS(401), 1,
      sym_tag_number,
    ACTIONS(404), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_AT,
    STATE(274), 1,
      sym_tag,
    STATE(107), 2,
      sym_snmp_rpc,
      aux_sym_snmp_rpc_block_repeat1,
    STATE(113), 2,
      sym_attribute,
      aux_sym_typedef_definition_repeat1,
  [2972] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_SEMI,
    ACTIONS(412), 1,
      anon_sym_in,
    ACTIONS(414), 1,
      anon_sym_out,
    ACTIONS(416), 1,
      anon_sym_throw,
    STATE(144), 1,
      sym_rpc_in,
    STATE(181), 1,
      sym_rpc_out,
    STATE(247), 1,
      sym_rpc_throw,
  [2997] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_in,
    ACTIONS(414), 1,
      anon_sym_out,
    ACTIONS(416), 1,
      anon_sym_throw,
    ACTIONS(418), 1,
      anon_sym_SEMI,
    STATE(117), 1,
      sym_rpc_in,
    STATE(176), 1,
      sym_rpc_out,
    STATE(237), 1,
      sym_rpc_throw,
  [3022] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_in,
    ACTIONS(414), 1,
      anon_sym_out,
    ACTIONS(416), 1,
      anon_sym_throw,
    ACTIONS(420), 1,
      anon_sym_SEMI,
    STATE(132), 1,
      sym_rpc_in,
    STATE(171), 1,
      sym_rpc_out,
    STATE(291), 1,
      sym_rpc_throw,
  [3047] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_tag_number,
    ACTIONS(361), 1,
      anon_sym_AT,
    ACTIONS(422), 1,
      sym_identifier,
    STATE(230), 1,
      sym_tag,
    STATE(147), 2,
      sym_attribute,
      aux_sym_typedef_definition_repeat1,
  [3067] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_tag_number,
    ACTIONS(361), 1,
      anon_sym_AT,
    ACTIONS(424), 1,
      sym_identifier,
    STATE(287), 1,
      sym_tag,
    STATE(147), 2,
      sym_attribute,
      aux_sym_typedef_definition_repeat1,
  [3087] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_tag_number,
    ACTIONS(361), 1,
      anon_sym_AT,
    ACTIONS(426), 1,
      sym_identifier,
    STATE(270), 1,
      sym_tag,
    STATE(147), 2,
      sym_attribute,
      aux_sym_typedef_definition_repeat1,
  [3107] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_tag_number,
    ACTIONS(428), 1,
      anon_sym_RBRACE,
    ACTIONS(430), 1,
      sym_identifier,
    STATE(258), 1,
      sym_tag,
    STATE(115), 2,
      sym_module_field,
      aux_sym_module_block_repeat1,
  [3127] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_RBRACE,
    ACTIONS(434), 1,
      sym_tag_number,
    ACTIONS(437), 1,
      sym_identifier,
    STATE(258), 1,
      sym_tag,
    STATE(115), 2,
      sym_module_field,
      aux_sym_module_block_repeat1,
  [3147] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_tag_number,
    ACTIONS(430), 1,
      sym_identifier,
    ACTIONS(440), 1,
      anon_sym_RBRACE,
    STATE(258), 1,
      sym_tag,
    STATE(114), 2,
      sym_module_field,
      aux_sym_module_block_repeat1,
  [3167] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_out,
    ACTIONS(416), 1,
      anon_sym_throw,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    STATE(198), 1,
      sym_rpc_out,
    STATE(253), 1,
      sym_rpc_throw,
  [3186] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_COLON,
    ACTIONS(446), 1,
      anon_sym_LBRACE,
    STATE(86), 1,
      sym_data_structure_block,
    STATE(136), 2,
      sym_class_inheritance,
      aux_sym_class_definition_repeat2,
  [3203] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_COLON,
    ACTIONS(446), 1,
      anon_sym_LBRACE,
    STATE(60), 1,
      sym_data_structure_block,
    STATE(161), 2,
      sym_class_inheritance,
      aux_sym_class_definition_repeat2,
  [3220] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_COLON,
    ACTIONS(446), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym_data_structure_block,
    STATE(161), 2,
      sym_class_inheritance,
      aux_sym_class_definition_repeat2,
  [3237] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_COLON,
    ACTIONS(446), 1,
      anon_sym_LBRACE,
    STATE(86), 1,
      sym_data_structure_block,
    STATE(161), 2,
      sym_class_inheritance,
      aux_sym_class_definition_repeat2,
  [3254] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_COLON,
    ACTIONS(448), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym_snmp_rpc_block,
    STATE(124), 2,
      sym_class_inheritance,
      aux_sym_class_definition_repeat2,
  [3271] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_COLON,
    ACTIONS(446), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      sym_data_structure_block,
    STATE(120), 2,
      sym_class_inheritance,
      aux_sym_class_definition_repeat2,
  [3288] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_COLON,
    ACTIONS(448), 1,
      anon_sym_LBRACE,
    STATE(82), 1,
      sym_snmp_rpc_block,
    STATE(161), 2,
      sym_class_inheritance,
      aux_sym_class_definition_repeat2,
  [3305] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_COLON,
    ACTIONS(446), 1,
      anon_sym_LBRACE,
    STATE(60), 1,
      sym_data_structure_block,
    STATE(134), 2,
      sym_class_inheritance,
      aux_sym_class_definition_repeat2,
  [3322] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LPAREN,
    STATE(191), 1,
      sym_argument_list,
    ACTIONS(450), 3,
      anon_sym_null,
      anon_sym_void,
      sym_identifier,
  [3337] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_EQ,
    STATE(182), 1,
      sym_default_value,
    ACTIONS(454), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3352] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LPAREN,
    STATE(210), 1,
      sym_argument_list,
    ACTIONS(458), 3,
      anon_sym_null,
      anon_sym_void,
      sym_identifier,
  [3367] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_COLON,
    ACTIONS(446), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      sym_data_structure_block,
    STATE(161), 2,
      sym_class_inheritance,
      aux_sym_class_definition_repeat2,
  [3384] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_class,
    ACTIONS(21), 2,
      anon_sym_abstract,
      anon_sym_local,
    STATE(133), 2,
      sym_class_modifier,
      aux_sym_class_definition_repeat1,
  [3399] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_COLON,
    ACTIONS(446), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_data_structure_block,
    STATE(119), 2,
      sym_class_inheritance,
      aux_sym_class_definition_repeat2,
  [3416] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_SEMI,
    ACTIONS(414), 1,
      anon_sym_out,
    ACTIONS(416), 1,
      anon_sym_throw,
    STATE(181), 1,
      sym_rpc_out,
    STATE(247), 1,
      sym_rpc_throw,
  [3435] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_class,
    ACTIONS(464), 2,
      anon_sym_abstract,
      anon_sym_local,
    STATE(133), 2,
      sym_class_modifier,
      aux_sym_class_definition_repeat1,
  [3450] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_COLON,
    ACTIONS(446), 1,
      anon_sym_LBRACE,
    STATE(72), 1,
      sym_data_structure_block,
    STATE(161), 2,
      sym_class_inheritance,
      aux_sym_class_definition_repeat2,
  [3467] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_COLON,
    ACTIONS(446), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_data_structure_block,
    STATE(161), 2,
      sym_class_inheritance,
      aux_sym_class_definition_repeat2,
  [3484] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_COLON,
    ACTIONS(446), 1,
      anon_sym_LBRACE,
    STATE(77), 1,
      sym_data_structure_block,
    STATE(161), 2,
      sym_class_inheritance,
      aux_sym_class_definition_repeat2,
  [3501] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_COLON,
    ACTIONS(448), 1,
      anon_sym_LBRACE,
    STATE(81), 1,
      sym_snmp_rpc_block,
    STATE(161), 2,
      sym_class_inheritance,
      aux_sym_class_definition_repeat2,
  [3518] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_EQ,
    STATE(179), 1,
      sym_default_value,
    ACTIONS(467), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3533] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_COLON,
    ACTIONS(446), 1,
      anon_sym_LBRACE,
    STATE(72), 1,
      sym_data_structure_block,
    STATE(129), 2,
      sym_class_inheritance,
      aux_sym_class_definition_repeat2,
  [3550] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_COLON,
    ACTIONS(446), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym_data_structure_block,
    STATE(135), 2,
      sym_class_inheritance,
      aux_sym_class_definition_repeat2,
  [3567] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      sym_identifier,
    STATE(263), 1,
      sym_type_specifier,
    ACTIONS(469), 3,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_LBRACK_RBRACK,
  [3582] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_COLON,
    ACTIONS(446), 1,
      anon_sym_LBRACE,
    STATE(70), 1,
      sym_data_structure_block,
    STATE(121), 2,
      sym_class_inheritance,
      aux_sym_class_definition_repeat2,
  [3599] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_COLON,
    ACTIONS(448), 1,
      anon_sym_LBRACE,
    STATE(82), 1,
      sym_snmp_rpc_block,
    STATE(137), 2,
      sym_class_inheritance,
      aux_sym_class_definition_repeat2,
  [3616] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_out,
    ACTIONS(416), 1,
      anon_sym_throw,
    ACTIONS(418), 1,
      anon_sym_SEMI,
    STATE(176), 1,
      sym_rpc_out,
    STATE(237), 1,
      sym_rpc_throw,
  [3635] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_class,
    ACTIONS(21), 2,
      anon_sym_abstract,
      anon_sym_local,
    STATE(133), 2,
      sym_class_modifier,
      aux_sym_class_definition_repeat1,
  [3650] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym_LPAREN,
    STATE(184), 1,
      sym_attribute_argument_list,
    ACTIONS(165), 3,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
  [3665] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_AT,
    ACTIONS(348), 2,
      sym_tag_number,
      sym_identifier,
    STATE(147), 2,
      sym_attribute,
      aux_sym_typedef_definition_repeat1,
  [3680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 4,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
  [3690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 4,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
  [3700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 4,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_LBRACK_RBRACK,
      sym_identifier,
  [3710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 4,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
  [3720] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_COLON,
    ACTIONS(488), 1,
      anon_sym_LBRACE,
    STATE(54), 1,
      sym_module_block,
    STATE(226), 1,
      sym_module_inheritance,
  [3736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 4,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
  [3746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 4,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
  [3756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 4,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
  [3766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 4,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
  [3776] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_COLON,
    ACTIONS(488), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_module_block,
    STATE(223), 1,
      sym_module_inheritance,
  [3792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 4,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
  [3802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 4,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
  [3812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 4,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
  [3822] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_COLON,
    ACTIONS(505), 1,
      anon_sym_LBRACE,
    STATE(161), 2,
      sym_class_inheritance,
      aux_sym_class_definition_repeat2,
  [3836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 4,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
  [3846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3855] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_EQ,
    ACTIONS(509), 1,
      anon_sym_COMMA,
    STATE(249), 1,
      sym_default_value,
  [3868] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_SEMI,
    ACTIONS(513), 1,
      anon_sym_in,
    STATE(245), 1,
      sym_snmp_rpc_in,
  [3881] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      sym_identifier,
    STATE(83), 1,
      sym_attribute_argument_list,
  [3894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 3,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
  [3903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 3,
      anon_sym_SEMI,
      anon_sym_out,
      anon_sym_throw,
  [3912] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LPAREN,
    ACTIONS(521), 1,
      sym_identifier,
    STATE(248), 1,
      sym_argument_list,
  [3925] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    ACTIONS(523), 1,
      sym_identifier,
    STATE(25), 1,
      sym_attribute_argument_list,
  [3938] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_SEMI,
    ACTIONS(416), 1,
      anon_sym_throw,
    STATE(247), 1,
      sym_rpc_throw,
  [3951] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_RPAREN,
    ACTIONS(527), 1,
      sym_identifier,
    STATE(177), 1,
      aux_sym_module_inheritance_repeat1,
  [3964] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym_LPAREN,
    ACTIONS(529), 1,
      sym_identifier,
    STATE(186), 1,
      sym_attribute_argument_list,
  [3977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 3,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
  [3986] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_RPAREN,
    ACTIONS(535), 1,
      sym_identifier,
    STATE(175), 1,
      aux_sym_module_inheritance_repeat1,
  [3999] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_throw,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    STATE(253), 1,
      sym_rpc_throw,
  [4012] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_RPAREN,
    ACTIONS(540), 1,
      sym_identifier,
    STATE(175), 1,
      aux_sym_module_inheritance_repeat1,
  [4025] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(542), 1,
      sym_identifier,
    STATE(95), 1,
      sym_attribute_argument_list,
  [4038] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4056] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_throw,
    ACTIONS(418), 1,
      anon_sym_SEMI,
    STATE(237), 1,
      sym_rpc_throw,
  [4069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 3,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
  [4087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 3,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
  [4096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 3,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
  [4105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 3,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
  [4114] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_in,
    ACTIONS(548), 1,
      anon_sym_SEMI,
    STATE(232), 1,
      sym_snmp_rpc_in,
  [4127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 3,
      anon_sym_SEMI,
      anon_sym_out,
      anon_sym_throw,
  [4136] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_in,
    ACTIONS(552), 1,
      anon_sym_SEMI,
    STATE(272), 1,
      sym_snmp_rpc_in,
  [4149] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 3,
      anon_sym_SEMI,
      anon_sym_out,
      anon_sym_throw,
  [4158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 3,
      anon_sym_SEMI,
      anon_sym_out,
      anon_sym_throw,
  [4167] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_EQ,
    ACTIONS(558), 1,
      anon_sym_COMMA,
    STATE(231), 1,
      sym_default_value,
  [4180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 3,
      anon_sym_SEMI,
      anon_sym_out,
      anon_sym_throw,
  [4189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 3,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
  [4198] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_EQ,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    STATE(295), 1,
      sym_default_value,
  [4211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4229] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_throw,
    ACTIONS(570), 1,
      anon_sym_SEMI,
    STATE(264), 1,
      sym_rpc_throw,
  [4242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4251] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      anon_sym_COMMA,
    ACTIONS(576), 1,
      anon_sym_RPAREN,
  [4261] = 3,
    ACTIONS(578), 1,
      anon_sym_RPAREN,
    ACTIONS(580), 1,
      sym_attribute_content,
    ACTIONS(582), 1,
      sym_comment,
  [4271] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      sym_identifier,
    STATE(175), 1,
      aux_sym_module_inheritance_repeat1,
  [4281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_LBRACE,
    STATE(78), 1,
      sym_data_structure_block,
  [4291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      sym_rpc_block,
  [4301] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_COMMA,
    ACTIONS(590), 1,
      anon_sym_RPAREN,
  [4311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_RPAREN,
    ACTIONS(592), 1,
      anon_sym_COMMA,
  [4321] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_COMMA,
    ACTIONS(594), 1,
      anon_sym_RPAREN,
  [4331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 2,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [4339] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      anon_sym_COMMA,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
  [4349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 2,
      anon_sym_SEMI,
      anon_sym_throw,
  [4357] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      anon_sym_LBRACE,
    STATE(52), 1,
      sym_enum_block,
  [4367] = 3,
    ACTIONS(582), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_DQUOTE,
    ACTIONS(606), 1,
      sym_string_content,
  [4377] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_DQUOTE,
    STATE(196), 1,
      sym_string,
  [4387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [4395] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_RPAREN,
    ACTIONS(574), 1,
      anon_sym_COMMA,
  [4405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_LBRACE,
    STATE(87), 1,
      sym_data_structure_block,
  [4415] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_LBRACE,
    STATE(90), 1,
      sym_rpc_block,
  [4425] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_enum_block,
  [4435] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      anon_sym_COMMA,
    ACTIONS(608), 1,
      anon_sym_LBRACE,
  [4445] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    ACTIONS(588), 1,
      anon_sym_COMMA,
  [4455] = 3,
    ACTIONS(582), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_RPAREN,
    ACTIONS(612), 1,
      sym_attribute_content,
  [4465] = 3,
    ACTIONS(582), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_RPAREN,
    ACTIONS(616), 1,
      sym_attribute_content,
  [4475] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_LBRACE,
    STATE(44), 1,
      sym_module_block,
  [4485] = 3,
    ACTIONS(582), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_RPAREN,
    ACTIONS(620), 1,
      sym_attribute_content,
  [4495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 2,
      sym_tag_number,
      sym_identifier,
  [4503] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_module_block,
  [4513] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      sym_identifier,
    STATE(202), 1,
      aux_sym_module_inheritance_repeat1,
  [4523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      sym_identifier,
  [4530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      anon_sym_SEMI,
  [4537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      sym_identifier,
  [4544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_COMMA,
  [4551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_SEMI,
  [4558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_RPAREN,
  [4565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      sym_identifier,
  [4572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      sym_identifier,
  [4579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      sym_identifier,
  [4586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_SEMI,
  [4593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_SEMI,
  [4600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      sym_identifier,
  [4607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      sym_identifier,
  [4614] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      anon_sym_SEMI,
  [4621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      anon_sym_SEMI,
  [4628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      sym_identifier,
  [4635] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      sym_identifier,
  [4642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_SEMI,
  [4649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      sym_identifier,
  [4656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_SEMI,
  [4663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_SEMI,
  [4670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_COMMA,
  [4677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      sym_identifier,
  [4684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      sym_identifier,
  [4691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_SEMI,
  [4698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_SEMI,
  [4705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      anon_sym_COMMA,
  [4712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_SEMI,
  [4719] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_DQUOTE,
  [4726] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      anon_sym_COLON,
  [4733] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      sym_identifier,
  [4740] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_COMMA,
  [4747] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      sym_identifier,
  [4754] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_COMMA,
  [4761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      sym_identifier,
  [4768] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      sym_identifier,
  [4775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_SEMI,
  [4782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_SEMI,
  [4789] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_SEMI,
  [4796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_COMMA,
  [4803] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      anon_sym_SEMI,
  [4810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      anon_sym_SEMI,
  [4817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      sym_identifier,
  [4824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      sym_identifier,
  [4831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_SEMI,
  [4838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_LPAREN,
  [4845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      sym_identifier,
  [4852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      ts_builtin_sym_end,
  [4859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      sym_identifier,
  [4866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      sym_identifier,
  [4873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      sym_identifier,
  [4880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      sym_identifier,
  [4887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      sym_identifier,
  [4894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_SEMI,
  [4901] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      sym_identifier,
  [4908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      sym_identifier,
  [4915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      sym_identifier,
  [4922] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      sym_identifier,
  [4929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      sym_path,
  [4936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      sym_identifier,
  [4943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      sym_identifier,
  [4950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_RPAREN,
  [4957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_COLON,
  [4964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_SEMI,
  [4971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_SEMI,
  [4978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_RPAREN,
  [4985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      sym_identifier,
  [4992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_COMMA,
  [4999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 73,
  [SMALL_STATE(4)] = 146,
  [SMALL_STATE(5)] = 201,
  [SMALL_STATE(6)] = 251,
  [SMALL_STATE(7)] = 301,
  [SMALL_STATE(8)] = 351,
  [SMALL_STATE(9)] = 398,
  [SMALL_STATE(10)] = 445,
  [SMALL_STATE(11)] = 490,
  [SMALL_STATE(12)] = 530,
  [SMALL_STATE(13)] = 570,
  [SMALL_STATE(14)] = 610,
  [SMALL_STATE(15)] = 652,
  [SMALL_STATE(16)] = 685,
  [SMALL_STATE(17)] = 719,
  [SMALL_STATE(18)] = 747,
  [SMALL_STATE(19)] = 775,
  [SMALL_STATE(20)] = 803,
  [SMALL_STATE(21)] = 837,
  [SMALL_STATE(22)] = 865,
  [SMALL_STATE(23)] = 899,
  [SMALL_STATE(24)] = 926,
  [SMALL_STATE(25)] = 953,
  [SMALL_STATE(26)] = 980,
  [SMALL_STATE(27)] = 1007,
  [SMALL_STATE(28)] = 1034,
  [SMALL_STATE(29)] = 1061,
  [SMALL_STATE(30)] = 1094,
  [SMALL_STATE(31)] = 1121,
  [SMALL_STATE(32)] = 1171,
  [SMALL_STATE(33)] = 1199,
  [SMALL_STATE(34)] = 1229,
  [SMALL_STATE(35)] = 1254,
  [SMALL_STATE(36)] = 1279,
  [SMALL_STATE(37)] = 1304,
  [SMALL_STATE(38)] = 1331,
  [SMALL_STATE(39)] = 1358,
  [SMALL_STATE(40)] = 1383,
  [SMALL_STATE(41)] = 1408,
  [SMALL_STATE(42)] = 1433,
  [SMALL_STATE(43)] = 1456,
  [SMALL_STATE(44)] = 1481,
  [SMALL_STATE(45)] = 1506,
  [SMALL_STATE(46)] = 1529,
  [SMALL_STATE(47)] = 1552,
  [SMALL_STATE(48)] = 1577,
  [SMALL_STATE(49)] = 1602,
  [SMALL_STATE(50)] = 1629,
  [SMALL_STATE(51)] = 1654,
  [SMALL_STATE(52)] = 1677,
  [SMALL_STATE(53)] = 1702,
  [SMALL_STATE(54)] = 1729,
  [SMALL_STATE(55)] = 1754,
  [SMALL_STATE(56)] = 1776,
  [SMALL_STATE(57)] = 1798,
  [SMALL_STATE(58)] = 1820,
  [SMALL_STATE(59)] = 1842,
  [SMALL_STATE(60)] = 1864,
  [SMALL_STATE(61)] = 1886,
  [SMALL_STATE(62)] = 1908,
  [SMALL_STATE(63)] = 1930,
  [SMALL_STATE(64)] = 1952,
  [SMALL_STATE(65)] = 1974,
  [SMALL_STATE(66)] = 1996,
  [SMALL_STATE(67)] = 2018,
  [SMALL_STATE(68)] = 2040,
  [SMALL_STATE(69)] = 2062,
  [SMALL_STATE(70)] = 2086,
  [SMALL_STATE(71)] = 2108,
  [SMALL_STATE(72)] = 2130,
  [SMALL_STATE(73)] = 2152,
  [SMALL_STATE(74)] = 2174,
  [SMALL_STATE(75)] = 2196,
  [SMALL_STATE(76)] = 2218,
  [SMALL_STATE(77)] = 2240,
  [SMALL_STATE(78)] = 2262,
  [SMALL_STATE(79)] = 2284,
  [SMALL_STATE(80)] = 2308,
  [SMALL_STATE(81)] = 2330,
  [SMALL_STATE(82)] = 2352,
  [SMALL_STATE(83)] = 2374,
  [SMALL_STATE(84)] = 2398,
  [SMALL_STATE(85)] = 2420,
  [SMALL_STATE(86)] = 2442,
  [SMALL_STATE(87)] = 2464,
  [SMALL_STATE(88)] = 2486,
  [SMALL_STATE(89)] = 2510,
  [SMALL_STATE(90)] = 2532,
  [SMALL_STATE(91)] = 2554,
  [SMALL_STATE(92)] = 2576,
  [SMALL_STATE(93)] = 2601,
  [SMALL_STATE(94)] = 2626,
  [SMALL_STATE(95)] = 2647,
  [SMALL_STATE(96)] = 2666,
  [SMALL_STATE(97)] = 2685,
  [SMALL_STATE(98)] = 2704,
  [SMALL_STATE(99)] = 2723,
  [SMALL_STATE(100)] = 2750,
  [SMALL_STATE(101)] = 2777,
  [SMALL_STATE(102)] = 2806,
  [SMALL_STATE(103)] = 2833,
  [SMALL_STATE(104)] = 2862,
  [SMALL_STATE(105)] = 2889,
  [SMALL_STATE(106)] = 2918,
  [SMALL_STATE(107)] = 2945,
  [SMALL_STATE(108)] = 2972,
  [SMALL_STATE(109)] = 2997,
  [SMALL_STATE(110)] = 3022,
  [SMALL_STATE(111)] = 3047,
  [SMALL_STATE(112)] = 3067,
  [SMALL_STATE(113)] = 3087,
  [SMALL_STATE(114)] = 3107,
  [SMALL_STATE(115)] = 3127,
  [SMALL_STATE(116)] = 3147,
  [SMALL_STATE(117)] = 3167,
  [SMALL_STATE(118)] = 3186,
  [SMALL_STATE(119)] = 3203,
  [SMALL_STATE(120)] = 3220,
  [SMALL_STATE(121)] = 3237,
  [SMALL_STATE(122)] = 3254,
  [SMALL_STATE(123)] = 3271,
  [SMALL_STATE(124)] = 3288,
  [SMALL_STATE(125)] = 3305,
  [SMALL_STATE(126)] = 3322,
  [SMALL_STATE(127)] = 3337,
  [SMALL_STATE(128)] = 3352,
  [SMALL_STATE(129)] = 3367,
  [SMALL_STATE(130)] = 3384,
  [SMALL_STATE(131)] = 3399,
  [SMALL_STATE(132)] = 3416,
  [SMALL_STATE(133)] = 3435,
  [SMALL_STATE(134)] = 3450,
  [SMALL_STATE(135)] = 3467,
  [SMALL_STATE(136)] = 3484,
  [SMALL_STATE(137)] = 3501,
  [SMALL_STATE(138)] = 3518,
  [SMALL_STATE(139)] = 3533,
  [SMALL_STATE(140)] = 3550,
  [SMALL_STATE(141)] = 3567,
  [SMALL_STATE(142)] = 3582,
  [SMALL_STATE(143)] = 3599,
  [SMALL_STATE(144)] = 3616,
  [SMALL_STATE(145)] = 3635,
  [SMALL_STATE(146)] = 3650,
  [SMALL_STATE(147)] = 3665,
  [SMALL_STATE(148)] = 3680,
  [SMALL_STATE(149)] = 3690,
  [SMALL_STATE(150)] = 3700,
  [SMALL_STATE(151)] = 3710,
  [SMALL_STATE(152)] = 3720,
  [SMALL_STATE(153)] = 3736,
  [SMALL_STATE(154)] = 3746,
  [SMALL_STATE(155)] = 3756,
  [SMALL_STATE(156)] = 3766,
  [SMALL_STATE(157)] = 3776,
  [SMALL_STATE(158)] = 3792,
  [SMALL_STATE(159)] = 3802,
  [SMALL_STATE(160)] = 3812,
  [SMALL_STATE(161)] = 3822,
  [SMALL_STATE(162)] = 3836,
  [SMALL_STATE(163)] = 3846,
  [SMALL_STATE(164)] = 3855,
  [SMALL_STATE(165)] = 3868,
  [SMALL_STATE(166)] = 3881,
  [SMALL_STATE(167)] = 3894,
  [SMALL_STATE(168)] = 3903,
  [SMALL_STATE(169)] = 3912,
  [SMALL_STATE(170)] = 3925,
  [SMALL_STATE(171)] = 3938,
  [SMALL_STATE(172)] = 3951,
  [SMALL_STATE(173)] = 3964,
  [SMALL_STATE(174)] = 3977,
  [SMALL_STATE(175)] = 3986,
  [SMALL_STATE(176)] = 3999,
  [SMALL_STATE(177)] = 4012,
  [SMALL_STATE(178)] = 4025,
  [SMALL_STATE(179)] = 4038,
  [SMALL_STATE(180)] = 4047,
  [SMALL_STATE(181)] = 4056,
  [SMALL_STATE(182)] = 4069,
  [SMALL_STATE(183)] = 4078,
  [SMALL_STATE(184)] = 4087,
  [SMALL_STATE(185)] = 4096,
  [SMALL_STATE(186)] = 4105,
  [SMALL_STATE(187)] = 4114,
  [SMALL_STATE(188)] = 4127,
  [SMALL_STATE(189)] = 4136,
  [SMALL_STATE(190)] = 4149,
  [SMALL_STATE(191)] = 4158,
  [SMALL_STATE(192)] = 4167,
  [SMALL_STATE(193)] = 4180,
  [SMALL_STATE(194)] = 4189,
  [SMALL_STATE(195)] = 4198,
  [SMALL_STATE(196)] = 4211,
  [SMALL_STATE(197)] = 4220,
  [SMALL_STATE(198)] = 4229,
  [SMALL_STATE(199)] = 4242,
  [SMALL_STATE(200)] = 4251,
  [SMALL_STATE(201)] = 4261,
  [SMALL_STATE(202)] = 4271,
  [SMALL_STATE(203)] = 4281,
  [SMALL_STATE(204)] = 4291,
  [SMALL_STATE(205)] = 4301,
  [SMALL_STATE(206)] = 4311,
  [SMALL_STATE(207)] = 4321,
  [SMALL_STATE(208)] = 4331,
  [SMALL_STATE(209)] = 4339,
  [SMALL_STATE(210)] = 4349,
  [SMALL_STATE(211)] = 4357,
  [SMALL_STATE(212)] = 4367,
  [SMALL_STATE(213)] = 4377,
  [SMALL_STATE(214)] = 4387,
  [SMALL_STATE(215)] = 4395,
  [SMALL_STATE(216)] = 4405,
  [SMALL_STATE(217)] = 4415,
  [SMALL_STATE(218)] = 4425,
  [SMALL_STATE(219)] = 4435,
  [SMALL_STATE(220)] = 4445,
  [SMALL_STATE(221)] = 4455,
  [SMALL_STATE(222)] = 4465,
  [SMALL_STATE(223)] = 4475,
  [SMALL_STATE(224)] = 4485,
  [SMALL_STATE(225)] = 4495,
  [SMALL_STATE(226)] = 4503,
  [SMALL_STATE(227)] = 4513,
  [SMALL_STATE(228)] = 4523,
  [SMALL_STATE(229)] = 4530,
  [SMALL_STATE(230)] = 4537,
  [SMALL_STATE(231)] = 4544,
  [SMALL_STATE(232)] = 4551,
  [SMALL_STATE(233)] = 4558,
  [SMALL_STATE(234)] = 4565,
  [SMALL_STATE(235)] = 4572,
  [SMALL_STATE(236)] = 4579,
  [SMALL_STATE(237)] = 4586,
  [SMALL_STATE(238)] = 4593,
  [SMALL_STATE(239)] = 4600,
  [SMALL_STATE(240)] = 4607,
  [SMALL_STATE(241)] = 4614,
  [SMALL_STATE(242)] = 4621,
  [SMALL_STATE(243)] = 4628,
  [SMALL_STATE(244)] = 4635,
  [SMALL_STATE(245)] = 4642,
  [SMALL_STATE(246)] = 4649,
  [SMALL_STATE(247)] = 4656,
  [SMALL_STATE(248)] = 4663,
  [SMALL_STATE(249)] = 4670,
  [SMALL_STATE(250)] = 4677,
  [SMALL_STATE(251)] = 4684,
  [SMALL_STATE(252)] = 4691,
  [SMALL_STATE(253)] = 4698,
  [SMALL_STATE(254)] = 4705,
  [SMALL_STATE(255)] = 4712,
  [SMALL_STATE(256)] = 4719,
  [SMALL_STATE(257)] = 4726,
  [SMALL_STATE(258)] = 4733,
  [SMALL_STATE(259)] = 4740,
  [SMALL_STATE(260)] = 4747,
  [SMALL_STATE(261)] = 4754,
  [SMALL_STATE(262)] = 4761,
  [SMALL_STATE(263)] = 4768,
  [SMALL_STATE(264)] = 4775,
  [SMALL_STATE(265)] = 4782,
  [SMALL_STATE(266)] = 4789,
  [SMALL_STATE(267)] = 4796,
  [SMALL_STATE(268)] = 4803,
  [SMALL_STATE(269)] = 4810,
  [SMALL_STATE(270)] = 4817,
  [SMALL_STATE(271)] = 4824,
  [SMALL_STATE(272)] = 4831,
  [SMALL_STATE(273)] = 4838,
  [SMALL_STATE(274)] = 4845,
  [SMALL_STATE(275)] = 4852,
  [SMALL_STATE(276)] = 4859,
  [SMALL_STATE(277)] = 4866,
  [SMALL_STATE(278)] = 4873,
  [SMALL_STATE(279)] = 4880,
  [SMALL_STATE(280)] = 4887,
  [SMALL_STATE(281)] = 4894,
  [SMALL_STATE(282)] = 4901,
  [SMALL_STATE(283)] = 4908,
  [SMALL_STATE(284)] = 4915,
  [SMALL_STATE(285)] = 4922,
  [SMALL_STATE(286)] = 4929,
  [SMALL_STATE(287)] = 4936,
  [SMALL_STATE(288)] = 4943,
  [SMALL_STATE(289)] = 4950,
  [SMALL_STATE(290)] = 4957,
  [SMALL_STATE(291)] = 4964,
  [SMALL_STATE(292)] = 4971,
  [SMALL_STATE(293)] = 4978,
  [SMALL_STATE(294)] = 4985,
  [SMALL_STATE(295)] = 4992,
  [SMALL_STATE(296)] = 4999,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(276),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(286),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(285),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(284),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(283),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(282),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(174),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(280),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(279),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(278),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(277),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_structure_block_repeat1, 2, 0, 0),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_structure_block_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_structure_block_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_structure_block_repeat1, 2, 0, 0), SHIFT_REPEAT(290),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_structure_block_repeat1, 2, 0, 0), SHIFT_REPEAT(170),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 2, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_argument_list, 2, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_argument_list, 2, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_argument_list, 3, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_argument_list, 3, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_typedef_definition_repeat1, 2, 0, 0),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typedef_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 4, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snmp_rpc_block, 2, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snmp_rpc_block, 3, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_block, 2, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_structure_block, 2, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_block, 2, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_definition, 4, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_definition, 5, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_block, 3, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_block, 2, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 3, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 3, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_structure_block, 3, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_block, 3, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_block, 3, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 3, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_definition, 3, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snmp_object_definition, 4, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 6, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_definition, 3, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_definition, 6, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 4, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snmp_rpc_block, 4, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 3, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 3, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 5, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snmp_object_definition, 3, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snmp_table_definition, 3, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 5, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snmp_interface_definition, 3, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snmp_object_definition, 5, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_structure_block, 4, 0, 0),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snmp_table_definition, 5, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_structure_definition, 3, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_block, 4, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snmp_interface_definition, 5, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snmp_interface_definition, 4, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef_definition, 4, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snmp_table_definition, 4, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_structure_definition, 4, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef_definition, 3, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 4, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_definition, 3, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typedef_definition_repeat1, 2, 0, 0),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typedef_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_qualifier, 1, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_block_repeat1, 2, 0, 0),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_block_repeat1, 2, 0, 0), SHIFT_REPEAT(257),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_block_repeat1, 2, 0, 0), SHIFT_REPEAT(195),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_block_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rpc_block_repeat1, 2, 0, 0),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpc_block_repeat1, 2, 0, 0), SHIFT_REPEAT(257),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpc_block_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpc_block_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_snmp_rpc_block_repeat1, 2, 0, 0),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_snmp_rpc_block_repeat1, 2, 0, 0), SHIFT_REPEAT(257),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_snmp_rpc_block_repeat1, 2, 0, 0), SHIFT_REPEAT(189),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_snmp_rpc_block_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_block_repeat1, 2, 0, 0),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_block_repeat1, 2, 0, 0), SHIFT_REPEAT(257),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_block_repeat1, 2, 0, 0), SHIFT_REPEAT(228),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, 0, 0),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2, 0, 0),
  [464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(174),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typedef_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 3, 0, 0),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 7, 0, 0),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 6, 0, 0),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snmp_rpc, 5, 0, 0),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 4, 0, 0),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snmp_rpc, 4, 0, 0),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snmp_rpc, 3, 0, 0),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snmp_rpc, 2, 0, 0),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 2, 0, 0),
  [502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat2, 2, 0, 0), SHIFT_REPEAT(225),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat2, 2, 0, 0),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 5, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 2, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_field, 4, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2, 0, 0),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_modifier, 1, 0, 0),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_inheritance_repeat1, 2, 0, 0),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_inheritance_repeat1, 2, 0, 0), SHIFT_REPEAT(254),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, 0, 0),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_value, 2, 0, 0),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5, 0, 0),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3, 0, 0),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_in, 2, 0, 0),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 3, 0, 0),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4, 0, 0),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_field, 3, 0, 0),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 1, 0, 0),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 2, 0, 0),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_inheritance, 2, 0, 0),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_inheritance, 2, 0, 0),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_out, 2, 0, 0),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_inheritance, 3, 0, 0),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 4, 0, 0),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_specifier, 1, 0, 0),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snmp_rpc_in, 3, 0, 0),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_throw, 2, 0, 0),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snmp_rpc_in, 4, 0, 0),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snmp_rpc_in, 5, 0, 0),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [696] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_structure_type, 1, 0, 0),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2, 0, 0),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_iop(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
