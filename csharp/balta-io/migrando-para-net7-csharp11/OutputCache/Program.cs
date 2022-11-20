using Microsoft.AspNetCore.Mvc;

var builder = WebApplication.CreateBuilder(args);
builder.Services.AddTransient<MeuServico>();
builder.Services.AddOutputCache(options =>
{
    options.DefaultExpirationTimeSpan = TimeSpan.FromSeconds(5);
});
builder.Services.AddControllers();

// Para desabilitar o comportamento padr�o do Implicity From Services
builder.Services.Configure<ApiBehaviorOptions>(options =>
{
    options.DisableImplicitFromServicesParameters = true;
});

var app = builder.Build();

app.MapGet("/", (MeuServico servico) => new
{
    date = DateTime.Now
});

app.UseOutputCache();
app.MapControllers();

app.Run();

public class MeuServico
{
    public void DoSomething() { }
}
