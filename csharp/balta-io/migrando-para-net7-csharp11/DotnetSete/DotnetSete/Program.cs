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

//#region StringsUTF8
//ReadOnlySpan<byte> text1 = new byte[] { 0x65, 0x66, 0x67, 0x68, 0x69 };
//ReadOnlySpan<byte> text2 = "This is an UTF-8 string"u8;
//Console.WriteLine(System.Text.Encoding.UTF8.GetString(text1));
//Console.WriteLine(System.Text.Encoding.UTF8.GetString(text2));
//#endregion

//#region CombinedActions
//Action<string> stringAction = str => { };
//Action<object> objectAction = obj => { };

//// Creates a new delegate instance with a runtiome type of Action<string>.
//Action<string> wrappedObjectAction = new Action<string>(objectAction);

//// The two Action<string> delegate instances can now be combined.
//Action<string> combination = stringAction + wrappedObjectAction;
//#endregion

//#region Dynamic
//dynamic dyn = 1;
//object obj = 1;

//// Rest the mouse pointer over dyn and obj to seer their
//// type at compile time.
//Console.WriteLine(dyn.GetType());
//Console.WriteLine(obj.GetType());
//#endregion

//#region DefaultStruct
//var m2 = default(Measurement);
//Console.WriteLine(m2);

//Console.WriteLine(nameof(m2));
//Console.WriteLine(nameof(m2.ToString));
//Console.WriteLine(nameof(m2.Description));

//public readonly struct Measurement
//{
//    public Measurement()
//    {
//        Value = double.NaN;
//        Description = "Undefined";
//    }

//    public Measurement(double value, string description)
//    {
//        Value = value;
//        Description = description;
//    }

//    public double Value { get; init; }
//    public string Description { get; init; }

//    public override string ToString() => $"{Value} ({Description})";
//}
//#endregion

//#region DateTime
//var teste = DateTime.Now;
//Console.WriteLine(teste.Microsecond);
//Console.WriteLine(teste.Nanosecond);

//var time = TimeOnly.MaxValue;
//Console.WriteLine(time.Microsecond);
//Console.WriteLine(time.Nanosecond);
//#endregion

#region TarSupport
using System.Formats.Tar;

TarFile.CreateFromDirectory(@"C:\dev\tar", @"C:\dev\teste.tar", true);

TarFile.ExtractToDirectory(@"C:\dev\teste.tar", @"C:\dev\teste-desc", false);
#endregion
