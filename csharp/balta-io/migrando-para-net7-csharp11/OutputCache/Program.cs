using Microsoft.AspNetCore.Mvc;

var builder = WebApplication.CreateBuilder(args);
builder.Services.AddTransient<MeuServico>();
builder.Services.AddOutputCache(options =>
{
    options.DefaultExpirationTimeSpan = TimeSpan.FromSeconds(5);
});
builder.Services.AddControllers();

// Para desabilitar o comportamento padrão do Implicity From Services
//builder.Services.Configure<ApiBehaviorOptions>(options =>
//{
//    options.DisableImplicitFromServicesParameters = true;
//});

var app = builder.Build();

app.MapGet("/", [EndpointSummary("Send a Hello request to the backend")] (MeuServico servico) => new
{
    date = DateTime.Now
}).WithDescription("Descrição do método get!");

// Queries
app.MapGet("/queries", (int[] q)
    => $"q1: {q[0]}, q2: {q[1]}, q3: {q[2]}");

// Tags
app.MapGet("/tags", (Tag[] tags) =>
{
    return Results.Ok(tags);
});

//app.UseOutputCache();
app.MapControllers();

app.Run();

public class MeuServico
{
    public void DoSomething() { }
}

class Tag
{
    public string? TagName { get; init; }

    public static bool TryParse(string? tagName, out Tag tag)
    {
        if (tagName is null)
        {
            tag = default;
            return false;
        }

        tag = new Tag { TagName = tagName };
        return true;
    }

    public override string ToString() => TagName ?? string.Empty;
}