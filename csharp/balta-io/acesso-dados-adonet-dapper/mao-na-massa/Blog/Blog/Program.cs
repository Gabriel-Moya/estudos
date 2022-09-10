using Blog.Models;
using Dapper.Contrib.Extensions;
using Microsoft.Data.SqlClient;
using System;

namespace Blog
{
    public class Program
    {
        private const string CONNECTION_STRING = @"Server=localhost,1433;Database=Blog;User ID=sa;Password=senhaS3creta";

        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
        }

        public static void ReadUsers()
        {
            using(var connection = new SqlConnection(CONNECTION_STRING))
            {
                var users = connection.GetAll<User>();

                foreach(var user in users)
                {
                    Console.WriteLine(user.Name);
                }
            }
        }
    }
}
