using Microsoft.EntityFrameworkCore;
using Microsoft.EntityFrameworkCore.Metadata.Builders;
using MP.ApiDotNet6.Domain.Entities;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MP.ApiDotNet6.Infra.Data.Mappings;

public class PurchaseMapping : IEntityTypeConfiguration<Purchase>
{
    public void Configure(EntityTypeBuilder<Purchase> builder)
    {
        builder.ToTable("Compra");

        builder.HasKey(x => x.Id);

        builder.Property(x => x.Id)
            .HasColumnName("IdCompra")
            .UseIdentityColumn();

        builder.Property(x => x.PersonId)
            .HasColumnName("IdPessoa");

        builder.Property(x => x.ProductId)
            .HasColumnName("IdProduto");

        builder.Property(x => x.Date)
            .HasColumnName("DataCompra");

        builder.HasOne(x => x.Person)
            .WithMany(x => x.Purchases);

        builder.HasOne(x => x.Product)
            .WithMany(x => x.Purchases);
    }
}