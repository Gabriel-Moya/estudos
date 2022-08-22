using mao_na_massa_balta.ContentContext;
using System;

namespace mao_na_massa_balta
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
            var course = new Course();
            course.Level = ContentContext.Enums.EContentLevel.Beginner;
        }
    }
}
