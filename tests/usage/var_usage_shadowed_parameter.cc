void foo(int a) {
  a = 1;
  {
    int a;
    a = 2;
  }
  a = 3;
}

/*
OUTPUT:
{
  "funcs": [{
      "id": 0,
      "usr": "c:@F@foo#I#",
      "short_name": "foo",
      "qualified_name": "foo",
      "definition_spelling": "1:6-1:9",
      "definition_extent": "1:1-8:2"
    }],
  "vars": [{
      "id": 0,
      "usr": "c:var_usage_shadowed_parameter.cc@9@F@foo#I#@a",
      "short_name": "a",
      "qualified_name": "a",
      "definition_spelling": "1:14-1:15",
      "definition_extent": "1:10-1:15",
      "uses": ["1:14-1:15", "2:3-2:4", "7:3-7:4"]
    }, {
      "id": 1,
      "usr": "c:var_usage_shadowed_parameter.cc@38@F@foo#I#@a",
      "short_name": "a",
      "qualified_name": "a",
      "definition_spelling": "4:9-4:10",
      "definition_extent": "4:5-4:10",
      "uses": ["4:9-4:10", "5:5-5:6"]
    }]
}
*/
