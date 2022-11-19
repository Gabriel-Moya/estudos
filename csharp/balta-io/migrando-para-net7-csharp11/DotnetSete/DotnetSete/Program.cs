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
