//#region InterpolatedChain

//Console.WriteLine("Interpolated Chain:");
//var text = $@"C:\dev"; // Verbatim
////var text2 = $"C:\dev Este é {text}"; // Non-verbatim

//var lista = new List<string>();
//var text3 = $@"eu quebro
//                minha linha"; // Permitido

////var outroText = $"eu também
////                    quebro minha linha"; // Erro

//var textTest = $"Será que eu consigo {lista
//        .Order()
//        .FirstOrDefault()}"; // Permitido

//var longMessage = """
//    This is a long message.
//    It has several lines.
//        Some are indented
//                more than others.
//    Some should start at the first column.
//    Some have "quoted text" in them.
//    """;
//Console.WriteLine(longMessage);
//Console.WriteLine("=============================");

//int longitude = 10;
//int latitude = 20;
//var location = $$"""
//    You are at {{{longitude}}, {{latitude}}}
//    """;
//Console.WriteLine(location);
//#endregion

//#region ListPatterns
//Console.WriteLine();
//Console.WriteLine("List Patterns:");
//int[] arr1 = { 1, 2, 10 };
//int[] arr2 = { 1, 2, 5, 10 };
//int[] arr3 = { 1, 2, 5, 6, 7, 8, 9, 10 };

//Console.WriteLine(CheckSwitch(arr1)); // 1
//Console.WriteLine(CheckSwitch(arr2)); // 1
//Console.WriteLine(CheckSwitch(arr3)); // 1

//static int CheckSwitch(int[] values)
//    => values switch
//    {
//        [1, 2, .., 10] => 1,
//        [1, 2] => 2,
//        [1, _] => 3,
//        [1, ..] => 4,
//        [..] => 50
//    };
//#endregion

//#region GenericAttributes
//[GenericAttribute<string>()]
//string Method() => default;

//public class GenericAttribute<T> : Attribute { }
//#endregion

//#region Required
//public class Person
//{
//    public required string FirstName { get; set; }
//    public required string LastName { get; set; }

//    public int? Age { get; set; }
//}

////var person = new Person(); // Erro de Required Member
////var person = new Person
////{
////    FirstName = "Gabriel",
////    LastName = "Moya"
////}; // Permitido
//#endregion

#region StringsUTF8
ReadOnlySpan<byte> text1 = new byte[] { 0x65, 0x66, 0x67, 0x68, 0x69 };
ReadOnlySpan<byte> text2 = "This is an UTF-8 string"u8;
Console.WriteLine(System.Text.Encoding.UTF8.GetString(text1));
Console.WriteLine(System.Text.Encoding.UTF8.GetString(text2));
#endregion
