#region InterpolatedChain
using System.Reflection.Metadata.Ecma335;

Console.WriteLine("Interpolated Chain:");
var text = $@"C:\dev"; // Verbatim
//var text2 = $"C:\dev Este é {text}"; // Non-verbatim

var lista = new List<string>();
var text3 = $@"eu quebro
                minha linha"; // Permitido

//var outroText = $"eu também
//                    quebro minha linha"; // Erro

var textTest = $"Será que eu consigo {lista
        .Order()
        .FirstOrDefault()}"; // Permitido

var longMessage = """
    This is a long message.
    It has several lines.
        Some are indented
                more than others.
    Some should start at the first column.
    Some have "quoted text" in them.
    """;
Console.WriteLine(longMessage);
Console.WriteLine("=============================");

int longitude = 10;
int latitude = 20;
var location = $$"""
    You are at {{{longitude}}, {{latitude}}}
    """;
Console.WriteLine(location);
#endregion

#region ListPatterns
Console.WriteLine();
Console.WriteLine("List Patterns:");
int[] arr1 = { 1, 2, 10 };
int[] arr2 = { 1, 2, 5, 10 };
int[] arr3 = { 1, 2, 5, 6, 7, 8, 9, 10 };

Console.WriteLine(CheckSwitch(arr1)); // 1
Console.WriteLine(CheckSwitch(arr2)); // 1
Console.WriteLine(CheckSwitch(arr3)); // 1

static int CheckSwitch(int[] values)
    => values switch
    {
        [1, 2, .., 10] => 1,
        [1, 2] => 2,
        [1, _] => 3,
        [1, ..] => 4,
        [..] => 50
    };
#endregion

#region GenericAttributes
[GenericAttribute<string>()]
string Method() => default;

public class GenericAttribute<T> : Attribute { }
#endregion
