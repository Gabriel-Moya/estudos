using FluentValidation;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MP.ApiDotNet6.Application.DTOs.Validators;

public class PersonDTOValidator : AbstractValidator<PersonDTO>
{
    public PersonDTOValidator()
    {
        RuleFor(x => x.Documento)
            .NotEmpty()
            .WithMessage("Documento deve ser informado!");

        RuleFor(x => x.Name)
            .NotEmpty()
            .WithMessage("Nome deve ser informado!");

        RuleFor(x => x.Phone)
            .NotEmpty()
            .WithMessage("Telefone deve ser informado!");
    }
}