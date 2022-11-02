using Blog.Data;
using Blog.Services;

var builder = WebApplication.CreateBuilder(args);

builder
    .Services
    .AddControllers()
    .ConfigureApiBehaviorOptions(options =>
    {
        options.SuppressModelStateInvalidFilter = true;
    });
builder.Services.AddDbContext<BlogDataContext>();
//builder.Services.AddTransient();    // Sempre cria um novo
//builder.Services.AddScoped();       // Cria um novo a cada transação (Request)
//builder.Services.AddSingleton();    // Singleton => 1 por App
builder.Services.AddTransient<TokenService>();

var app = builder.Build();
app.MapControllers();

app.Run();
