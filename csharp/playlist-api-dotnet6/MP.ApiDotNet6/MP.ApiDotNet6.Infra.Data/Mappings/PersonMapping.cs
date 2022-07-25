﻿using Microsoft.EntityFrameworkCore;
using Microsoft.EntityFrameworkCore.Metadata.Builders;
using MP.ApiDotNet6.Domain.Entities;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MP.ApiDotNet6.Infra.Data.Mappings;

public class PersonMapping : IEntityTypeConfiguration<Person>
{
    public void Configure(EntityTypeBuilder<Person> builder)
    {
        builder.ToTable("Pessoa");

        builder.HasKey(x => x.Id);

        builder.Property(x => x.Id)
            .HasColumnName("IdPessoa")
            .UseIdentityColumn();

        builder.Property(x => x.Document)
            .HasColumnName("Documento");

        builder.Property(x => x.Name)
            .HasColumnName("Nome");

        builder.Property(x => x.Phone)
            .HasColumnName("Celular");

        builder.HasMany(x => x.Purchases)
            .WithOne(x => x.Person)
            .HasForeignKey(x => x.PersonId);
    }
}