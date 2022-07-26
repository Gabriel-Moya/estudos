using Microsoft.EntityFrameworkCore;
using Microsoft.EntityFrameworkCore.Metadata.Builders;
using MP.ApiDotNet6.Domain.Entities;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MP.ApiDotNet6.Infra.Data.Mappings;

public class ProductMapping : IEntityTypeConfiguration<Product>
{
    public void Configure(EntityTypeBuilder<Product> builder)
    {
        builder.ToTable("Produto");

        builder.HasKey(x => x.Id);

        builder.Property(x => x.Id)
            .HasColumnName("IdProduto")
            .UseIdentityColumn();

        builder.Property(x => x.CodErp)
            .HasColumnName("CodErp");

        builder.Property(x => x.Name)
            .HasColumnName("Nome");

        builder.Property(x => x.Price)
            .HasColumnName("Preco");

        builder.HasMany(x => x.Purchases)
            .WithOne(x => x.Product)
            .HasForeignKey(x => x.ProductId);
    }
}