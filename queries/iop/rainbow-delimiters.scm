(data_structure_block
  "{" @delimiter
  "}" @delimiter @sentinel) @container

(enum_block
  "{" @delimiter
  "}" @delimiter @sentinel) @container

(rpc_block
  "{" @delimiter
  "}" @delimiter @sentinel) @container

(argument_list
  "(" @delimiter
  ")" @delimiter @sentinel) @container

(attribute_argument_list
  "(" @delimiter
  ")" @delimiter @sentinel) @container

(module_block
  "{" @delimiter
  "}" @delimiter @sentinel) @container

(snmp_rpc_block
  "{" @delimiter
  "}" @delimiter @sentinel) @container

(parenthesized_expression
  "(" @delimiter
  ")" @delimiter @sentinel) @container
