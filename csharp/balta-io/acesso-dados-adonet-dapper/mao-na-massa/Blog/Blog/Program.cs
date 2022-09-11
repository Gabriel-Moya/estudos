﻿using Blog.Models;
using Blog.Repositories;
using Microsoft.Data.SqlClient;
using System;

namespace Blog
{
    public class Program
    {
        private const string CONNECTION_STRING = @"Server=localhost,1433;Database=Blog;User ID=sa;Password=senhaS3creta;TrustServerCertificate=True";

        static void Main(string[] args)
        {
            var connection = new SqlConnection(CONNECTION_STRING);
            connection.Open();

            ReadUsers(connection);
            ReadRoles(connection);
            ReadTags(connection);
            //CreateUser(connection);
            //CreateRole(connection);

            connection.Close();
        }

        //CREATE
        public static void CreateUser(SqlConnection connection)
        {
            var user = new User()
            {
                Bio = "Descrição BIO",
                Email = "teste@balta.io",
                Image = "https://",
                Name = "Teste",
                PasswordHash = "HASH",
                Slug = "teste"
            };

            var repository = new Repository<User>(connection);
            repository.Create(user);
        }

        public static void CreateRole(SqlConnection connection)
        {
            var role = new Role()
            {
                Name = "Teste",
                Slug = "teste"
            };

            var repository = new Repository<Role>(connection);
            repository.Create(role);
        }

        public static void CreateTag(SqlConnection connection)
        {
            var tag = new Tag()
            {
                Name = "Teste",
                Slug = "teste"
            };

            var repository = new Repository<Tag>(connection);
            repository.Create(tag);
        }


        //READ
        public static void ReadUsers(SqlConnection connection)
        {
            var repository = new Repository<User>(connection);
            var items = repository.Get();

            foreach (var item in items)
            {
                Console.WriteLine(item.Name);
                foreach (var role in item.Roles)
                {
                    Console.WriteLine($" - {role.Name}");
                }
            }
        }

        public static void ReadRoles(SqlConnection connection)
        {
            var repository = new Repository<Role>(connection);
            var items = repository.Get();

            foreach (var item in items)
                Console.WriteLine(item.Name);
        }

        public static void ReadTags(SqlConnection connection)
        {
            var repository = new Repository<Tag>(connection);
            var items = repository.Get();

            foreach (var item in items)
                Console.WriteLine(item.Name);
        }


        //UPDATE
        public static void UpdateUser(SqlConnection connection)
        {
            var user = new User()
            {
                Id = 2,
                Bio = "Equipe | balta.io",
                Email = "hello@balta.io",
                Image = "https://",
                Name = "Equipe de suporte balta.io",
                PasswordHash = "HASH",
                Slug = "equipe-balta"
            };

            var repository = new Repository<User>(connection);
            repository.Update(user);
        }

        public static void UpdateRole(SqlConnection connection)
        {
            var role = new Role()
            {
                Id = 2,
                Name = "Equipe de suporte balta.io",
                Slug = "equipe-balta"
            };

            var repository = new Repository<Role>(connection);
            repository.Update(role);
        }

        public static void UpdateTag(SqlConnection connection)
        {
            var tag = new Tag()
            {
                Id = 2,
                Name = "Equipe de suporte balta.io",
                Slug = "equipe-balta"
            };

            var repository = new Repository<Tag>(connection);
            repository.Update(tag);
        }


        //DELETE
        public static void DeleteUser(SqlConnection connection)
        {
            var repository = new Repository<User>(connection);
            var user = repository.Get(2);
            repository.Delete(user);
        }

        public static void DeleteRole(SqlConnection connection)
        {
            var repository = new Repository<Role>(connection);
            var role = repository.Get(2);
            repository.Delete(role);
        }

        public static void DeleteTag(SqlConnection connection)
        {
            var repository = new Repository<Tag>(connection);
            var tag = repository.Get(2);
            repository.Delete(tag);
        }
    }
}
