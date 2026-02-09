# tree-sitter-iop

A [tree-sitter](https://tree-sitter.github.io/tree-sitter/) grammar for the [IOP](https://github.com/Intersec/lib-common) (Intersec Object Packer) interface definition language.

IOP is an IDL used by [Intersec's lib-common](https://github.com/Intersec/lib-common) for defining data structures, enums, interfaces (RPCs), modules, and type definitions with support for serialization, validation constraints, and SNMP bindings.

## Features

- Full parsing of IOP constructs: `struct`, `union`, `class`, `enum`, `interface`, `module`, `typedef`, `package`, `import`
- SNMP extensions: `snmpObj`, `snmpTbl`, `snmpIface`
- Attributes with arbitrary content (including JSON-like and expression arguments)
- Class inheritance with tags
- RPC definitions with `in`/`out`/`throw`
- Constant folding expressions in default values
- Neovim queries: highlights, textobjects, rainbow-delimiters

## Installation

### Neovim (with nvim-treesitter)

Add the following to your Neovim configuration:

```lua
require("tree-sitter-iop").setup()
```

Or with a local checkout:

```lua
require("tree-sitter-iop").setup({
  local_directory = "/path/to/tree-sitter-iop"
})
```

Then install the parser:

```vim
:TSInstall iop
```

Copy the query files to your Neovim runtime:

```bash
mkdir -p ~/.config/nvim/queries/iop
cp queries/iop/*.scm ~/.config/nvim/queries/iop/
```

### Manual (tree-sitter CLI)

```bash
# Generate the parser
npx tree-sitter generate

# Parse an IOP file
npx tree-sitter parse example.iop

# Run tests
npx tree-sitter test
```

## Supported IOP Syntax

| Construct | Example |
|-----------|---------|
| Package | `package mypackage;` |
| Import | `import foo.bar.*;` |
| Struct | `struct MyStruct { int a; };` |
| Union | `union MyUnion { int a; string b; };` |
| Enum | `enum Color { RED, GREEN = 2, BLUE, };` |
| Class | `class Child : 1 : Parent { int x; };` |
| Interface | `interface MyIface { rpc in (int a) out void; };` |
| Module | `module MyMod { MyIface iface; };` |
| Typedef | `typedef string MyString;` |
| Attributes | `@private`, `@ctype(my_t)`, `@(key:val, args)` |
| SNMP Object | `snmpObj Obj : 1 : Parent { ... };` |
| SNMP Table | `snmpTbl Tbl : 3 : Obj { ... };` |
| SNMP Interface | `snmpIface Iface : 4 : Obj { ... };` |

## Queries

### Highlights (`queries/iop/highlights.scm`)

Provides syntax highlighting for keywords, types, identifiers, constants, strings, numbers, comments, attributes, and operators.

### Textobjects (`queries/iop/textobjects.scm`)

Supports `@block.outer`, `@block.inner`, `@parameter.inner`, `@parameter.outer`, and `@assignment.rhs` for use with [nvim-treesitter-textobjects](https://github.com/nvim-treesitter/nvim-treesitter-textobjects).

### Rainbow Delimiters (`queries/iop/rainbow-delimiters.scm`)

Supports bracket colorization with [rainbow-delimiters.nvim](https://github.com/HiPhish/rainbow-delimiters.nvim).

## Development

```bash
# Install dependencies
npm install

# Generate parser from grammar.js
npx tree-sitter generate

# Run test corpus
npx tree-sitter test

# Parse a file
npx tree-sitter parse yourfile.iop

# Highlight a file
npx tree-sitter highlight yourfile.iop
```

## License

MIT
