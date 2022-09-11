import { Component } from '@angular/core';

@Component({
  selector: 'app-root', // <app-root>
  templateUrl: './app.component.html',
  //template: '<p>Meu template</p>',
  styleUrls: ['./app.component.css']
})
export class AppComponent {
  public todos: any[] = [];
  public title: String = 'Minhas tarefas';

  constructor() {
    this.todos.push('Ir à luta de judô');
    this.todos.push('Ir ao mercado');
    this.todos.push('Cortar o cabelo');
    this.todos.push(1999);
    this.todos.push({ message: 'teste' });
    this.todos.push(new Date());
  }

  alteraTexto() {
    this.title = 'Novo título'
  }
}
