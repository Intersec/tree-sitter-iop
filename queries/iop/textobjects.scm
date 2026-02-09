; Parameters
((argument_list
  "," @_start
  .
  (_) @parameter.inner)
  (#make-range! "parameter.outer" @_start @parameter.inner))

((argument_list
  .
  (_) @parameter.inner
  .
  ","? @_end)
  (#make-range! "parameter.outer" @parameter.inner @_end))

; Blocks
(module_definition) @block.outer
(data_structure_definition) @block.outer
(class_definition) @block.outer
(interface_definition) @block.outer
(enum_definition) @block.outer
(snmp_object_definition) @block.outer
(snmp_table_definition) @block.outer
(snmp_interface_definition) @block.outer

(_
  .
  "{"
  .
  (_) @_start @_end
  (_)? @_end
  .
  "}"
  (#make-range! "block.inner" @_start @_end))

; Assignment RHS
(value) @assignment.rhs

; RPCs as blocks
(((rpc
  (identifier) @_start
  .
  (_)
  (_)?
  ";"? @_end
  .
) (#make-range! "block.inner" @_start @_end)) @block.outer)
