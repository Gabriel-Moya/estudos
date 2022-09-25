﻿using blog.Models;
using Microsoft.EntityFrameworkCore;
using System;

namespace blog.Data
{
    public class BlogDataContext : DbContext
    {
        public DbSet<Category> Categories { get; set; }
        public DbSet<Post> Posts { get; set; }
        public DbSet<User> Users { get; set; }

        protected override void OnConfiguring(DbContextOptionsBuilder options)
        {
            options.UseSqlServer("Server=localhost,1433;Database=Blog;User ID=sa;Password=senhaS3creta");
            options.LogTo(Console.WriteLine);
        }
    }
}
