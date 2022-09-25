﻿using blog.Models;
using Microsoft.EntityFrameworkCore;
using Microsoft.EntityFrameworkCore.Metadata.Builders;
using System;

namespace blog.Data.Mappings
{
    public class PostMap : IEntityTypeConfiguration<Post>
    {
        public void Configure(EntityTypeBuilder<Post> builder)
        {
            // Tabela
            builder.ToTable("Post");

            // Chave primária
            builder.HasKey(x => x.Id);

            // Identity
            builder.Property(x => x.Id)
                .ValueGeneratedOnAdd()
                .UseIdentityColumn();

            // Propriedades
            builder.Property(x => x.LastUpdateDate)
                .IsRequired()
                .HasColumnName("LastUpdateDate")
                .HasColumnType("SMALLDATETIME")
                //.HasDefaultValueSql("GETDATE()");
                .HasDefaultValue(DateTime.Now.ToUniversalTime());

            // Índices
            builder.HasIndex(x => x.Slug, "IX_Post_Slug")
                .IsUnique();
        }
    }
}
