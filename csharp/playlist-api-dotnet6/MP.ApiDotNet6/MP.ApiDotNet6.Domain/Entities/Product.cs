using MP.ApiDotNet6.Domain.Validations;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MP.ApiDotNet6.Domain.Entities;

public sealed class Product
{
    public Product(string name, string codErp, decimal price)
    {
        Validation(name, codErp, price);
    }

    public Product(int id, string name, string codErp, decimal price)
    {
        DomainValidationException.When(id < 0, "ID do produto deve ser informado!");

        Id = id;
        Validation(name, codErp, price);
    }

    public int Id { get; private set; }
    public string Name { get; private set; }
    public string CodErp { get; private set; }
    public decimal Price { get; private set; }
    public ICollection<Purchase> Purchases { get; set; }

    private void Validation(string name, string codErp, decimal price)
    {
        DomainValidationException.When(string.IsNullOrEmpty(name), "Nome deve ser informado!");
        DomainValidationException.When(string.IsNullOrEmpty(codErp), "Código ERP deve ser informado!");
        DomainValidationException.When(price < 0, "Preço deve ser informado!");

        Name = name;
        CodErp = codErp;
        Price = price;
    }
}