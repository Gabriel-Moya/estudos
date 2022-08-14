﻿using System;
using System.Collections.Generic;
using System.IO;
using System.Text;

namespace EditorHTML
{
    public static class Editor
    {
        public static void Show()
        {
            Console.Clear();
            Console.BackgroundColor = ConsoleColor.White;
            Console.ForegroundColor = ConsoleColor.Black;
            Console.Clear();
            Console.WriteLine("MODO EDITOR");
            Console.WriteLine("-----------");
            Start();
        }

        public static void Start()
        {
            var file = new StringBuilder();

            do
            {
                file.Append(Console.ReadLine());
                file.Append(Environment.NewLine);
            } while (Console.ReadKey().Key != ConsoleKey.Escape);

            Console.WriteLine("-----------");
            Console.WriteLine(" Deseja salvar o arquivo? S/N");
            Viewer.Show(file.ToString());
            char save = char.Parse(Console.ReadLine());

            if (save == 'S')
            {
                using (var saveFile = new StreamWriter(@".\teste.txt"))
                {
                    saveFile.Write(file);
                }
            }
        }
    }
}
